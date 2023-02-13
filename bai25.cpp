#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    long n[5];
    for (int i=0; i<5; i++)
    {
        cin >> n[i];
    }
    sort (n,n+5);
    cout << n[2];
    return 0;
}
