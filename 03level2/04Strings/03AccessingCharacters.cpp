#include <iostream>
using namespace std;

int main()
{
    string name = "peeyush"; // PEEYUSH

    // cout<<name[3];
    cout << "Original: " << name << endl;

    // name[1] = toupper(name[1]);
    for (int i = 0; i < name.length(); i++)
    {
        name[i] = toupper(name[i]);
    }

    cout << "UPPERCASE: " << name << endl;
}