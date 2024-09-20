#include <iostream>
#include <vector>
using namespace std;
int searchOdd(vector<int> arr)
{
    int n = arr.size();
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int leftValue=-1;
        int rightValue=-1;
        if(mid-1>=0){
            leftValue=arr[mid-1];
        }
        if(mid+1<n){
            rightValue=arr[mid+1];
        }
        if (arr[mid] != leftValue && arr[mid] != rightValue)
        {
            return arr[mid];
        }
        else if (mid % 2 == 0 && mid+1<n&&arr[mid] == arr[mid + 1])
        {
            start = mid + 2;
        }
        else if (mid % 2 != 0 && mid-1>=0&&arr[mid] == arr[mid - 1])
        {
            start = mid + 2;
        }
        else if (mid % 2 != 0 &&mid+1<n&& arr[mid] == arr[mid + 1])
        {
            end = mid - 2;
        }else{
            end=mid-2;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr = {1,2,2,3,3};
    int ans = searchOdd(arr);
    cout << ans << endl;
}