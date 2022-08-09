#include <iostream>
using namespace std;

// TODO: BY VALUE

void swapByValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

// TODO: By POinter
void swapByPointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// TODO: by Reference
void swapByReference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int x{24};
    int y{28};

    cout << "BEFORE SWAP: \n";
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;

    // swapByValue(x, y);
    // swapByPointer(&x, &y);
    swapByReference(x, y);

    cout << "After SWAP: \n";
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
}