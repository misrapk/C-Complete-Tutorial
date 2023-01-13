#include<iostream>
using namespace std;


//TODO: Person Base Class
class Person{

public:
    string pName{};
    int pAge{};
    string pGender{};

    Person(const string& name=" ", int age=0, const string& gender=" ")
        : pName{name}, pAge{age}, pGender{gender}{
            cout<<"Person Constructor Called\n";
        }

    const string& getName(){
        return pName;
    }
    int getAge(){return pAge;};
    const string& getGender(){
        return pGender;
    }
};

//TODO: Derived Student Class
// class DerivedClassName: access_specifier BaseClassName;

class Student: public Person
{
    public:
        int sRollNo{};
        int sMarks{};

        Student(int rollNo=0, int marks=0)
        : sRollNo{rollNo}, sMarks{marks}{
            cout<<"Student Constructor Called\n";
        }
        int getMarks(){
            return sMarks;
        }

};

//TODO: HW to create Monitor Derived from Student Class;
class Monitor: public Student{
    //functions 
};

//TODO: HockeyPlayer class
class HockeyPlayer: public Person{
    public:
        int hGoals{};
        string hRole{};

        HockeyPlayer(int goals=0, const string& role="player")
        :  hGoals{goals}, hRole{role}{
            cout<<"HockeyPlayer Constructor Called\n";
        }

        const string& getRole(){
            return hRole;
         }
        int getGoals(){
            return hGoals;
        }
};

int main(){
    //main code
    Student ramesh{20, 80};
    HockeyPlayer p1{4, "captain"};

    //student1
    ramesh.pName = "Ramesh";
    ramesh.pAge = 18;
    ramesh.pGender = "M";
    cout<<ramesh.getName()<<" is "<<ramesh.getAge()<<" years old. He got "<<ramesh.getMarks()<<" marks outof 100\n";

    //player1
    p1.pName ="Harvinder Singh";
    p1.pAge = 23;
    cout<<p1.getName()<<" is "<<p1.getRole()<<" and goals = "<<p1.getGoals()<<endl;
}