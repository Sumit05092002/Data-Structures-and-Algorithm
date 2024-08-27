#include <iostream>
#include <vector>
using namespace std;
int pivot(vector<int> v, int n)
{
    int ans;
    int rightSum[n];
    int leftSum[n];
    leftSum[0]=0;
    rightSum[n-1]=0;
    for(int i=1;i<n;i++){
        leftSum[i]=leftSum[i-1]+v[i-1];
    }
    for(int i=n-2;i>=0;i--){
        rightSum[i]=rightSum[i+1]+v[i+1];
    }
    for(int i=0;i<n;i++){
        if(leftSum[i]==rightSum[i]){
            return i;
        }
    }
    return -1;
}
int main()
{
    vector<int> v;
    cout << "Enter the value for n" << endl;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int data;
        cin >> data;
        v.push_back(data);
    }
    int idx = pivot(v, n);
    cout << idx;
}