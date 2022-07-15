#include<iostream>
using namespace std;

int main(){

    int n {10};

    //outer loop --> rows
    for(int i{0}; i<n; i++){

        for(int j{0}; j<n; j++){
            cout<<"* ";
        }
        cout<<endl;
    }


}