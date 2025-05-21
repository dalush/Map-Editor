#include "Importer.h"
#include <iostream>

MapFile ImportMap(std::string path) {
	if (path.find_last_of('.') == std::string::npos)
		throw std::runtime_error("path has no extension");

	if (!(path.substr(path.find_last_of('.')) == ".yml" ||
		path.substr(path.find_last_of('.')) == ".yaml"))
		throw std::runtime_error("Inappropriate file extension");

	MapFile MAP(std::make_unique<std::fstream>());
	MAP.File->exceptions(std::ifstream::failbit | std::ifstream::badbit);
	MAP.File->open(path, std::fstream::in | std::fstream::out | std::fstream::app);

	std::string line;
	while (std::getline(*MAP.File.get(), line)) {
		if (line.compare(0, 10, "  format: ") == 0) {
			MAP.Format = line[10] - '0';
			break;
		}
	}

	return MAP;
}