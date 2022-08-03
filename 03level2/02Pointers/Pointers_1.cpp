#include <iostream>
using namespace std;

int main()
{

    int x{5};

    // int *ptr;      // hold garabge value
    // int *ptr2{};   // nullptr
    // int *ptr3{&x}; // initilaized with addreess of x

    // cout << "Value of x : " << x << endl;
    // cout << "Address of x: " << &x << endl;
    // cout << *(&x);

    int *ptr{&x}; // null pointer
    cout << *ptr<<endl;  //5

    // int y{6};
    // ptr = &y;
    // cout<<*ptr;

    *ptr = 6;
    cout<<x<<endl;
    cout<<*ptr<<endl;

}