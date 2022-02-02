#include <iostream>
#include <cmath>
#include <vector>
#include "comp.h"

//O(N^2) Time complexity
std::vector<Complex> dft(std::vector<double> &x){
    int N = x.size();
    std::vector<Complex> Xk;

    for(int k=0; k<N; k++){
        Complex res(0, 0);
        for(int n=0; n<N; n++){
            //exp is converted to sine and cosines
            double real = x[n] * cos((2*PI*k*n)/N);
            double imag = -1*(x[n] * sin((2*PI*k*n)/N));
            res = res + Complex(real, imag);
        }
        
        Xk.push_back(res);
    }

    return Xk;
}

int main(){

    // std::vector<double> x;
    // std::vector<double> sine;

    // for(double i = -PI; i<PI; i+=0.01){
    //     sine.push_back(sin(2*PI*1*i));
    //     x.push_back(i);
    // }

    std::vector<double> x = {1.1, 2.4, 3.8, 4.2, 5.6}; //output should be {17.1+0j, -2.9+3.279j, -2.9+1.501j, -2.9-1.501j, -2.9-3.279j}

    std::vector<Complex> Xk = dft(x);

    for(Complex &obj : Xk){
        obj.print();
    }

    return 0;
}