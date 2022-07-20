#include <iostream>
using namespace std;

int main()
{
    // int s[3]{2,3,4};

    int score[3][4]{
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {10, 11, 12, 13},
    };

    // for(int row = 0; row<3; row++){
    //     for(int col=0; col<4; col++){
    //         cout<<score[row][col]<<" ";
    //     }
    //     cout<<endl;
    // }

    int weight[][3]{
        {1},
        {2, 3, 4},
        {1, 2},
        {5, 6, 7},
        {}};
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << weight[i][j] << " ";
        }
        cout << endl;
    }
}