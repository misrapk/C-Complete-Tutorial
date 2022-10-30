#include<iostream>
using namespace std;

class Garbage{
    int value1;
    double value2;
    char value3;

    const double pie;

/*
Types of INitialization
    pie = 3.14; //copy
    pie(3.14); //direct
    pie{3.14};  //uniform

*/
    public:
        Garbage(int v1, double v2, char v3, double pi) : 
            value1{v1},
            value2{v2},
            value3{v3},
            pie{pi}
        {
           //nothing
           cout<<" I am constructor \n";
        }

        void show(){
            cout<<value1<<" "<<value2<<" "<<value3<<" "<<endl;
            cout<<pie;
        }

};


int main(){
    Garbage g1{22, 3.1111, 'p', 3.14};
    g1.show();
}