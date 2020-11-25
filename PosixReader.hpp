#pragma once
#include "IReader.hpp"

#define SHM_NULLPTR (void *) 0

class PosixReader : IReader {
public:
     StructOCEData_t Read(std::size_t structSize);
     PosixReader() {};
};