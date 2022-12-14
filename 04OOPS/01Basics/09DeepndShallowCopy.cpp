#include<iostream>
#include<cstring>
using namespace std;


class JoinName{
    char *name;
    public:
        JoinName(const char *str){
            name = new char[20];
            strcpy(name, str);
        } 

        //Copy COnstructor
        JoinName(const JoinName &str){
            name = new char[20]; //dynamic allocation
            strcpy(name, str.name);
        }

        void concatenate(const char*str){
            strcat(name, str);
        }
        ~JoinName(){
            delete []name;
        }
        void displayName(){
            cout<<"FULL NAME IS : "<<name<<endl;
        }
};

int main(){
    JoinName name1("Peeyush");
    JoinName name2(name1);
      //Copy .. shallow copy

    name1.displayName();
    name2.displayName();
    name1.concatenate(" Misra");
    name1.displayName();
    name2.displayName();
}
