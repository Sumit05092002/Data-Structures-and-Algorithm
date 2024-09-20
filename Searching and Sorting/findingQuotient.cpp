#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the dividend" << endl;
    int dividend;
    cin >> dividend;
    cout << "Enter the divisor" << endl;
    int divisor;
    cin >> divisor;

    int ans = -1;
    if (dividend > 0 && divisor > 0)
    {
        int start = -dividend;
        int end = dividend;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (divisor * mid <= dividend)
            {
                ans = mid;
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    else if (dividend > 0 && divisor < 0)
    {
        int start = -dividend;
        int end = dividend;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (divisor * mid <= dividend)
            {
                ans = mid;
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
    }
    else if (dividend < 0 && divisor > 0)
    {
        int start = dividend;
        int end = -dividend;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (divisor * mid >= dividend)
            {
                ans = mid;
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
    }
    else
    {
        cout << "case3" << endl;
        int start = dividend;
        int end = -dividend;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (divisor * mid >= dividend)
            {
                ans = mid;
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }

    cout << ans << endl;
}