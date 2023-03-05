#include <iostream>
using namespace std;

class Convert
{
protected:
    double val1{1};
    double val2{0};

public:
    Convert(double i) : val1{i}
    {
        cout << "Convert(i) called\n";
    }

    double getconv() { return val2; }
    double getinit() { return val1; }

    virtual void compute() = 0; // pure virtual function
};

// kg to g
class Weight : public Convert
{
public:
    Weight(double i) : Convert(i) {}

    void compute()
    {
        val2 = val1 * 1000;
    }
};

// km to m
class Distance : public Convert
{
public:
    Distance(double i) : Convert(i) {}

    void compute()
    {
        val2 = val1 * 1000;
    }
};

// dollar to rupee
class DtoR : public Convert
{
public:
    DtoR(double i) : Convert(i) {}

    void compute()
    {
        val2 = val1 * 81.71;
    }
};


int main()
{
    Convert *cPtr;

    Weight wt (20);
    cPtr = &wt;
    cout<<cPtr->getinit()<<" kg\n";
    cPtr->compute();
    cout<<cPtr->getconv()<<" grams\n";
    
    DtoR r(20);
    cPtr = &r;
    cout<<cPtr->getinit()<<" dollars\n";
    cPtr->compute();
    cout<<cPtr->getconv()<<" Rs.\n";

    return 0;
}