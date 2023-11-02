
#include <iostream>

using namespace std;

class Foo {

public:
    int add(int i, int j) {
        return i+j;
    }
    int mult(int i, int j) {
        return i*j;
    }
    static int negate(int i) {
        return -i;
    }
};

int bar1(int i, int j, Foo* pFoo, int(Foo::*pfn)(int,int)) {
    
    return (pFoo->*pfn)(i,j);
}


typedef int(Foo::*Foo_pfn)(int,int);

int bar2(int i, int j, Foo* pFoo, Foo_pfn pfn) {
    return (pFoo->*pfn)(i,j);
}

//typedef auto(*PFN)(int) -> int;
// C++ only, same as: typedef int(*PFN)(int);

//int bar3(int i, PFN pfn) {
    //return pfn(i);
//}

int main() {
    Foo foo;
    
    int b1=bar1(2,4, &foo, &Foo::add);
    int b2= bar2(3,5, &foo, &Foo::mult);
    //int b3= bar3(6, &Foo::negate);
    cout<<"The result of b1 is: "<<b1;
    return 0;
}