#include <iostream>
using namespace std;

int main()
{
    /* Ways to initialize*/
    // string name1;                                    // 1
    // string name2{"Peeyush Kant Misra is my name"};   // 2;
    // string name3{name2};                             // 3
    // string name4{"Gangadhar hi shaktimaan hai!", 4}; // 4
    // string name5(3, '@');                            // 5
    // string name6{"Hello how are you all", 6, 10};    // 6

    string name;
    cout << "ENter your Name: ";
    cin >> name;
    // getline(cin, name);

    cout << "YOU HAVE ENTERED: " << name;
}