/* Programmer : Paul Kumar
   Date       : 14/03/2022
   Topic      : Class Related Programs.
   IDE        :  VS Code             */

#include <iostream>
using namespace std;

class Resort
{
private:
    int rno, days;
    char name[20];
    float charges;
    float compute()
    {

        int amt;
        amt = days * charges;
        if (amt > 11000)
        {
            amt *= 1.02;
            return amt;
        }
        else
            return amt;
    }

public:
    void getinfo()
    {
        cout << "Enter Room No. : ";
        cin >> rno;
        cout << "Enter Name : ";
        cin >> name;
        cout << "Enter per day charges : ";
        cin >> charges;
        cout << "Enter the no. of days stayed : ";
        cin >> days;
    }
    void dispinfo()
    {

        cout << "\n\nRoom No. : " << rno << endl;
        cout << "Name : " << name << endl;
        cout << "Per day charges : " << charges << endl;
        cout << "No. of days stayed : " << days << endl;
        cout << "Total Amount : " << compute() << endl;
    }
};

int main()
{
    Resort obj;
    obj.getinfo();
    obj.dispinfo();
    return 0;
}
