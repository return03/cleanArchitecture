#include <iostream>

using namespace std;

int main(){
    int no=7;
    int* noPtr= &no;

    cout<<"no: "<< no<<" should be the same as ";
    cout<<"*noPtr: "<< *noPtr<<endl;
    cout<<"noPtr: "<< noPtr<<" should be the same as ";
    cout<<"&no: "<< &no<<endl;

}