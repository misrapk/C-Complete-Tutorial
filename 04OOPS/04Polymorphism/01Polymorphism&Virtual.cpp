#include <iostream>
using namespace std;

class First // base class
{
public:
    virtual void intro()
    {
        cout << "I am First\n";
    }
};

class Second : public First
{
public:
    void intro()
    {
        cout << "I am Second\n";
    }
};

class Third : public First
{
public:
    void intro()
    {
        cout << "I am Third\n";
    }
};

int main()
{ 
    First *f;
    Second s;
    Third t;

    
    f = &s;
    f->intro();

    f = &t;
    f->intro();

    // f.intro();
    // s.intro();
    // t.intro();

    return 0;
}