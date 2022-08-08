#include <iostream>
using namespace std;

int main()
{
    // string name{"chinki"};
    // string name2{"rahul"};
    // string name3{"chinki"};

    // // cout<<name.substr(2,3);

    // cout<<(name3==name);

    string text1{"India's current no.1 batsman is virat!"};
    string text2{"virat"};
cout<<text1.length()<<endl<<text2.length()<<endl;

    // TODO: compare(stratIndex, no.ofCharacter, string)
    //  cout<<text1.compare(3, text2.length(), text2 );

    for (int i{}; i < text1.length() - text2.length(); i++)
    {
        if (text1.compare(i, text2.length(), text2) == 0)
        {
            cout << "Sentence contains " << text2 << " at index " << i << " " << text1[i] << endl;
        }
    }

    //TODO:Find
    string name1{"My name is spider. i am spider"};
    cout<<name1.find("spider" , 17);
    
}