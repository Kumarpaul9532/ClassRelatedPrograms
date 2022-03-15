/* Programmer : Paul Kumar
   Date       : 14/03/2022
   Topic      : Class Related Programs.
   IDE        :  VS Code             */

#include <iostream>
using namespace std;

class COMPETITION
{
private:
    int event_no, score;
    char description[30], qualified;

public:
    void Input()
    {
        cout << "Enter Event No. : ";
        cin >> event_no;
        cout << "Write description : ";
        cin >> description;
        cout << "Enter score : ";
        cin >> score;
    }
    void Award()
    {
        if (score > 75)
            qualified = 'Y';
        else
            qualified = 'N';
    }
    void show()
    {
        cout << "\n\nEvent No. : " << event_no << endl;
        cout << "Description : " << description << endl;
        cout << "Score : " << score << endl;
        cout << "Qualified : " << qualified << endl;
    }
};

int main()
{

    COMPETITION obj;
    obj.Input();
    obj.Award();
    obj.show();

    return 0;
}