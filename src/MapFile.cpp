#include "MapFile.h"

MapFile::MapFile(std::unique_ptr<std::fstream> file) :
	File(std::move(file))
{}