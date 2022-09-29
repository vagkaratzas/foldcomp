/**
 * File: structure_reader.h
 * Project: foldcomp
 * Created: 2022-08-04 15:02:17
 * Author: Hyunbin Kim (khb7840@gmail.com)
 * Description:
 *     This code is written as part of project "src".
 * References:
 *     GemmiWrapper.cpp in https://github.com/steineggerlab/foldseek
 * ---
 * Last Modified: 2022-09-13 15:14:16
 * Modified By: Hyunbin Kim (khb7840@gmail.com)
 * ---
 * Copyright © 2022 Hyunbin Kim, All rights reserved
 */

#pragma once
#include "atom_coordinate.h"

class StructureReader {
private:
    void updateStructure(void* void_st, const std::string& filename);
public:
    std::string filepath;
    std::string title;
    std::vector<AtomCoordinate> atoms;
    bool loadFromBuffer(const char* buffer, size_t bufferSize, const std::string& name);
    bool load(const std::string& filename);
    bool readBackboneAtoms(std::vector<AtomCoordinate>& backboneAtoms);
    bool readAllAtoms(std::vector<AtomCoordinate>& allAtoms);
};
