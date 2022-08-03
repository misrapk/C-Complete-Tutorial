#include <iostream>
using namespace std;

int main()
{

    // int x{10};
    // int *ptr{&x};

    // int y{11};

    // cout << " x = " << x << endl;
    // cout << "y  = " << y << endl;
    // cout << "*ptr = " << *ptr << endl;

    // ptr = &y;
    // *ptr = 20;

    // cout << "*ptr = " << *ptr << endl;
    // cout << " x = " << x << endl;
    // cout << "y  = " << y << endl;

    int age{23};
    int age2{30};
    const int *ptrAge{&age};

    cout << "Age is : " << age << endl;
    cout << "Age is : " << *ptrAge << endl;

    // ptrAge = &age2;

    // *ptrAge = 40;    //error

    // TODO: constant pointers
    // datatype *const pointer_name;

    int *const ptrAge3{&age};

    ptrAge3 = &age2;
}