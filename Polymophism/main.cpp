
// C++ Program to demonstrate
// the Virtual Function
#include <iostream>
#include <string>
#include "ioDevice.h"
#include "usbDriver.h"
#include "speechRecorder.h"

using namespace std;

int main(){
    ioDevice* ioD;
    usbDriver usb;
    speechRecorder speechR;

    ioD=&usb;

    cout<<"Data read from usb: "<<ioD->read()<<endl;
    cout<<"Writting data to usb: "<<endl;
    ioD->write(4);

    ioD=&speechR;

    cout<<"Data read from speech recorder: "<<ioD->read()<<endl;
    cout<<"Writting data to spech recorder: "<<endl;
    ioD->write(4);



};
