#include <iostream>
#include <string>

using namespace std;

int main()
{
    string FibonacyWord[11];
    FibonacyWord[0]='a';
    FibonacyWord[1]='b';
    cout << FibonacyWord[0] << " " << FibonacyWord[1] << " ";
    for (int i=2; i<11; i++)
    {
        FibonacyWord[i]=FibonacyWord[i-1]+FibonacyWord[i-2];
        cout << FibonacyWord[i] << " ";
    }
    return 0;
}
