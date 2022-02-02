#include "comp.h"
#include "dft.h"


int main(){

    /*
    //-PI to PI sequence

    std::vector<double> x;
    std::vector<double> sine;

    for(double i = -PI; i<PI; i+=0.01){
        sine.push_back(sin(2*PI*1*i));
        x.push_back(i);
    }
    */

    std::vector<double> x = {1.1, 2.4, 3.8, 4.2, 5.6};

    //create the DFT object
    DFT d(x);

    //get the DFT sequence from dft method
    std::vector<Complex> Xk = d.dft();
    
    for(Complex &obj : Xk){
        obj.print();
    }

    return 0;
}