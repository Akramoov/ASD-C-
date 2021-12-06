#include <iostream>
using namespace std;

// base class
class Employee {
    protected:
        int salary;
};

// derived class
class Programmer: public Employee {
    public:
        int bonus;
        void setsalary(int s)
        {
            salary = s;

        }
        int getsalary()
        {
            return salary;
        }
};

int main()
{
    Programmer myObj;
    myObj.setsalary(50000);
    myObj.bonus = 15000;
    cout << "Salary : " << myObj.getsalary() << endl;
    cout << "Bonus : " << myObj.bonus << endl;

    return 0;
   
}