#include "MapManager.h"
#include <iostream>

void MapManager::ReplacePrototype(MapFile mapFile, std::string target, std::string origin) {
	if (mapFile.Format == NULL)
		throw std::runtime_error("Format does not contain value");

	if (target.empty())
		throw std::runtime_error("Target is empty");

	if (origin.empty())
		throw std::runtime_error("Origin is empty");

	std::string line;
	switch (mapFile.Format) {
	case 7: //для 7 формата записи карты
		while (std::getline(*mapFile.File.get(), line)) {
			if ((line.compare(0, 9, "- proto: ") == NULL) &&
				(line.compare(9, line.size() - 1, target) == NULL)) {
				//если найден прототип ->
				break;
			}
		}
		break;

	default: //если формат не поддерживается
		throw std::runtime_error("the file has an unsupported format");
		break;
	}
}

void MapManager::DeletePrototype(MapFile mapFile, std::string target) {
	if (mapFile.Format == NULL)
		throw std::runtime_error("Format does not contain value");

	if (target.empty())
		throw std::runtime_error("Target is empty");
}