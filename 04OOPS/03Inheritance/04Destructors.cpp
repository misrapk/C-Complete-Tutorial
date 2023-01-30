#include<iostream>
using namespace std;

class Box{
    protected:
        double bLength{1.0};
        double bWidth{1.0};
        double bHeight{1.0};

    public:
        //constructor --> rectangular box
        Box(double l, double w, double h) 
        : bLength{l}, bWidth{w}, bHeight{h}
        {
            cout<<"Box(d,d,d) called.\n";
        }

        //constructor --> square box
        Box(double side) : Box{side, side, side}{
            cout<<"Box(d) called.\n";
        }

        Box(){
            cout<<"Box() called\n";
        }

        double volume(){
            return bLength*bWidth*bHeight;
        }

        //dESTRUCTOR
        ~Box(){
            cout<<"BOX() Destructor called.\n";
        }

};

// derived class
class Carton : public Box{
    private:
        string cMaterial{"Cardboard"};
    public: 
        Carton(){

            cout<<"Carton() is called.\n";
        }
        Carton(string material):cMaterial{material}{
            cout<<"Carton(string) called.\n";
        }
        Carton(double side, string material)
        : Box{side}, cMaterial{material}{
            cout<<"Carton(d, string) called.\n";
        }
        Carton(double l, double w, double h, string material)
        : Box{l,w,h}, cMaterial{material}{
            cout<<"Carton(d,d,d string) called.\n";
        }

        //Destructor
        ~Carton(){
            cout<<"Carton() destructor called of Material-->"<<cMaterial<<"\n";
        }
    
};

int main(){
    Carton c1;
    // Carton c2{"Plastic"};
    Carton c3{4.0, 5, 6, "iron"};

    cout<<"C1 volume is : "<<c1.volume()<<endl;
    // cout<<"C2 volume is: "<<c2.volume()<<endl;
    cout<<"C3 volume is : "<<c3.volume()<<endl;
}