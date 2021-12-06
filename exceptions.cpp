#include <iostream>
using namespace std;

int main()
{
    try
    {
        int age = 15;
        if(age >= 18)
        {
            cout << "You are allowed to gain access!";
        }else
        {
            throw 505;
        }
    }
    catch(...)
    {
        cout<< "Access denied - you must be 18 years old!" << endl;
        
    }

    return 0;
}