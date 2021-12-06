#include <iostream>
using namespace std;
int main()
{
    int digit, num;
    num = 123;
    digit = num % 10;
    cout << digit <<endl;
    num = num / 10;
    cout << num << endl;
    return 0;

}
