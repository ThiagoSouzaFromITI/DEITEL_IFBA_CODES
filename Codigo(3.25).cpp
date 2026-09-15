// Fig. 3.25: fig03_25.cpp
// Usando funções sobrecarregadas
#include <iostream>

using std::cout;
using std::endl;

int square(int x) { return x * x; }

double square(double y) { return y * y; }

int main()
{
    cout << "O quadrado do inteiro 7 é " << square(7)
         << "\nO quadrado do double 7.5 é " << square(7.5)
         << endl;

    return 0;
}

