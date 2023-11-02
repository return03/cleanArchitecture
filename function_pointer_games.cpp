#include <iostream>

using namespace std;
class Car{
private:
int number=0;

public:
    int getNumber(){
        return number;
    }

    int setNumber(int *no){
        number=*no;
    }

    double kmh_to_mph(double kmh){
        return kmh*1.6;
    }

    double lpkm_to_mpg(double lpkm){
        return lpkm*235.215;
    }


};

typedef double(Car::*fnct)(double);
double conversion(double i, Car* Auto, fnct func){
    return (Auto->*func)(i);
};

int main (){

    Car myCar;

    cout<<conversion(1, &myCar, &Car::kmh_to_mph)<<endl;

}