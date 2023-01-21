#include<iostream>
using namespace std;


class Base
{
private:
    int m_id {};
    
public:
    

    Base(int id=0)
        : m_id{ id }
    {
        cout<<"BASE\n";
        cout<<"ID is: "<<m_id<<"\n";
        
    }

    int getId() const { return m_id; }
};

class Derived: public Base
{
private:
    double m_cost {};

public:

    Derived(double cost=0.0, int id=0)
        : Base{id}, m_cost{ cost }
    {
        cout<<"Derived\n";
    }

    double getCost() const { return m_cost; }
};

int main(){
    Derived d{2, 5};   

    cout<<"ID: "<<d.getId()<<endl;
    cout<<"COst: "<<d.getCost()<<endl;

}