#include "MapFile.h"

MapFile::MapFile(std::unique_ptr<std::fstream> file, int16_t format) :
	File(std::move(file)),
	Format(format)
{}