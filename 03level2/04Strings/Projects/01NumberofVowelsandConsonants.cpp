// user input: "Peeyush"
//  ouptput: Vowels(a, e, i, o, u): 3
//           consonants: 4

#include <iostream>
using namespace std;

int main()
{
    string word;
    cout << "Enter any word: ";
    cin >> word;

    int vowels{};
    int consonants{};

    // check all the charcters (traversing)
    for (int i{}; i < word.length(); i++)
    {
        if (isalpha(word[i]))
        {
            //TODO: using switch case
            switch (tolower(word[i]))
            {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                vowels++;
                break;

            default:
                consonants++;
                break;
            }

            // TODO: using for loop

            //  if (tolower(word[i]) == 'a' ||
            //      tolower(word[i]) == 'e' ||
            //      tolower(word[i]) == 'i' ||
            //      tolower(word[i]) == 'o' ||
            //      tolower(word[i]) == 'u')
            //  {
            //      vowels++; // vowels = vowels+1
            //  }
            //  else
            //  {
            //      consonants++;
            //  }
        }
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
}