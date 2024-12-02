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

void RISCVCore::setRegister(int reg, int x) {
	if (reg <= 0) {
		return;
	} else if (reg < 32) {
		this->registers[reg] = x;
	}
};

int RISCVCore::getRegister(int reg) {
	return this->registers[reg];
};

int RISCVCore::runInstr(std::string op, std::vector<std::string> args) {
	if (op == "addi"){
		// addi rd,rs1,imm
		int rd = std::stoi(args[0]);
		int rs1 = std::stoi(args[1]);
		int imm = std::stoi(args[2]);
		int result = this->registers[rs1] + imm;
		this->setRegister(rd, result);
		return 0;
	}
	
	else {
		std::cout<<"default";
	};
	return 0;
		
};
