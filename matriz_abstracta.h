#ifndef MATRIZ_ABSTRACTA
#define MATRIZ_ABSTRACTA

#include <iostream>

using namespace std;

template <class super_type> class Matriz_Abstracta {
public:
    virtual bool   set(unsigned i, unsigned j, super_type value) = 0;
    virtual super_type get(unsigned i, unsigned j) = 0;
    
protected:
    super_type* data;
};

#endif // MATRIZ_ABSTRACTA
