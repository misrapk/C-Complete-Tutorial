#include<iostream>
using namespace std;


//TODO: Person Base Class
class Person{

public:
    string pName{};
    int pAge{};
    
    Person(const string& name="", int age=0)
    :pName{name}, pAge{age}{
        cout<<"Person Constructor Called\n";
    }

    const string& getName(){
        return pName;
    }
    int getAge(){
        return pAge;
    }

};

//Person CLass --> Student Class
class Student : public Person{

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

//HockeyPlayer --> Person
class HockeyPlayer: public Person{

public:
    int hGoals{};
    string hRole{};

    HockeyPlayer(int goals = 0, const string& role = "")
    : hGoals{goals}, hRole{role}{
        cout<<"HockeyPlayer constructor called\n";
    }

    const string& getRole(){
        return hRole;
    }

    int getGoals(){
        return hGoals;
    }
};


int main(){

    Student s1{10, 80};

    //student
    s1.pName = "Arjun";
    s1.pAge = 16;

    cout<<s1.getName()<<" is "<<s1.getAge()<<" years old\n";

    //hockeyplayer
    HockeyPlayer h1{4, "captain"};

    h1.pName = "Sandeep Singh";
    h1.pAge = 29;
    
    cout<<h1.getName()<<" is "<<h1.getRole()<<" and he has scored "<<h1.getGoals()<<" no. of Goals!\n";
}