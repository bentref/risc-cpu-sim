#include <iostream>
#include <vector>
#include <string>
#include "utils.hpp"

class integerCore {
	private:
		int[32] registers;
		int PC;
		
};

class mod {
	public:
		int* l2Cache;
		int l2Size;
		bdCore C1;
		bdCore C2;
};

class bulldozerCPU {
	public:
		int* l3Cache;
		int l3Size;
		std::vector<mod> modules;
		int numModules;
		void printInfo() {
			std::string reportedCores = std::to_string(this->numModules * 2);
			std::string reportedModules = std::to_string(this->numModules);
			std::cout<<"Name" + this->name + "\n";
			std::cout<<"Name" + this->name + "\n";
			
	private:
		std::string name;
		int speedMHz;
};






class RISCVEmulator {
	public:
	private:
		int parseAndCall(std::string& instr) {
			std::vector<std::string> splitBySpace = split(instr, " ");
			std::vector<std::string> splitByComma = split(instr, ",");
			std::string op = splitBySpace[0];
			return runInstr(op, splitByComma);
		};
		int runInstr(std::string op, std::vector<std::string> args) {
			if (op == "addi"){
				std::cout<<"addi";
			}
			else {
				std::cout<<"default";
			};
			return 0;
				
		}

		
};

