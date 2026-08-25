// Fig. 3.4: fig03_04.cpp
// Encontrar o maior de três inteiros
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int maximum(int, int, int); // protótipo da função

int main()
{
    int a, b, c;

    cout << "Forneça três inteiros: ";
    cin >> a >> b >> c;

    // a, b e c, abaixo, são argumentos
    // para a chamada da função maximum
    cout << "O maior é: " << maximum(a, b, c) << endl;

    return 0;
}

// Definição da função maximum
// x, y e z, abaixo, são parâmetros
// para a função maximum
int maximum(int x, int y, int z)
{
    int max = x;

    if (y > max)
        max = y;

    if (z > max)
        max = z;

    return max;
}