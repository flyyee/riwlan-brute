#include <iostream>
#include <fstream>

int main() {
	std::ofstream file;
	file.open("bruteres.txt");
	int n = 0;
	const unsigned int characterssize = 36;
	const std::string characters[characterssize] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z", "0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
	for (int a = 0; a < characterssize; a++) {
		for (int b = 0; b < characterssize; b++) {
			for (int c = 0; c < characterssize; c++) {
//				n+=1;
//				file << characters[a] + characters[b] + characters[c] << std::endl;
				for (int d = 0; d < characterssize; d++) {
					n+=1;
					if (n == )
					file << characters[a] + characters[b] + characters[c] + characters[d] + characters[e] + characters[f] + characters[g] + characters[h] << std::endl;
//					for (int e = 0; e < characterssize; e++) {
//						for (int f = 0; f < characterssize; f++) {
//							for (int g = 0; g < characterssize; g++) {
//								for (int h = 0; h < characterssize; h++) {
////									std::cout << characters[a];
////									std::cout << characters[b];
////									std::cout << characters[c];
////									std::cout << characters[d];
////									std::cout << characters[e];
////									std::cout << characters[f];
////									std::cout << characters[g];
////									std::cout << characters[h];
////									std::cout << std::endl;
//									
//									n+=1;
//									file << characters[a] + characters[b] + characters[c] + characters[d] + characters[e] + characters[f] + characters[g] + characters[h] << std::endl;
//								}
//							}
//						}
//					}
				}
			}
		}
	}
	file.close();
	return n; //46656
}
