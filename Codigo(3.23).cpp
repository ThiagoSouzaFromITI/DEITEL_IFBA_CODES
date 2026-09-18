// Fig. 3.23: fig03_23.cpp
// Usando argumentos default
#include <iostream>

using std::cout;
using std::endl;

int boxVolume(int length = 1, int width = 1, int height = 1);

int main()
{
    cout << "O volume default da caixa é: " << boxVolume()
         << "\nO volume de uma caixa com comprimento 10,\n"
         << "largura 1 e altura 1 é: " << boxVolume(10)
         << "\nO volume de uma caixa com comprimento 10,\n"
         << "largura 5 e altura 1 é: " << boxVolume(10, 5)
         << "\nO volume de uma caixa com comprimento 10,\n"
         << "largura 5 e altura 2 é: " << boxVolume(10, 5, 2)
         << endl;

    return 0;
}

// Calcular o volume da caixa
int boxVolume(int length, int width, int height)
{
    return length * width * height;
}