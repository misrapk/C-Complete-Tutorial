#include <iostream>
using namespace std;

int main()
{

    // int x{5};
    // int *ptr{NULL};

    // if (ptr == nullptr)
    // {
    //     cout << "It is a Null Pointer\n";
    // }
    // else
    // {
    //     cout << "Value of pointer is : " << *ptr << endl;
    // }

    char var1{'a'};
    int var2{1};

    void *ptr{};
    ptr = &var1;
    ptr = &var2;
    ptr = (int *)&var1;

    cout << *(int *)ptr;
}
