#include "matriz3x3.h"

bool Matriz3x3::set(unsigned i, unsigned j, double value)
{
    if (i < 3 || j < 3)
    {
        data[3 * i + j] = value;
        return true;
    }
    else
    {
        return false;
    }
}

double Matriz3x3::get(unsigned i, unsigned j)
{
    return data[3 * i + j];
}

Matriz3x3 Matriz3x3::operator+(Matriz3x3 &B)
{
    Matriz3x3 result = Matriz3x3();
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
        {
            result.set(i, j, this->get(i, j) + B.get(i, j));
        }
    return result;
}

Matriz3x3::Matriz3x3(double *array)
{
    data = array;
}

Matriz3x3::Matriz3x3()
{
    double *super_array = new(double[9]);
    memset(super_array, 0, sizeof(double));
    data = super_array;
    free(super_array);
}
