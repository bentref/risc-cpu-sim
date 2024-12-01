class RISCVCore {
	public:
		int registers[32];
		int PC;
		int parseAndCall(std::string& instr);
		RISCVCore();
	private:
		int runInstr(std::string op, std::vector<std::string> args);
};
