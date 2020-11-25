#pragma once
#include "IReader.hpp"

class WindowsReader : IReader {
public:
     StructOCEData_t Read(std::size_t structSize);
     WindowsReader() {};
};