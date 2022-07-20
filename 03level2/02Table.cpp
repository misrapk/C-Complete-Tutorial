#include <iostream>
using namespace std;

int main()
{

    int row{10};
    int col{20};

    int table[row][col]{};

    for (int i{1}; i < row; i++)
    {
        for (int j{1}; j < col; j++)
        {
            table[i][j] = i * j;
        }
    }

    // print
    cout << "Multiplication Table is Here" << endl;
    for (int i{1}; i < row; i++)
    {
        for (int j{1}; j < col; j++)
        {
            cout << table[i][j] << "\t";
        }
        cout << endl;
    }
}