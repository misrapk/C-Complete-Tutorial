#include <iostream>
using namespace std;

class Player
{
private:
    string pName;
    int pHealth;
    int pXp;

public:
    Player() : pName{"none"},
               pHealth{0},
               pXp{0}
    {
        cout << "Default Constructor\n";
    }

    Player(string name) : pName{name},
               pHealth{0},
               pXp{0}
    {
        cout << "One Argument\n";
    }

    Player(string name, int health) : pName{name},
               pHealth{health},
               pXp{0}
    {
        cout << "Two Argument\n";
    }

    Player(string name, int health, int xp) : pName{name},
               pHealth{health},
               pXp{xp}
    {
        cout << "All Argument\n";
    }

    void getValue()
    {
        cout << "NAME: " << pName << "\n";
        cout << "Health: " << pHealth << "\n";
        cout << "XP: " << pXp << "\n";
    }
};

int main()
{
   Player p1{};
   Player p2{"Player 2"};
   Player p3{"Player3", 100};
   Player p4{"Player4", 100, 50};
   p3.getValue();
   
}