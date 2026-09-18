
#include <iostream>

using namespace std;

int b(int = 1, int = 1, int = 1);

int main()
{
    cout << b() << endl;
	cout << b(10) << endl;
	cout << b(10, 5) << endl;
	cout << b(10, 5, 2) << endl;

    return 0;
}

int b(int l, int w,int h)
{
    return l * w * h;
}

