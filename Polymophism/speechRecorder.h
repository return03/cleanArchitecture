#include <iostream>
#ifndef SPEECHRECORDER_H
#define SPEECHRECORDER_H
#include "ioDevice.h"

using namespace std;


class speechRecorder : public ioDevice{

public:
    int read();

    void write(int  );
};
#endif
