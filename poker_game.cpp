#include <iostream>
#include <cstdlib>
#include <stdlib>
using namespace std;

struct Player
{
    string name;
    int bank = 500;
    int bet;
    int hand[4];
};
int generate()
{
    srand(time(NULL));
    int real.hand={int(1)+ rand() + int(12)};
    int bot1.hand={int(1)+ rand() + int(12)};
    int bot2.hand={int(1)+ rand() + int(12)};
    int bot3.hand={int(1)+ rand() + int(12)};
}
int main()
{
    Player real;
    Player Bot1;
        Bot1.name = "James";
    Player Bot2;
        Bot2.name = "Frankie";
    Player Bot3;
        Bot3.name = "John";
    cout<<"------------------------------------------WELCOME TO POKER GAME------------------------------------------------------\n";
    cout<<"----------------------------------------------Type Your Name---------------------------------------------------------\n";
    cin>>real.name;
    cout<<"------------------------------------Welcome to the table "<<real.name<<" !-------------------------------------------\n";
    cout<<"------------------------------------We Will Start By Generating The Cards--------------------------------------------\n";
    generate();
    int value = real.hand;
    cout<<"----------------------------------------------Your Cards Are---------------------------------------------------------\n";
    if(value = 1)   cout<<"A ";
    else if(value = 10) cout<<"J ";
    else if(value = 11) cout<<"Q ";
    else if(value = 12) cout<<"K ";
    else    cout<<value;


}
