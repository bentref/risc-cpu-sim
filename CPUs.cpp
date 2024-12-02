#include <iostream>
#include <vector>
#include <string>
#include "riscv.hpp"


class Mod {
	private:
		int* l2Cache;
		int l2Size;
		RISCVCore C1;
		RISCVCore C2;
	public:
		Mod() {
			this->C1 = RISCVCore();
			this->C2 = RISCVCore();
		};

		
};

class bulldozerCPU {
	public:
		std::string name;
		int* l3Cache;
		int l3Size;
		std::vector<Mod> modules;
		int numModules;
		void printInfo() {
			std::string reportedCores = std::to_string(this->numModules * 2);
			std::string reportedModules = std::to_string(this->numModules);
			std::cout<<"Name: " + this->name + "\n";
			std::cout<<reportedCores + " cores (in " + reportedModules + " physical module(s))";
		}
			
	private:
		int speedMHz;
};

class SimpleCPU {
	private:
		RISCVCore C;
	public:
	
		int schedule(std::string instr) {
			return this->C.parseAndCall(instr);
		};
	
	
};

int main() {
	SimpleCPU cpu1;
	
	int result = cpu1.schedule("addi    sp,sp,-32");
	std::cout<<std::to_string(result);
	return 0;
};
