#include <iostream>
#include <math.h>

const int charactersize = 36;
const std::string characters[charactersize] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z", "0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};	


std::string gen(const long long unsigned int n) {
	if (n > 2821109907455) {
		return "";
	}
	short quo1 = n / pow(charactersize, 7);
	unsigned long long int rem1 = n - quo1 * pow(charactersize, 7);
	
	short quo2 = rem1 / pow(charactersize, 6);
	unsigned long long int rem2 = rem1 - quo2 * pow(charactersize, 6);
	
	short quo3 = rem2 / pow(charactersize, 5);
	unsigned long long int rem3 = rem2 - quo3 * pow(charactersize, 5);
	
	short quo4 = rem3 / pow(charactersize, 4);
	unsigned long long int rem4 = rem3 - quo4 * pow(charactersize, 4);
	
	short quo5 = rem4 / pow(charactersize, 3);
	unsigned long int rem5 = rem4 - quo5 * pow(charactersize, 3);
	
	short quo6 = rem5 / pow(charactersize, 2);
	unsigned long int rem6 = rem5 - quo6 * pow(charactersize, 2);
	
	short quo7 = rem6 / pow(charactersize, 1);
	unsigned long int rem7 = rem6 - quo7 * pow(charactersize, 1);
	
	short quo8 = rem7 / pow(charactersize, 0);
	unsigned long int rem8 = rem7 - quo8 * pow(charactersize, 0);
	
	return characters[quo1]+characters[quo2]+characters[quo3]+characters[quo4]+characters[quo5]+characters[quo6]+characters[quo7]+characters[quo8];
}

int main() {
	
	std::cout << characters[8];
	std::cout << characters[9];
	std::cout << characters[8];
	std::cout << characters[32];
	std::cout << characters[12];
	std::cout << characters[21];
	std::cout << characters[17];
	std::cout << characters[18];
	return 0;
	
//	char x = 50;
//	std::cout << int(x);
//	return 0;
	
	const long long unsigned int n = 2821109907455;
	std::cout << gen(n);
	return 0;
}
