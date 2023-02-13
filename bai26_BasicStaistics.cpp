#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, s = 0;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++)
    {
        cin >> a[i];
        s = s+a[i];
    }
    sort (a,a+n);
    cout << "Mean: " << double(s)/double(n) << endl;
    cout << "Max: " << a[n-1] << endl;
    cout << "Min: " << a[0];
    return 0;
}
