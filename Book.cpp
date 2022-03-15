/* Programmer : Paul Kumar
   Date       : 14/03/2022
   Topic      : Class Related Programs.
   IDE        :  VS Code             */

#include <iostream>
using namespace std;

class BOOK
{
private:
    int BOOK_NO;
    char BOOK_TITLE[20];
    float PRICE;
    float TOTAL_COST(int N)
    {
        float TOTAL;
        TOTAL = N * PRICE;
        return TOTAL;
    }

public:
    void INPUT()
    {
        cout << "Enter the Book No. : ";
        cin >> BOOK_NO;
        cout << "Enter Book Title : ";
        cin >> BOOK_TITLE;
        cout << "Enter the Price : ";
        cin >> PRICE;
    }
    void PURCHASE()
    {
        int n;
        cout << "Enter the No. of copies purchased : ";
        cin >> n;
        cout << "Total Cost : " << TOTAL_COST(n) << endl;
    }
};
int main()
{
    BOOK obj;
    obj.INPUT();
    obj.PURCHASE();
    return 0;
}