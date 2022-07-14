#include <iostream>
using namespace std;

int main()
{
    // int num{};
    // int sum{};

    // do
    // {
    //     sum += num; // 0

    //     // take input
    //     cout << "Enter the positive numbers only: ";
    //     cin >> num;

    // } while (num >= 0);

    // cout << "SUM IS: " << sum << endl;


int choice{};
    do{
        cout<<"Please Enter your choice\n";
        cout<<"1. Addition \n";
        cout<<"2. Substraction\n";
        cout<<"3. Multiplication\n";
        cin>>choice;
    }
    while(choice != 1 && choice != 2 && choice !=3);

    //doe something
    cout<<"You have selection this choice "<<choice<<endl;
}