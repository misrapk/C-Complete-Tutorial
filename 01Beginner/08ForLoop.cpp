#include <iostream>
using namespace std;

int main()
{

    // cout<<"0 1 2 3 4 5 6 7 8 9 10";

    // for (int i{}; i <= 10; i++)
    // {
    //     cout << i << " ";
    // }

    // int i{5};

    // for (; i<10; )
    // {
    //     cout << i << " ";
    //     ++i;
    // }

    // cout << "I AM OUTSIDE THE LOOP!\n";


    int n{};
    cout<<"ENTER THE NUMBER : ";
    cin>>n;

    int sum{};
    for(int i {1}; i<=n; i++){
        sum += i;  // sum = sum+i;
        cout<<sum<<endl;
        
    }

    cout<<"SUM IS : "<<sum; 
}