#include "PosixWriter.hpp"
#include <sys/ipc.h>
#include <sys/shm.h>
#include <iostream>
#include <stdio.h>
#include <cstring>

void PosixWriter::Write(StructOCEData_t& data) {
    std::cout << "Writing content to shared memory... ";
    key_t k = ftok("test", 65);
    int shm_id = shmget(k, sizeof data, 0666|IPC_CREAT);
    if (shm_id < 0) {

    }
    auto addr = (StructOCEData_t *) shmat(shm_id, SHM_NULLPTR, 0);
    std::memcpy(addr, &data, sizeof data);
    std::cout << "Done!" << std::endl;
}