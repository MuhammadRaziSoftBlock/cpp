#include <iostream>

using namespace std;
class Employee
{
public:
    int salary, perHour;
    void getInfo()
    {
        cout << "Enter Salary Per Hour :";
        cin >> salary;
        cout << "Enter Hour inn a Day :";
        cin >> perHour;
    }
    void addSal()
    {
        if (salary < 500)
        {
            cout << "Salary is :" << salary + 10;
        }
    }
    void addWork()
    {
        if (perHour > 6)
        {
            cout << "Salary is :" << salary + 5;
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
