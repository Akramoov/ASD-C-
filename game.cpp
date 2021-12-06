#include<iostream>
#include<string>
using namespace std;

struct player
{
    string name;
    int damages;
    int hitpoints;

    bool IsDead()
    {
        return hitpoints <= 0;
    }

    void attack(player& other)
    {
        other.hitpoints -= damages;
    } 
};
int main()
{
    player player1;
    player player2;
    player player3;

    player1.name = "Akram";
    player1.hitpoints = 5;
    player1.damages = 2;

    player2.name = "James";
    player2.hitpoints = 6;
    player2.damages = 3;

    if(player1.IsDead())
    {
        cout<<player1.name<<" is DEAD!"<<endl;
    }else{
        cout<<player1.name<<" is not DEAD"<<endl;
    }
    player1.attack(player2);
    cout<<player1.hitpoints<<endl;
    cout<<player2.hitpoints<<endl;
    
}