#include <iostream>
#include <unordered_map>
using namespace std;
int findRepeating(int arr[], int n)
{
    unordered_map<int, int> hash;
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (hash[arr[i]] > 1)
        {
            return arr[i];
        }
    }
    return -1;
}
int main()
{
    int arr[100];
    cout << "Enter the size of the array" << endl;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = findRepeating(arr, n);
    cout<<"ans:"<<ans<<endl;
}