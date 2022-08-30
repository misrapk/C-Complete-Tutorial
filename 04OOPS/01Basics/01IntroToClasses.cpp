#include<iostream>
using namespace std;


//TODO: Define class
 //eg : Room




class Room{
//access modifer
public:
    //data members
    int length;
    int breadth;
    int height;

    void volume(){
        int vol = length*breadth*height;

        cout<<"VOLUME IS: "<<vol<<endl;
    }
    void area(){
        int area = 2*((length*breadth) + (breadth+height) + (height*length) );
        cout<<"AREA IS: "<<area<<endl;
    }


};


int main(){
    // className objName;
    Room myRoom;
    Room myRoom2{10, 20, 30};

    myRoom.breadth = 15;
    myRoom.height = 20;
    myRoom.length = 25;

    myRoom.volume();
    myRoom.area();
    
    myRoom2.volume();

}