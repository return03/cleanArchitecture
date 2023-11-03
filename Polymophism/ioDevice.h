#include <iostream>
#ifndef IODEVICE_H
#define IODEVICE_H
using namespace std;

class ioDevice{

public:
    virtual int read();

    virtual void write(int);

};
#endif
