#include<iostream>
using namespace std;

int main(){

    int num{};
    cout<<"Enter a Number: ";
    cin>>num;

    // if(num > 0){
    //     cout<<"inside first if!"<<endl;
    //     if(num<20){
    //         cout<<num<<" is between 0 and 20!"<<endl;
    //     }
    // }

    //TODO: Mistake 1 --> Dangling else

    // if(num>=0)
    //     if(num < 20)
    //         cout<<num<<" is between 0 and 20!"<<endl;
    // else
    //     cout<<"Number is negative"<<endl;


    if(num>0)
    {
        if(num < 20)
            cout<<num<<" is between 0 and 20!"<<endl;
        else
            cout<<num<<" is greater than 20!"<<endl;
    }
    else
        cout<<"Number is negative"<<endl;

    //  ==   --> comapere
    //  = -> assigne
    if(num == 0){
        cout<<"you have enterd 0"<<endl;
    }
    

cout<<"OUTSIDE IF!"<<endl;
    


}