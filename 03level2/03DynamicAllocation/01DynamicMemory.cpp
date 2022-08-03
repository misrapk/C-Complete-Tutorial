#include <iostream>
using namespace std;

int main()
{

    //    int *age {new int{3}};

    //     cout<<*age<<endl;
    //     delete age;

    //     age = nullptr;

    // dynamic allocation of array
    int student{};
    cout << "ENter the number of students: ";
    cin >> student;

    cout << "YOU HAVE ENTERD: " << student << endl;

    int *marks{new int[student]{1, 2, 3}};

    cout << "ENter the records now: " << endl;
    for (int i{}; i < student; i++)
    {
        cout << "Enter the marks of student number: " << i << " : ";
        cin >> marks[i];
    }

    for(int i{}; i<student; i++){
        cout<<marks[i]<<endl;
    }
}