/* Programmer : Paul Kumar
   Date       : 14/03/2022
   Topic      : Class Related Programs.
   IDE        :  VS Code             */

#include <iostream>
using namespace std;

class Flight
{
    int FlightNumber;
    char Destination[20];
    float Distance, Fuel;
    float CalFuel()
    {
        if (Distance <= 1000)
            return 500;
        else if (Distance > 1000 && Distance <= 2000)
            return 1100;
        else
            return 2200;
    }

public:
    void Feed_info()
    {
        cout << "Enter the Flight No. : ";
        cin >> FlightNumber;
        cout << "Enter the Destination : ";
        cin >> Destination;
        cout << "Enter the Distance : ";
        cin >> Distance;
        Fuel = CalFuel();
    }
    void Show_Fuel()
    {
        cout << "\n\nFlight No. : " << FlightNumber << endl;
        cout << "Destination : " << Destination << endl;
        cout << "Distance : " << Distance << endl;
        cout << "Fuel : " << Fuel << endl;
    }
};
int main()
{

    Flight obj;
    obj.Feed_info();
    obj.Show_Fuel();

    return 0;
}
