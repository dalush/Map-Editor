#if WIN32

#include <iostream>
#include "Importer.h"

int main(int argc, char* argv) {
	std::cout << "hello world!" << std::endl;

	try {
		auto map = ImportMap("C:/SS14 repos/TGMC14/Resources/Maps/amber.yml");
		std::cout << map.Format << std::endl;
	}
	catch (const std::exception& ex) {
		std::cerr << ex.what() << std::endl;
	}

	return 0;
}

#else
#error This program for windows OS
#endif