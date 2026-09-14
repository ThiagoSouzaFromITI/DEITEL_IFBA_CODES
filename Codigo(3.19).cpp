// Fig. 3.19: fig03_19.cpp
// Usando uma função inline para calcular
// o volume de um cubo.
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

inline double cube(const double s) { return s * s * s; }

int main()
{
    cout << "Digite o comprimento do lado do seu cubo: ";

    double side;
    cin >> side;
    cout << "Volume do cubo com lado "
         << side << " e " << cube(side) << endl;

    return 0;
}