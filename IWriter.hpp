#pragma once
#include "OCEDataStruct.hpp"

class IWriter {
public:
    virtual void Write(StructOCEData_t& data) = 0; 
};