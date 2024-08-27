/*
Pattern
1
23
345
4567
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;
    int count = 0;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << j + count;
            j = j + 1;
        }
        count = count + 1;
        cout << "\n";
        i = i + 1;
    }
}