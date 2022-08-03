#include<iostream>
using namespace std;

int main(){
    int marks[5] {12, 14, 20, 19, 10};
    int *pmarks{marks};
    // cout<<&marks[0]<<endl;
    // cout<<&marks[1]<<endl;
    // cout<<&marks[2]<<endl;
    // cout<<&marks[3]<<endl;
    // cout<<&marks[4]<<endl;
    // cout<<*marks<<endl;
    // cout<<&marks<<endl;
    // cout<<&pmarks;

    cout<<marks[1]<<endl;
    cout<<*(marks + 1)<<endl;
    cout<<*(marks + 2)<<endl;
    cout<<*(marks + 3)<<endl;
    cout<<*(marks + 4)<<endl;

    cout<<2[marks];
}