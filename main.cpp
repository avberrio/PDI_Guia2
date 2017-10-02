#include <iostream>
#include "matriz3x3.h"

int main()
{
    Matriz3x3 A;
    double array[] = {100, 4, 7, 2, 5, 8, 3, 6, 9};
    Matriz3x3 B(array);
//    double C;
    
    
    A.set(0,0,1); A.set(0,1,2); A.set(0,2,3);
    A.set(1,0,4); A.set(1,1,5); A.set(1,2,6);
    A.set(2,0,7); A.set(2,1,8); A.set(2,2,9);
    
    
    Matriz3x3 C = A + B;
    
    std::cout << std::endl;
    
    double tmp_array[9] = {
        C.get(0, 0), C.get(0, 1), C.get(0, 2),
        C.get(1, 0), C.get(1, 1), C.get(1, 2),
        C.get(2, 0), C.get(2, 1), C.get(2, 2)
    };
    
    std::cout << tmp_array[0] << "; " << tmp_array[1] << "; " << tmp_array[2] << std::endl;
    std::cout << tmp_array[3] << "; " << tmp_array[4] << "; " << tmp_array[5] << std::endl;
    std::cout << tmp_array[6] << "; " << tmp_array[7] << "; " << tmp_array[8] << std::endl;
    
//    Matriz3x3 C;
//    C = A + B;
    
//    std::cout << C.get(0, 0) << "; " << C.get(0, 1) << "; " << C.get(0, 2) << std::endl;
//    std::cout << C.get(1, 0) << "; " << C.get(1, 1) << "; " << C.get(1, 2) << std::endl;
//    std::cout << C.get(2, 0) << "; " << C.get(2, 1) << "; " << C.get(2, 2) << std::endl;
    
    
//    std::cout << "La matriz A: " << std::endl << A;
//    std::cout << "La matriz B: " << std::endl << B;
    
//    C = !A;
    
    std::cout << "El determinante de A (!A) es: " << std::endl;
//    std::cout << C << std::endl << std::endl;
//    std::cout << "La suma de A + B es : " << std::endl << A + B;
    return 0 ;
}
