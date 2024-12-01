#include "riscv.hpp"
#include <iostream>
#include <vector>
#include <string>
#include "utils.hpp"

RISCVCore::RISCVCore() {
	// do nothing
	return;
};

int RISCVCore::parseAndCall (std::string& instr) {
			std::vector<std::string> splitBySpace = split(instr, " ");
			std::vector<std::string> splitByComma = split(instr, ",");
			std::string op = splitBySpace[0];
			return runInstr(op, splitByComma);
};

int RISCVCore::runInstr(std::string op, std::vector<std::string> args) {
	if (op == "addi"){
		std::cout<<"addi";
	}
	else {
		std::cout<<"default";
	};
	return 0;
		
};
