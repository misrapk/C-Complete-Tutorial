#include<iostream>
using namespace std;


int main(){

    string name{};
    int age{}, rollNo{};

    cout<<"Welcome to New Class!!!"<<endl;

    cout<<"Please Enter Your Name: ";
    cin>>name;

    cout<<"What is your Age? ";
    cin>>age;
    
    cout<<"Enter your Roll No: ";
    cin>>rollNo;

    //Rahul, You are 18 years old and your roll no is 01;
    cout<<name<<", You are "<<age<<" years old and your roll no is "<<rollNo<<endl;

}