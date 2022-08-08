#include <iostream>
using namespace std;

// // TODO: structure of Function
// //  returnType FuncName(){
// //       //function body
// //  }

// void getInput()
// {
//     cout << "HELLO I AM INPUT FUNCTION" << endl;
// }

// int main()
// {
//     //run

//     cout<<"I AM IN MAIN\n";
//     getInput();
//     getInput();
//     getInput();
//     getInput();
//     cout<<"in between Function\n";

//     getInput();
//     getInput();
//     getInput();
//     getInput();
//     cout<<"After Function\n";
// }

// TODO: RETURN TYPE

int getNumInput()
{
    cout << "ENTER AN INTEGER: ";
    int num{};
    cin >> num;

    return num;
}

int returnNum()
{
    return 19, 20, 22;
}

void firstFunc(){
    cout<<"I AM AT TOP OF MAIN\n";
}

//TODO: FUNCTION DECLARATION
void sayHello();

int main()
{
    // int num{getNumInput()};

    // int num2{returnNum()};
    // // cout << " 2 Times of " << num << " is " << num * 2 << endl;
    // cout << num2 << endl;


    sayHello();  //call

    // firstFunc();
}

//definition
void sayHello()
{
    firstFunc();
    cout << "I AM HELLO FUNTION!\n";
}