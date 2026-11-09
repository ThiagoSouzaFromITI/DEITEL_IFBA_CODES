// Fig. 4.3: fig04_03.cpp
// inicializando um array
#include <iostream>

using std::cout;
using std::endl;

#include <iomanip>

using std::setw;

int main()
{
    int i, n[10];

    for (i = 0; i < 10; i++)       // inicializa o array
        n[i] = 0;

    cout << "Elemento" << setw(13) << "Valor" << endl;

    for (i = 0; i < 10; i++)       // imprime o array
        cout << setw(7) << i << setw(13) << n[i] << endl;

    return 0;
}