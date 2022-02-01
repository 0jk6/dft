#include <iostream>
#include "comp.h"

int main(){

    Complex a(2.3, 4);
    Complex b(2.3, 4);

    Complex d = a/b;
    d.print();

    return 0;
}