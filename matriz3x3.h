#include <stdio.h>
#include "matriz_abstracta.h"

template <class super_type>
class Matriz3x3 : public Matriz_Abstracta <super_type>
{
public:
    bool set(unsigned i, unsigned j, super_type value);
    super_type get(unsigned i, unsigned j);
    Matriz3x3<super_type>& operator+(Matriz3x3<super_type> &B);
    super_type operator!();
    friend ostream& operator<<(ostream &o, Matriz3x3<super_type>& A);
    Matriz3x3<super_type>(super_type *array);
    Matriz3x3<super_type>();
};
