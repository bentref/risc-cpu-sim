#include <iostream>
#include <vector>
#include <string>

class RISCVCore {
	public:
		int PC;
		int parseAndCall(std::string& instr);
		void setRegister(int reg, int x);
		int getRegister(int reg);
		RISCVCore();
	private:
		int runInstr(std::string op, std::vector<std::string> args);
		int registers[32];
};
