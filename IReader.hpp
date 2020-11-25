#pragma once
#include "OCEDataStruct.hpp"
#include <cstddef>

class IReader {
public:
    virtual StructOCEData_t Read(std::size_t structSize) = 0;
};