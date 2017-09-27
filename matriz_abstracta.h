#ifndef MATRIZ_ABSTRACTA
#define MATRIZ_ABSTRACTA

#include <iostream>

using namespace std;

class Matriz_Abstracta {
public:
    virtual bool   set(unsigned i, unsigned j, double value) = 0;
    virtual double get(unsigned i, unsigned j) = 0;
    
protected:
    double* data;
};

#endif // MATRIZ_ABSTRACTA
