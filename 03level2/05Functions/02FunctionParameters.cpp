#include <iostream>
using namespace std;

int getUserInput()
{
    cout << "ENTER THE INTEGER VALUE: ";
    int input{};
    cin >> input;

    return input;
}

void getDouble(int num)
{
    cout << "Double of " << num << " is: " << num * 2 << endl;
}

void multipleParameters(int a, int b, int c)
{
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
}

int main()
{
    // int num{getUserInput()};
    // getDouble();

    // cout << "YOU HAVE ENTERED: " << num << endl;

    int num1{2};
    int num2{12};
    int num3{24};

    multipleParameters(num1, num2, num3);
}