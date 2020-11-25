#pragma once
#include "IWriter.hpp"

#define SHM_NULLPTR (void *) 0

class PosixWriter : IWriter {
public:
    void Write(StructOCEData_t& data);
    PosixWriter() {};
};