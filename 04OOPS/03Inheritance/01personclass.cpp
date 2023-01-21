#include<iostream>
using namespace std;


//TODO: Person Base Class
class Person{
private: 
    string pName{};
    int pAge{};

public:
    
    
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
private:
    int sRollNo{};
    int sMarks{};

public:
    

    Student(int rollNo=0, int marks=0, string name="", int age=0)
        : Person{name, age}, sRollNo{rollNo}, sMarks{marks}{
            cout<<"Student Constructor Called\n";
    }

    int getMarks(){
        return sMarks;
    }
};

//HockeyPlayer --> Person
class HockeyPlayer: public Person{

private:
    int hGoals{};
    string hRole{};
public:
    

    HockeyPlayer(int goals = 0, const string& role = "", string name="", int age=0)
    : Person{name, age},hGoals{goals}, hRole{role}{
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

    Student s1{10, 80, "Arjun", 16};

    //student
    // s1.pName = "Arjun";
    // s1.pAge = 16;

    cout<<s1.getName()<<" is "<<s1.getAge()<<" years old\n";

    //hockeyplayer
    HockeyPlayer h1{4, "captain", "Sandeep Singh", 29};

    // h1.pName = "Sandeep Singh";
    // h1.pAge = 29;
    
    cout<<h1.getName()<<" is "<<h1.getRole()<<" and he has scored "<<h1.getGoals()<<" no. of Goals!\n";
}