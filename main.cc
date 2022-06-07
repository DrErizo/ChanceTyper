#include<iostream>
#include<string.h>

std::string word;
int main(int argc, const char **argv) {
	srand(time(0));
        std::cout << "Input:";
        std::cin >> word;
        uint64_t j = 0;
	uint8_t rng;
        for(uint8_t i=0;i<word.length();){
                rng = rand() % 255 - 32;
                if((char)rng == word[i]){
        		i++;
                }else{
        		i = 0;
        	}
        	j++;	
        }
	std::cout << "Found phrase after: " << j << " tries\n";
}
