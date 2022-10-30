#include<iostream>
using namespace std;


void modification(int &x, int y, int z){
    x = x+y+z;
}

int addition(int a, int b){
    int result{};

    result = a+b;
    modification(result, a, b);
    return result;
}


int main(){

    int x{20};
    int y{10};
    int z{};
    z = addition(x, y);
    cout<<z<<endl;

}