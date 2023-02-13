#include <iostream>

using namespace std;

int main()
{
    cout << "12 midnight" << endl;
    for (int i=1; i<24; i++)
    {
        if (i<12)
        {
            cout << i << "am" << endl;
        }
        if (i==12)
        {
            cout << "12 noon" << endl;
        }
        if (i>12)
        {
            cout << i-12 << "pm" << endl;
        }
    }
    return 0;
}
