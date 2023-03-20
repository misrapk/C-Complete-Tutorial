#include<iostream>
using namespace std;

// void swapItem(int &a, int &b){
//     int temp;

//     temp = a;
//     a = b;
//     b = temp;
// }


//template function
template <class X> void swapItem(X &a, X &b){
    //body
    X temp;

    temp = a;
    a = b;
    b = temp;
}

// two generic types
template <class type1, class type2> void swapItem(type1 &a, type2 &b){
    //body
    type1 temp;

    temp = a;
    a = b;
    b = temp;
}


int main(){
    int a{10}, b{20};
    char x ='x', y='y';
    // int i = 20; 
    // string j = "I AM MARK!";

    cout<<"A: "<<a<<" B: "<<b<<endl;
    cout<<"X: "<<x<<" Y: "<<y<<endl;
    cout<<"X: "<<x<<" Y: "<<y<<endl;

    
    swapItem(a,b);
    swapItem(x,y);
    // swapItem(i, j);

    cout<<"A: "<<a<<"B: "<<b<<endl;
    cout<<"X: "<<x<<" Y: "<<y<<endl;


    
}