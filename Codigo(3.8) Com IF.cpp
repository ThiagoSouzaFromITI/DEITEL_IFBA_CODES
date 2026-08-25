// Fig. 3.8: fig03_08.cpp
// Lançar um dado seis faces 6000 vezes utilizando IF em vez de SWITCH
#include <iostream>

using std::cout;
using std::endl;

#include <iomanip>

using std::setw;

#include <cstdlib>

int main()
{
    int frequency1 = 0, frequency2 = 0,
        frequency3 = 0, frequency4 = 0,
        frequency5 = 0, frequency6 = 0,
        face;

    for (int roll = 1; roll <= 6000; roll++) {
        face = 1 + rand() % 6;

        if (face == 1)
            ++frequency1;
        else if (face == 2)
            ++frequency2;
        else if (face == 3)
            ++frequency3;
        else if (face == 4)
            ++frequency4;
        else if (face == 5)
            ++frequency5;
        else if (face == 6)
            ++frequency6;
        else
            cout << "Não deve chegar aqui nunca!";
    }

    cout << "Face" << setw(13) << "Frequência"
         << "\n 1" << setw(13) << frequency1
         << "\n 2" << setw(13) << frequency2
         << "\n 3" << setw(13) << frequency3
         << "\n 4" << setw(13) << frequency4
         << "\n 5" << setw(13) << frequency5
         << "\n 6" << setw(13) << frequency6 << endl;

    return 0;
}