/* Programmer : Paul Kumar
   Date       : 14/03/2022
   Topic      : Class Related Programs.
   IDE        :  VS Code             */

#include <iostream>
using namespace std;

class STUDENT
{
private:
    int Admno;
    char Sname[20];
    float English, Math, Science, total;
    float Ctotal();

public:
    void Takedata();
    void Showdata();
};

float STUDENT::Ctotal()
{
    return (English + Math + Science);
}

void STUDENT::Takedata()
{
    cout << "Enter the Admission No. : ";
    cin >> Admno;
    cout << "Enter the name : ";
    cin >> Sname;
    cout << "Enter the marks in English : ";
    cin >> English;
    cout << "Enter the marks in Math : ";
    cin >> Math;
    cout << "Enter the marks in Science : ";
    cin >> Science;
    total = Ctotal();
}
void STUDENT::Showdata()
{
    cout << "\n\nAdmission No. : " << Admno << endl;
    cout << "Name : " << Sname << endl;
    cout << "Marks in English : " << English << endl;
    cout << "Marks in Math : " << Math << endl;
    cout << "Marks in Science : " << Science << endl;
    cout << "Total : " << total << endl;
}
int main()
{
    STUDENT obj;
    obj.Takedata();
    obj.Showdata();

    return 0;
}