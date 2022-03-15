/* Programmer : Paul Kumar
   Date       : 14/03/2022
   Topic      : Class Related Programs.
   IDE        :  VS Code             */

#include <iostream>
using namespace std;

class WORKER
{
private:
    int wno;
    char wname[25];
    float hrwrk, wgrate, totwage;
    float calcwg();

public:
    void In_data();
    void Out_data();
};
float WORKER ::calcwg()
{
    return (hrwrk * wgrate);
}
void WORKER::In_data()
{
    cout << "Enter the Worker's No. : ";
    cin >> wno;
    cout << "Enter Worker's Name : ";
    cin >> wname;
    cout << "Enter Hours worked : ";
    cin >> hrwrk;
    cout << "Enter Wagerate : ";
    cin >> wgrate;
    totwage = calcwg();
}
void WORKER::Out_data()
{
    cout << "\n\nWorker No. : " << wno << endl;
    cout << "Worker Name : " << wname << endl;
    cout << "Hours worked : " << hrwrk << endl;
    cout << "Wagerate : " << wgrate << endl;
    cout << "Total Wage : " << totwage << endl;
}
int main()
{
    WORKER obj;
    obj.In_data();
    obj.Out_data();
    return 0;
}