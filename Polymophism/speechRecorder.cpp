#include <iostream>
#include "speechRecorder.h"


using namespace std;



int speechRecorder::read(){
    return 2;
};


void speechRecorder::write(int i){
    cout<<"The speechRecorder got new data "<<i/2<<endl;
    cout<<"Checking out! Happy Day!!!"<<endl;
}


