#include "Buffer/StaticBuffer.h"
#include "Cache/OpenRelTable.h"
#include "Buffer/BlockBuffer.h"
#include "Disk_Class/Disk.h"
#include "FrontendInterface/FrontendInterface.h"
#include "BPlusTree/BPlusTree.h"
#include "Schema/Schema.h"
#include <iostream>
#include <cstring>

int main(int argc, char *argv[]) {
    Disk disk_run;
    StaticBuffer buffer;
    OpenRelTable cache;

    StaticBuffer::print();
    
    return FrontendInterface::handleFrontend(argc, argv);
    
}