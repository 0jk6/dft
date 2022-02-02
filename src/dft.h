#ifndef __DFT_H
#define __DFT_H

#include "comp.h"
#include <vector>

class DFT{
public:
    std::vector<Complex> Xk;
    std::vector<double> x;

    DFT(std::vector<double> &inpSequence){
        x = inpSequence;
    }

    std::vector<Complex> dft();
};

#endif