#include <iostream>
using namespace std;

int main()
{
    // string firstName{"Peeyush"};
    // string lastName{"Misra"};

    // // string fullName{firstName + " " + lastName + "."};

    // // cout<<fullName;

    // string newSentence{"My Name is " + firstName};
    // cout<<newSentence;

    /* FULL CODE */

    string firstName;
    string secondName;
    int age{};

    cout << "ENter your first name: ";
    cin >> firstName;
    cout << "Enter your last Name: ";
    cin >> secondName;
    cout << "enter your age: ";
    cin >> age;

    string fullName{"Your Full name is "};
    fullName += firstName + " " + secondName + ".";

    string sentence{"Your age is "};
    sentence = sentence + to_string(age);

    cout << fullName << endl;
    cout<<sentence<<endl;

    // cout << "The String has" << fullName.length() << " characters!";
}