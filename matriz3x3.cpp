#include "matriz3x3.h"

bool Matriz3x3::set(unsigned i, unsigned j, double value)
{
    if (i < 3 || j < 3)
    {
        double *tmp;
        tmp = data;
        tmp += 3 * i + j;
        *tmp = value;
        return true;
    }
    else
    {
        return false;
    }
}

double Matriz3x3::get(unsigned i, unsigned j)
{
    return *(data + 3 * i + j);
}

Matriz3x3& Matriz3x3::operator+(Matriz3x3 &B)
{
    Matriz3x3 *result = new Matriz3x3();
    for (unsigned i = 0; i < 3; i++)
        for (unsigned j = 0; j < 3; j++)
        {
            result->set(i, j, this->data[3 * i + j] + B.get(i, j));
        }
    return *result;
}

ostream& operator<<(ostream& o, Matriz3x3& A)
{
    for (int i = 0; i < 3; i++)
    {
        o << A.get(i, 0) << "; " << A.get(i, 1) << "; " << A.get(i, 2) << std::endl;
    }
    return o;
}

double Matriz3x3::operator!()
{
    double a = this->get(0, 0) * (this->get(1, 1) * this->get(2, 2) - this->get(1, 2) * this->get(2, 1));
    double b = (-1) * this->get(0, 1) * (this->get(1, 0) * this->get(2, 2) - this->get(1, 2) * this->get(2, 0));
    double c = this->get(0, 2) * (this->get(1, 0) * this->get(2, 1) - this->get(1, 1) * this->get(2, 0));
    double result = a + b + c;
    return result;
}

Matriz3x3::Matriz3x3(double *array)
{
    data = array;
}

Matriz3x3::Matriz3x3()
{
    data = new double[9];
}
