#include <iostream>

using namespace std;
class Employee
{
public:
    int Salary, perHour;
    void getInfo()
    {

        cout << "Enter Salary Per Hour :";
        cin >> Salary;
        cout << "Enter Hour inn a Day :";
        cin >> perHour;
    }
    void addSal()
    {
        if (Salary < 500)
        {
            cout << "Salary is :" << Salary + 10;
        }
    }
    void addWork()
    {
        if (perHour > 6)
        {
            cout << "Salary is :" << Salary + 5;
        }
    }
};

int main()
{
    Employee obj;
    obj.getInfo();
    obj.addSal();
    obj.addWork();
    return 0;
}
