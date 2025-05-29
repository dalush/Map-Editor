#if WIN32

#include <iostream>
#include "MapManager.h"

int main(int argc, char* argv) {

	try {
		auto map = ImportMap("C:/C++/test map.yml");
		std::cout << "sucess import" << std::endl;

		MapManager::ReplacePrototype(std::move(map), "ActionToggleLight", "null");
	}
	catch (const std::exception& ex) {
		std::cerr << ex.what() << std::endl;
	}

	return 0;
}

#else
#error This program for windows OS
#endif