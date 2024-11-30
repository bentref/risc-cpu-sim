class bulldozerCPU {
	public:
		int* l3Cache;
		int l3Size;
		struct mod* modules;
		int numModules;
};

class mod {
	public:
		int* l2Cache;
		int l2Size;
		bdCore C1;
		bdCore C2;
};

class bdCore {
	public:
		
};

class RISCVEmulator {
	public:
	private:
		std::vector<std::string> parseInstr(std::string& instr) {
			std::string splitBySpace = split(instr, " ");
			std::vector<std::string> args = split(instr, ",");
			std::string op = splitBySpace[0];
			
		}
};
			

// Tokenize strings. Source: https://stackoverflow.com/a/14266139	
std::vector<std::string> split(std::string& s, const std::string& delimiter) {
    std::vector<std::string> tokens;
    size_t pos = 0;
    std::string token;
    while ((pos = s.find(delimiter)) != std::string::npos) {
        token = s.substr(0, pos);
        tokens.push_back(token);
        s.erase(0, pos + delimiter.length());
        // Consumes split and delimiter portions of s
    }
    tokens.push_back(s);

    return tokens;
}
