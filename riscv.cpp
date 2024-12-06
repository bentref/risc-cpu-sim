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
	// Convert each arg to int using stoi
	std::vector<int> intArgs;
	for (std::string arg : args) {
		intArgs.push_back(std::stoi(arg));
	}
	if (op == "lui") {
		// lui rd,imm
		this->setRegister(intArgs[0], intArgs[1] << 12);
		return 0;
	}
	if (op == "addi"){
		// Format: addi rd,rs1,imm
		int result = this->registers[intArgs[1]] + intArgs[2];
		this->setRegister(intArgs[0], result);
		return 0;
	}
	if (op == "lui") {
		// lui rd,imm
		this->setRegister(intArgs[0], intArgs[1]);
		return 0;
	}
	if (op == "slti") {
		int result = 
			(this->getRegister(intArgs[1] < intArgs[2])) ? 1 : 0;
		this->setRegister(intArgs[0], result);
		return 0;
	}
	if (op == "xori") {
		int result = this->getRegister(intArgs[1]) ^ intArgs[2];
		this->setRegister(intArgs[0], result);
		return 0;
	}
	else {
		std::cout<<"default";
	}
	return 0;
		
};
