#include "WindowsWriter.hpp"
#include <windows.h>
#include <string>

void WindowsWriter::Write(StructOCEData_t& data) {
    std::wstring pipeName = TEXT("\\\\.\\pipe\\test");
    auto pipePermissions = GENERIC_READ | GENERIC_WRITE;
    auto pipeHandler = CreateFile(
        pipeName.data(),
        pipePermissions,
        0,
        NULL,
        OPEN_EXISTING,
        0,
        NULL
    );
}