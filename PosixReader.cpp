#include "PosixReader.hpp"
#include <sys/ipc.h>
#include <sys/shm.h>
#include <iostream>
#include <stdio.h>
#include <cstring>

StructOCEData_t PosixReader::Read(std::size_t structSize) {
    std::cout << "Reading content from shared memory... ";
    key_t key = ftok("test", 65);
    int shm_id = shmget(key, structSize, 0666|IPC_CREAT);
    auto addr = (StructOCEData_t *) shmat(shm_id, SHM_NULLPTR, 0);

    StructOCEData_t* data = (StructOCEData_t*) std::malloc(structSize);
    std::memcpy(&data, addr, structSize);
    shmdt(addr);
    std::cout << "Done!" << std::endl;

    return *data;
}