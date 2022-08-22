#include<iostream>
using namespace std;

//fun1
void display(){
    cout<<"Welcome to LearningPhase.in!\n";
}

//fun2
void display(string name){
    cout<<"Hello! "<<name<<endl;
}

//fun3
void display(string name, int age){
    cout<<"Your name is "<<name<<endl;
    cout<<"your age is: "<<age<<endl;
}

int display(int age){
    return age;
}

int add(int a, int b){
    return a+b;
}

double add(double a, double b){
    return a + b;
}

int main(){

    // display();
    // display("Peeyush");
    // display("peeyush", 12);
    // cout<<display(200);

    cout<<add(2, 3);
    cout<<add(2.3, 12.4);
}