#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int flip();

int main() {
    int cara = 0;
    int coroa = 0;

    srand(time(NULL));

    for (int i = 0; i < 100; i++) {
        if (flip() == 0) {
            cout << "Coroa" << endl;
            coroa++;
        } else {
            cout << "Cara" << endl;
            cara++;
        }
    }

    cout << "\nResultados:" << endl;
    cout << "Cara: " << cara << " vezes" << endl;
    cout << "Coroa: " << coroa << " vezes" << endl;

    return 0;
}

int flip() {
    return rand() % 2;
}

