#include<iostream>
using namespace std;


int main(){

    //1. Assignment Operator(=)
    /*
        int x = 12;
        x = 20 

        = 
        += (add + Assignemnt)
        -=  (substraction assi)
        *= (mulitpilaction assign)
        /= (division Assignemnt)
    */

   /* 
     Arithmenic Operator
      + , - , / , *, %,
       ++, --
   */

  int num1{21};
  int num2{10};
  int result;

  result = num1 % num2;  //20/10
//   cout<<result;

  //increment Operator (++) add 1
//   cout<<++num1;   //num1 = num1 + 1


  /*postfix ===> a++  prefix ==> ++a
        postfix; -> use the value and then after perform increment
        prefix -> perform increment then use the value

        int a = 10;
        a = a++;

  */
    int count {6};
    int total{};

    // cout<<"Count: "<<count<<endl;

    // total = count++; //postfix   total = 6  count+1;
    // total = ++count; //prefix     count + 1 -> total = 7
    // cout<<"Count: "<<count<<endl;
    // cout<<"Total : "<<total;


    // total = 6 + count++;
    total = 6 + ++count;
// cout<<"Count: "<<count<<endl;
//     cout<<"Total : "<<total;
 

 //3. Relational Operator  --> true/false      1/0
 /*
      >   --> 3>5
      <
      >=
      <=
      ==     equality    3==4
      !=   
      */

    bool ans = 3==3;
    cout<<ans;

    /* 
        4. Logical Operators

        && --> And      (x && y)   --> both values are true --> true
        || --> Or       (x || y)  --> atleast one should be true--> true
        ! --> Not        (!x)  --> reverse
    */

   int a{5}, b{8};

   bool result2;
   result2 = a>b && a!=b;
   cout<<endl;
   cout<<result2;
}

