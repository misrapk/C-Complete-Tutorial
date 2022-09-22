#include<iostream>
using namespace std;


/*
    1. Private
    2. Public
    3. Protected
*/

class Student{

private:
    int rollNo;


public: 
    void display(int r){
        rollNo = r;
        cout<<"ROLL NO: "<<rollNo<<endl;
    }

};

int main(){
    Student std1;

    std1.display(233);

}