// Fig. 3.21: fig03_21.cpp
// Referências devem ser inicializadas
#include <iostream>

using std::cout;
using std::endl;

int main ()
{
    int x = 3, &y = x; // y é agora um alias para x

    cout << "x = " << x << endl << "y = " << y << endl;
    y = 7;
    cout << "x = " << x << endl << "y = " << y << endl;


    return 0;
}