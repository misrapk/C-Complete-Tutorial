#include <iostream>
using namespace std;

int main()
{

    const int innings[4]{20, 80, 100, 120};
    // cout<<innings[0]<<endl;
    // cout<<innings[1]<<endl;
    // cout<<innings[2]<<endl;
    // cout<<innings[3]<<endl;

    // for(int i{0}; i<4; i++){
    //     cout<<innings[i]<<endl;
    // }

    int values[]{2, 3, 4, 5, 6, 7, 9};

    int countValues = sizeof(values) / sizeof(values[0]);

    // cout<<sizeof(values[0])<<endl;
    cout << countValues << endl;

    //     cout<<size(values)<<endl;

    /*for each loop*/

    int total{};
    for (auto a : values)
    {
        total += a;
    }
    cout<<"SUm is : "<<total;
}
