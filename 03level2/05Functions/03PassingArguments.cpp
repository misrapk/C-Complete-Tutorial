#include <iostream>
using namespace std;

void getDouble(int num)
{
    num = num * 2;
    cout << "Value of Num in Function " << num << endl;
}

void getDoubleByPointer(int *num){
    *num = (*num) * 2;
    cout << "Value of Num in Function " << *num << endl;

}

void getDoubleByReference(int &num){
    num = num*2;
    cout << "Value of Num in Function " << num << endl;

}

int main()
{
    int number{12};

    cout << "Before DOUBLE IN Main: " << number << endl;

    // getDouble(number);   //call by value;

    // getDoubleByPointer(&number);  //call by pointer

    getDoubleByReference(number); //call by reference
    

    cout << "AFTER DOUBLE IN Main: " << number << endl;
}