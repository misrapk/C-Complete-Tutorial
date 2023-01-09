#include<iostream>
using namespace std;

class Number{
   int num1;
public:
    Number() : num1(0){}

    void input(){
        cout<<"ENter the number: ";
        cin>>num1;
    }

    //comparison > operator
    bool operator >(const Number &obj){
        if(num1 > obj.num1){
            return true;
        }
        return false;
    }

    //TODO: Overloading < operator



};


int main(){
    Number num1, num2;
    num1.input();
    num2.input();

    if(num1>num2){
        cout<<"First is greater than Second!\n";
    }else{
        cout<<"Second is greater!";
    }

}