#if WIN32

#include <iostream>
#include "MapFile.h"

int main(int argc, char* argv) {
	std::cout << "hello world!";
	
	return 0;
}

#else
#error This program for windows OS
#endif