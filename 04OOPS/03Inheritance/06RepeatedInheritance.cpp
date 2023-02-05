#include<iostream>
using namespace std;


class A{
    public:
        int a = 10;
     A(){
            cout<<"A() called\n";
        }
};
class B: public virtual A{
    public:
        B(){
            cout<<"B() Called\n";
        }
};

class C: public virtual A{
    public :
    C(){
        cout<<"C() Called \n";
    }
};
class D: public B, C{
    public: 
    D(){
        cout<<"D() called \n";
    }
};

int main(){
    D d;

}