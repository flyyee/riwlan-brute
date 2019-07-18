#include <iostream>
#include <fstream>
#include <vector>

int main() {
	std::vector<std::string>passes;
	std::ifstream file("bruteres.txt");
	std::string str;
	while(std::getline(file, str)) {
		passes.push_back(str);
//		std::cout << str << std::endl;
	}
	
	std::cout << passes[13947];
	
	return 0;
	
}
