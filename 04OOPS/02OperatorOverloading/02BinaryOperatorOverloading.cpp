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

    //overload + operator
    Number operator + (const Number &obj){
        Number temp;
        temp.num1 = num1 + obj.num1;
        return temp;
    }

    //overload * operator
    Number operator * (const Number &obj){
        Number temp;
        temp.num1 = num1*obj.num1;
        return temp;
    }

    void addOutput(){
        cout<<"Result of addition of two objects: "<<num1;
    }
    void multiplyOutput(){
        cout<<"Result of product of two objects: "<<num1;

    }

};




int main(){
    //main code here
    Number num1;
    num1.input();
    Number num2;
    num2.input();
    Number result;
    result = num1 + num2;
    result.addOutput();

    Number result2;
    result2 = num1*num2;
    result2.multiplyOutput();



}


