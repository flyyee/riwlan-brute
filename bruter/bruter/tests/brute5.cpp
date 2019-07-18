#include <iostream>
#include <math.h>

const unsigned int characterssize = 36;
const std::string characters[characterssize] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z", "0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};	

std::string gen(unsigned long int n) {
	int p1 = n / pow(36, 3);
	int p2 = (n - p1 * (36, 3)) / pow(36, 2);
	int p3 = (n - p1 * pow(36, 3) - p2 * pow(36, 2)) / pow(36, 1);
	int p4 = (n - p1 * pow(36, 3) - p2 * pow(36, 2) - p3 * pow(36, 1)) / pow(36, 0);
	
	std::cout << p1 << std::endl;
	std::cout << p2 << std::endl;
	std::cout << p3 << std::endl;
	std::cout << p4 << std::endl;
	
	std::cout << characters[p1];
	std::cout << characters[p2];
	std::cout << characters[p3];
	std::cout << characters[p4];
	
	return "ok";
}


int main() {
	gen(466500);
}
