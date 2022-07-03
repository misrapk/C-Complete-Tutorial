#include<iostream>
using namespace std;


int main(){
    // if(condition)
    //     {
    //         statement
    //     }

    // int age{};
    // cout<<"Enter Your Age: ";
    // cin>>age;

//    if(age >= 18)
//    {
//     cout<<"you are allowed to Marry!"<<endl;
//    } 
//    else
//     {
//      cout<<"you are not allowed to Marry!"<<endl;
//     }
     
//    cout<<"outside the"<<endl; //always run

    int studentMarks{};
    cout<<"Enter Your Marks: ";
    cin>>studentMarks;
    /*
    90+ --> A+
    80+ --> A
    70+ --> B+
    60+ --> B
    33+ --> C
    Else__> F  //fail
    */

   if(studentMarks >= 90){
    cout<<"Grade is A+"<<endl;
   }
   else if(studentMarks >= 80){
    cout<<"Grade is A"<<endl;
   }
   else if (studentMarks >=70){
    cout<<"Grade is B+"<<endl;
   }
   else if(studentMarks >=60){
    cout<<"Grade is B"<<endl;

   }else if(studentMarks >=33){
    cout<<"Grade is C"<<endl;
   }
   else{
    cout<<"Grade is F! You are Failed! Better luck next time"<<endl;
   }


   

}