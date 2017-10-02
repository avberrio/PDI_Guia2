#include <stdio.h>
#include "matriz_abstracta.h"


class Matriz3x3 : public Matriz_Abstracta
{
public:
    bool set(unsigned i, unsigned j, double value);
    double get(unsigned i, unsigned j);
    Matriz3x3 operator+(Matriz3x3 &B);
    Matriz3x3(double *array);
    Matriz3x3();
};
