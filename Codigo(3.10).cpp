// Fig. 3.10: fig03_10.cpp
// Craps
#include <iostream>

using std::cout;
using std::endl;

#include <cstdlib>

#include <ctime>

using std::time;

int rollDice(void);    // Protótipo da função

int main()
{
    enum Status { CONTINUE, WON, LOST };

    int sum, myPoint;
    Status gameStatus;

    srand(time(0));

    sum = rollDice();    // primeira jogada dos dados

    if (sum == 7 || sum == 11)
        gameStatus = WON;
    else if (sum == 2 || sum == 3 || sum == 12)
        gameStatus = LOST;
    else {
        gameStatus = CONTINUE;    // memoriza o "Ponto"
        myPoint = sum;
        cout << "O ponto é " << myPoint << endl;
    }

    while (gameStatus == CONTINUE) {
        sum = rollDice();

        if (sum == myPoint)    // vence fazendo o ponto
            gameStatus = WON;
        else if (sum == 7)    // perde obtendo o valor 7
            gameStatus = LOST;
    }

    if (gameStatus == WON)
        cout << "Jogador ganha" << endl;
    else
        cout << "Jogador perde" << endl;

    return 0;
}

int rollDice(void)
{
    int die1, die2, workSum;

    die1 = 1 + rand() % 6;
    die2 = 1 + rand() % 6;

    workSum = die1 + die2;

    cout << "Jogador fez " << die1 << " + " << die2
         << " = " << workSum << endl;

    return workSum;
}