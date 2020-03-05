#include <iostream>
using namespace std;

void myswap(int& x, int& y)
{
x = x + y;
y = x - y;
x = x - y;
}

int main()
{
    int a, b;
    cout << "Enter two ints: ";
    cin >> a >> b;
    myswap(a, b);
    cout << a <<" "<< b << endl;
    return 0;
}
