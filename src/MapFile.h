#pragma once

#include <memory>
#include <fstream>
#include <cstdint>

class MapFile {
public:
	std::unique_ptr<std::fstream> File;

	int16_t Format;

	MapFile(std::unique_ptr<std::fstream> file, int16_t format);
};