#include<iostream>
using namespace std;

class Base{
public:
    int a{0};
    void display(){
        cout<<a<<", "<<b<<", "<<c<<"."<<endl;
    }

private:
    int b{0};
protected:
    int c{0};
};

class Derived:protected Base{
    // a is accesible (public)
    //b is not accisble(prive)
    // c is accessible (protected)

    public:
        void accessBaseMember(){
            a = 100;
            // b = 200; //not accsible
            c = 300;
        }
};

class SecondDerived: public Derived{
    void accesSecDerived(){
        a = 100;
        c = 100;
    }
};


int main(){
    Base b;
    cout<<"Base member accessible by Base Object: "<<endl;
    b.a = 100;   //accessible
    // b.b = 200; //compiler error
    // b.c = 300;  //compiler error.
    b.display();

}