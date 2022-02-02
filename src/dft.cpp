#include "dft.h"
#include <vector>
#include <cmath>

//Naive O(N^2) DFT implementation
std::vector<Complex> DFT::dft(){
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
