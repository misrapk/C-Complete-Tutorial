#include<iostream>
using namespace std;

int main(){
//      //conditional if
//    int a{10};
//    int b{12};
//    int c{};
// //    if(a>b){
// //     c = a;
// //    }
// //    else{
// //     c = b;
// //    }

//     // var = condition  ? exp1 : exp2
//     c = a > b ? a: b;
//     cout<<c;

    int maxBall{};
    int brownBall{};
    int whiteBall{};

    cout<<"How many brown ball do you have?";
    cin>>brownBall;
    cout<<"How many white Ball do you have?";
    cin>>whiteBall;

    maxBall = brownBall>whiteBall ? brownBall : whiteBall;
    cout<<"You have "<<maxBall<<" maximum balls ";


}