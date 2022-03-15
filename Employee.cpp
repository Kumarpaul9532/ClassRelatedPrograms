/* Programmer : Paul Kumar
   Date       : 14/03/2022
   Topic      : Class Related Programs.
   IDE        :  VS Code             */

#include <iostream>
using namespace std;

class EMPLOYEE
{
private:
    int empno;
    char ename[20];
    float basic, hra, da, netpay;
    float calculate()
    {
        return (basic + hra + da);
    }

public:
    void havedata()
    {
        cout << "Enter Employee No. : ";
        cin >> empno;
        cout << "Enter Employee Name : ";
        cin >> ename;
        cout << "Enter Basic Pay : ";
        cin >> basic;
        cout << "Enter Dearness Allowance : ";
        cin >> da;
        cout << "Enter House Rent Allowance : ";
        cin >> hra;
        netpay = calculate();
    }
    void display()
    {
        cout << "\n\nEmployee No. : " << empno << endl;
        cout << "Name : " << ename << endl;
        cout << "Basic Pay : " << basic << endl;
        cout << "Dearness Allowance : " << da << endl;
        cout << "House Rent Allowance : " << hra << endl;
        cout << "Netpay : " << netpay << endl;
    }
};
int main()
{
    EMPLOYEE obj;
    obj.havedata();
    obj.display();

    return 0;
}