#include <iostream>
using namespace std;

int main()
{
    string text{"Participate in Hackathons, Coding Competitions, or Contribute to open source projects. It doesnt matter what you do out of these, the important thing is that you are coding by yourself (coding means not competitive programming). It will develop your technical skills, and practical experience, and also your initiative will impress the recruiters."};

    // cout << text;
    string word;
    cout << "enter sting to find: ";
    cin >> word;

    int count{};
    int index{};
    while ((index = text.find(word, index)) != string::npos)
    {
        count++;
        index = index + word.length();
    }

    cout << word << " occurs " << count << " times in the paragraph!" << endl;
}