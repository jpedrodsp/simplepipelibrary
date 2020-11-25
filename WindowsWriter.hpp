#pragma once
#include "IWriter.hpp"

class WindowsWriter : IWriter {
public:
    void Write(StructOCEData_t& data) {};
    WindowsWriter() {};
};