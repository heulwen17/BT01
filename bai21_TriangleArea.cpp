#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float S,p,a,b,c;
    cin >> a >> b >> c;
    p = (a+b+c)/2;
    S = sqrt(p*(p-a)*(p-b)*(p-c));
    cout << S;
    return 0;
}
