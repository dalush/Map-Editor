#pragma once

#include "Importer.h"

namespace MapManager {
	void ReplacePrototype(MapFile mapFile, std::string target, std::string origin);

	void DeletePrototype(MapFile mapFile, std::string target);
}