#include <iostream>
#include "Matrix.h"
#include "ID.h"
using namespace std;

int main()
{
    ID id1(1, 'A');
    ID id2(4, 'D');
    ID id3(7, 'S');
    Matrix<ID> matrix1(3, 3);
    Matrix<ID> matrix2(3, 3);
    Matrix<ID> matrix3(3, 3);
    cout << matrix1;
    cout << matrix2;
    cout << matrix3;

    matrix1 = matrix1 + 2;
    matrix2 = matrix2 * 2;
    matrix3 = matrix3 + matrix2;

    cout << matrix1;
    cout << matrix2;
    cout << matrix3;
}
