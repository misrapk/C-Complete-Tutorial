// #include<iostream>
// using namespace std;

// class A{
//     int x, y;
// public:
//     A(int a, int b){
//         x = a;
//         y = b;
//     }

//     // copy constructor
//     A(const A &o1){
//         cout<<"Copy Constructor called\n";
//         x = o1.x;
//         y = o1.y;
//     }

//     int getX(){return x;}
//     int getY(){return y;}

//     ~A(){
//         cout<<"Destructor called\n";
//     }

// };


// int main(){
// //code for main
//     A ob1(10, 20);
//     A ob2(ob1);  //copy constructor


//     cout<<ob2.getX()<<endl;
//     cout<<ob2.getY();
// }


/*NEW CODE*/
#include<iostream>
using namespace std;

class Line{
    private:
        int *ptr;
    public:
    //declaration
        int getLength();
        Line(int len);          //construtor
        Line(const Line &obj);    //copy constructor
        ~Line();  //destructor
};
 //member function define outside the class

Line :: Line(int len){
    cout<<"normal constructor called\n";

    //allocate the memory
    ptr = new int;
    *ptr = len;
}

Line::Line(const Line &obj){
    cout<<"Copy COnstructor called\n";
    ptr = new int;
    *ptr = *obj.ptr;
}

Line::~Line(){
    cout<<"freezing the memory!\n";
    delete ptr;
}

int Line:: getLength(){
    return *ptr;
}

void printLength(Line obj){
    cout<<"Lentht: "<<obj.getLength()<<endl;
}

int main(){
    Line line1(20);
    
    Line line2 = line1; //coppy

    printLength(line1);
    printLength(line2);
}