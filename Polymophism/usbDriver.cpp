
#include <iostream>
#include "usbDriver.h"


using namespace std;

int usbDriver::read(){
    return 1;
}

void usbDriver::write(int i ){
    cout<<"The USB device got new data "<<i*i<<endl;
}

