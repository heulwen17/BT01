#include <iostream>

using namespace std;

int main()
{
    int dd, mm, yy;
    cin >> dd >> mm >> yy;
    int m = ((14 - mm) / 12);
    int y = (yy + 4800 - m);
    int d = dd - 32045 + (((mm + 12 * m - 3) * 153 + 2) / 5) + (y * 365) + (y / 4) - (y / 100) + (y / 400);
    switch(d % 7)
    {
        case 0: cout << "Monday"; break;
        case 1: cout << "Tuesday"; break;
        case 2: cout << "Wednesday"; break;
        case 3: cout << "Thursday"; break;
        case 4: cout << "Friday"; break;
        case 5: cout << "Saturday"; break;
        case 6: cout << "Sunday"; break;
    }
    return 0;
}
