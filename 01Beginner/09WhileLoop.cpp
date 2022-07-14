#include <iostream>
using namespace std;

int main()
{

    // Task 1 : print numbers from 1 to 10

    /*
    int i{1};
    while(i <= 10)  //false
    {
        //some code
        cout<< i <<" ";
        i++;  //11

    }

    cout<<"\nI am outside the loop\n";
*/

    // Task 2: SUm of all positive numbers only

    int num;
    int sum{};

    cout << "Enter the positive numbers only: ";
    cin >> num;

    while (num >= 0)
    {
        cout << "i am inside loop\n";
        // something

        sum += num;

        cout << "Enter the positive numbers only: ";
        cin >> num;
    }

    cout << "I am outside\n";
    cout << "SUM IS: " << sum << endl;
}