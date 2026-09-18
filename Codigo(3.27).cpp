// Fig. 3.27: fig03_27.cpp
// Usando um gabarito de função
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

template <class T>
T maximum(T value1, T value2, T value3)
{
    T max = value1;

    if (value2 > max)
        max = value2;

    if (value3 > max)
        max = value3;

    return max;
}

int main()
{
    int int1, int2, int3;

    cout << "Forneça três valores inteiros: ";
    cin >> int1 >> int2 >> int3;
    cout << "O maior valor inteiro é: "
         << maximum(int1, int2, int3);        // versão para int

    double double1, double2, double3;

    cout << "\nForneça três valores double: ";
    cin >> double1 >> double2 >> double3;
    cout << "O maior valor double é: "
         << maximum(double1, double2, double3); // versão para double

    char char1, char2, char3;

    cout << "\nForneça três caracteres: ";
    cin >> char1 >> char2 >> char3;
    cout << "O maior valor de caractere é: "
         << maximum(char1, char2, char3)       // versão para char
         << endl;

    return 0;
}