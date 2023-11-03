#include <iostream>
#ifndef USBDRIVER_H
#define USBDRIVER_H
#include "ioDevice.h"
using namespace std;

class usbDriver : public ioDevice{

public:
    int read();

    void write(int);
};
#endif
