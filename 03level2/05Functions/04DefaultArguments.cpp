#include<iostream>
using namespace std;

void display(string name, int age,int income = 1000){
     cout<<"Hello, "<<name<<" you are "<<age<<" years old!"<<endl;
    cout<<"You are earning: Rs."<<income<<endl;
} //invalid

void division(int neum, int deno=1){
    int result = neum/deno;
    cout<<result;
}

int main(){
    display("Peeyush", 20, 1000000);
    division(10);
}


// void display(string name, int age, int income){
//     cout<<"Hello, "<<name<<" you are "<<age<<" years old!"<<endl;
//     cout<<"You are earning: Rs."<<income<<endl;
// }