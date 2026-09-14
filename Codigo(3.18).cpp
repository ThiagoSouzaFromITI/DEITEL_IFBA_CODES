// Fig. 3.18: fig03_18.cpp
// Funções que não recebem argumentos
#include <iostream>

using std::cout;
using std::endl;

void function1();
void function2(void);

int main()
{
    function1();
    function2();

    return 0;
}

void function1()
{
    cout << "function1 não recebe argumentos" << endl;
}

void function2(void)
{
    cout << "function2 também não recebe argumentos" << endl;
}