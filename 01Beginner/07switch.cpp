#include<iostream>
using namespace std;

int main(){
    int x{3};

    // if(x==1)
    //     cout<<"one"<<endl;
    // else if(x==2)
    //     cout<<"two"<<endl;
    // else if(x==3)
    //     cout<<"three"<<endl;
    // else
    //     cout<<"unkown statement!";

    // switch(x){
    //     //x==1
    //     case 1: 
    //         cout<<"one"<<endl;
    //         break;
    //     case 2:
    //         cout<<"two"<<endl;
    //         break;
    //     case 3: 
    //         cout<<"three"<<endl;
    //         break;
    //     default:
    //         cout<<"i am default statement"<<endl;

    // }
    // cout<<"i am outside the switch";


    /* Week 7 days 
    MOnday -> 1
    Tuesday -> 2
    wednes -> 3
    . 
     . 
     .
     sunday 7
 input --> 2
 output__> tuesday

 */
    int dayNumber;
    cout<<"Enter the Day NUmber between (1-7): "<<endl;
    cin>>dayNumber;

    switch (dayNumber)
    {
    case 1:
        cout<<"Monday!\n";
        break;
    case 2:
        cout<<"Tuesday!\n";
        break;

    case 3:
        cout<<"Wednesday!\n";
        break;
    case 4:
        cout<<"Thursday!\n";
        break;
    case 5:
        cout<<"Friday\n";
        break;
    case 6: 
        cout<<"Saturday\n";
        break;
    case 7:
        cout<<"Sunday\n";
        break;
    default:
        cout<<"Please Enter between 1-7!\n";
    }
    cout<<"THANK YOU!";

}