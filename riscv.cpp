#include "riscv.hpp"
#include <iostream>
#include <vector>
#include <string>
#include "utils.hpp"

RISCVCore::RISCVCore() {
	this->registers[0] = 0; // set x0 register. TODO: Make it impossible to change
};

int RISCVCore::parseAndCall (std::string& instr) {
			std::vector<std::string> splitBySpace = split(instr, " ");
			std::vector<std::string> splitByComma = split(instr, ",");
			std::string op = splitBySpace[0];
			return runInstr(op, splitByComma);
};

int RISCVCore::runInstr(std::string op, std::vector<std::string> args) {
	if (op == "addi"){
		// addi rd,rs1,imm
		int rd = std::stoi(args[0]);
		int rs1 = std::stoi(args[1]);
		int imm = std::stoi(args[2]);
		this->registers[rd] = this->registers[rs1] + imm;
		return 0;
	}
	
	else {
		std::cout<<"default";
	};
	return 0;
		
};
