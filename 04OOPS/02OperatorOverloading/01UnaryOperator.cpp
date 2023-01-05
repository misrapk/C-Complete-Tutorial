// uniary minus
// increment 
// decrement

#include<iostream>
using namespace std;

class location{
    int latitude, longitude;

public:
    location(){};

    location(int lt, int lg) : latitude{lt},longitude{lg}
    {
        cout<<"Value stored!\n";
    }
    void show(){
        cout<<"Latitude: "<<latitude<<endl;
        cout<<"Longitude: "<<longitude<<endl;
    }

    //operator overloading
    // retType operator operatorSYmbol(arg){
    //     //definition
    // }

    //TODO: prefix unary operator
    void operator++(){
        ++latitude;
        ++longitude;
    }

    //TODO: postfix unary operator
    void operator++(int){
        latitude++;
        longitude++;
    }

    //hw
    //TODO: postifx decrement


    //TODO: prefix decerement


};



int main(){
//main fnction
    location loc1(10,20);
    loc1.show();
    loc1++;     //postfix
    loc1.show();
    ++loc1;     //prefix
    loc1.show();
}