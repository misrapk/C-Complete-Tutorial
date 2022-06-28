#include<iostream>
using namespace std;


// int age = 18;  //global variable --> static varaiable
// string name = "Global";


int count1{100};   //global

int main()
{
    // string name = "Sachin";
    // {
    //     string name = "Virat";   //local variable  --> automatic
    //     cout<<::name<<endl;
    // }

    // cout<<"I am outside the braces: "<<name<<endl;
    // cout<<age;


    int count1{10};
    int count2{40};
    cout<<"Count1 is : "<<count1<<endl;
    cout<<"Count2 is : "<<count2<<endl;
    {
        int count4{50};
        int count2{60};
        cout<<"Inner Count1 is : "<<::count1<<endl;
        cout<<"Inner Count2 is : "<<count2<<endl;
    }
    cout<<"Count4 is : "<<count4<<endl;


}