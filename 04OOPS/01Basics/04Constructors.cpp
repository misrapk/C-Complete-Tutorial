#include<iostream>
using namespace std;

/*
    constructor: a member function of the class that is automatically called when an 
    object is created.

    Rules to create/define constructor
    1.Constructors must have the same name as the class (with the same capitalization)
   2.Constructors have no return type (not even void)


   Types of Constructors: 
   1. Default Constructor
   2. Parameterised Constructor
   3. Copy Constructor
*/

class Student{

    string stdName{};
    int stdRollNo{};
    int stdMarks{};


    public:
        //TODO: Default Constructor
        Student(){
            cout<<"Default is called \n";

            stdName = "Rahul";
            stdRollNo = 20;
            stdMarks = 90;
        }


        //TODO: Parameterised Constructor
        Student(string name , int rollNo , int marks = 33){
            cout<<"Parameterised is called \n";
            stdName = name;
            stdRollNo = rollNo;
            stdMarks = marks;

        }


        //TODO: Copy Constructor
        Student(Student &std){
            stdName = std.stdName;
            stdMarks = std.stdMarks;
            stdRollNo = std.stdRollNo;

        }

        void getStdDetails(){
            
            cout<<"Students Info is: \n";
            cout<<"Name: "<<stdName<<endl;
            cout<<"Roll No: "<<stdRollNo<<endl;
            cout<<"Marks: "<<stdMarks<<endl;
        }

};



int main(){
    //main function here
    Student std1("Peeyush", 45);
    Student std2 = std1;


    std1.getStdDetails();
    std2.getStdDetails();
    
}