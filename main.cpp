#include <iostream>
#include "PosixReader.hpp"
#include "PosixWriter.hpp"

int main() {
  std::cout << "Hello World!\n";
  
  StructOCEData_t data;
  data.size = sizeof data;

  std::cout << "Going for the pipes!" << std::endl;

  PosixReader reader;
  PosixWriter writer;

  std::cout << "Calling!" << std::endl;

  reader.Read(data.size);
  writer.Write(data);
}