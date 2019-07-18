#include <iostream>
#include <fstream>

int main() {
	const unsigned int characterssize = 36;
	const std::string characters[characterssize] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z", "0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
	int values[3] = {0, 0, 0};
	
	int n = 0;
	
	std::fstream file;
	file.open("bruteres.txt");
	
	while (values[2] != 36) {
		if (n == 46650) {
			std::cout << characters[values[0]] + characters[values[1]] + characters[values[2]];
		}
		n += 1;
		values[0] += 1;
		
		
		
		if (values[0] == 36) {
			values[1] += 1;
			values[0] = 0;
		}
		if (values[1] == 36) {
			values[2] += 1;
			values[1] = 0;
		}
		
		file << characters[values[0]] + characters[values[1]] + characters[values[2]];
//		std::cout << characters[values[0]] + characters[values[1]] + characters[values[2]] << std::endl;
	}
	
	file.close();
	//n is 46655
	
	return n;
	
	
}
