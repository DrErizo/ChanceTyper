#include<iostream>
#include<string.h>
#include<ctime>

std::string word;
std::string abc= " !#$%&\'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~";
int main(int argc, const char **argv) {
	srand(time(0));
        std::cout << "Input:";
        std::cin >> word;
        int rng, j;
        for(int i=0;i<word.length();){
                rng = rand() % abc.length();
                if(abc[rng] == word[i]){
			std::cout << "Found: " << word[i] << "\n";
        		i++;
                }else{
        		i = 0;
        	}
        	j++;	
		std::cout << "Number of tries: " << j << "\n";
        }
}
