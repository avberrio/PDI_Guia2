#include "matriz3x3.h"

template <class super_type>
bool Matriz3x3<super_type>::set(unsigned i, unsigned j, super_type value)
{
    if (i < 3 || j < 3)
    {
        super_type *tmp;
        tmp = this->data;
        tmp += 3 * i + j;
        *tmp = value;
        return true;
    }
    else
    {
        return false;
    }
}

template <class super_type>
super_type Matriz3x3<super_type>::get(unsigned i, unsigned j)
{
    return *(this->data + 3 * i + j);
}

template <class super_type>
Matriz3x3<super_type>& Matriz3x3<super_type>::operator+(Matriz3x3<super_type> &B)
{
    Matriz3x3<super_type> *result = new Matriz3x3<super_type>();
    for (unsigned i = 0; i < 3; i++)
        for (unsigned j = 0; j < 3; j++)
        {
            result->set(i, j, *(this->data[3 * i + j]) + B.get(i, j));
        }
    return *result;
}

//template <class super_type>
//ostream& operator<<(ostream& o, Matriz3x3<super_type>& A)
//{
//    for (int i = 0; i < 3; i++)
//    {
//        o << A.get(i, 0) << "; " << A.get(i, 1) << "; " << A.get(i, 2) << std::endl;
//    }
//    return o;
//}

template <class super_type>
super_type Matriz3x3<super_type>::operator!()
{
//    double a = this->get(0, 0) * (this->get(1, 1) * this->get(2, 2) - this->get(1, 2) * this->get(2, 1));
//    double b = (-1) * this->get(0, 1) * (this->get(1, 0) * this->get(2, 2) - this->get(1, 2) * this->get(2, 0));
//    double c = this->get(0, 2) * (this->get(1, 0) * this->get(2, 1) - this->get(1, 1) * this->get(2, 0));
//    double result = a + b + c;
//    return result;
    return 0;
}

template <class super_type>
Matriz3x3<super_type>::Matriz3x3(super_type *array)
{
    this->data = array;
}

template <class super_type>
Matriz3x3<super_type>::Matriz3x3()
{
    this->data = new super_type[9];
}
