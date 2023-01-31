#include <iostream>
using namespace std;

class Box
{
protected:
    double bLength{1.0};
    double bWidth{1.0};
    double bHeight{1.0};

public:
    // constructor --> rectangular box
    Box(double l, double w, double h)
        : bLength{l}, bWidth{w}, bHeight{h}
    {
        cout << "Box(d,d,d) called.\n";
    }

    // constructor --> square box
    Box(double side) : Box{side, side, side}
    {
        cout << "Box(d) called.\n";
    }

    Box()
    {
        cout << "Box() called\n";
    }

    double volume()
    {
        return bLength * bWidth * bHeight;
    }

    // dESTRUCTOR
    ~Box()
    {
        cout << "BOX() Destructor called.\n";
    }
};

// derived class
class Carton : public Box
{
private:
    string cMaterial{"Cardboard"};
    double cThickness{0.1};
    double cDensity{0.1};

public:
    Carton(double l, double w, double h, string m, double density, double thickness)
        : Carton{l, w, h, m}
    {
        cThickness = thickness;
        cDensity = density;
        cout << "Carton(d,d,d,string,d,d) constructor called.\n";
    }
    Carton()
    {

        cout << "Carton() is called.\n";
    }
    Carton(string material) : cMaterial{material}
    {
        cout << "Carton(string) called.\n";
    }
    Carton(double side, string material)
        : Box{side}, cMaterial{material}
    {
        cout << "Carton(d, string) called.\n";
    }
    Carton(double l, double w, double h, string material)
        : Box{l, w, h}, cMaterial{material}
    {
        cout << "Carton(d,d,d string) called.\n";
    }

    // Destructor
    ~Carton()
    {
        cout << "Carton() destructor called of Material-->" << cMaterial << "\n";
    }
};

//TODO : FOOD CONTAINER CLASS
class FoodContainer{
    protected:
        string name{"ceral"};
        double fVolume{};
        double fDensity{0.01};
    public:
        FoodContainer()
        {
            cout<<"FoodContainer() called.\n";
        }
        FoodContainer(string name): name{name}{
            cout<<"FoodContainer(string) called.\n";
        }
        FoodContainer(string n, double d, double v)
        : name{n}, fDensity{d}, fVolume{v}{
            cout<<"FoodContainer(string , d, d) called.\n";
        }

        ~FoodContainer(){
            cout<<"Foodcontainer destructor.\n";
        }

        double getWeight(){
            return fVolume*fDensity;
        }

};

//mulitple inheritance
class CeralPack : public Carton, public FoodContainer{
    public:
        CeralPack(double l, double w, double h, string ceralType)
        : Carton{l,w,h,"Plastic"}, FoodContainer{ceralType}{
            cout<<"CeralPack(d,d,d, string) called.\n";
            FoodContainer::fVolume = Carton::volume();
        }

        ~CeralPack(){
            cout<<"CeralPack()destructor called.\n";
        }

};




int main()
{
   CeralPack cornflakes{8, 3, 10, "Cornflakes"};

     cout<<"Cornflakes weight is "<<cornflakes.getWeight()<<endl
     <<"Cornflakes volume is "<<cornflakes.volume()<<endl;
}