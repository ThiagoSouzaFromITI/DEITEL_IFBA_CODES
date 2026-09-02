// Fig. 3.12: fig03_12.cpp
// Um exemplo de escopos
#include <iostream>

using std::cout;
using std::endl;

void a(void);  // protótipo de função
void b(void);  // protótipo de função
void c(void);  // protótipo de função

int x = 1;     // variável global

int main()
{
    int x = 5; // variável local para main

    cout << "x local no escopo externo de main é " << x << endl;

    { // inicia novo escopo
        int x = 7;

        cout << "x local no escopo interno de main é " << x << endl;
    } // encerra novo escopo

    cout << "x local no escopo externo de main é " << x << endl;

    a(); // a tem x local automático
    b(); // b tem x local estático
    c(); // c acessa x global

    b();
    c();

    cout << "x local em main é " << x << endl;

    return 0;
}

void a(void)
{
    int x = 25; // inicializada sempre que a é chamada

    cout << endl << "x local em a é " << x
         << " depois de entrar em a" << endl;

    ++x;

    cout << "x local em a é " << x
         << " antes de sair de a" << endl;
}

void b(void)
{
    static int x = 50; // somente inicialização estática

    cout << endl << "x local estático é " << x
         << " ao entrar em b" << endl;

    ++x;

    cout << "x local estático de b é " << x
         << " ao sair de b" << endl;
}

void c(void)
{
    cout << endl << "x global é " << x
         << " ao entrar em c" << endl;

    x *= 10;

    cout << "x global é " << x
         << " ao sair de c" << endl;
}
