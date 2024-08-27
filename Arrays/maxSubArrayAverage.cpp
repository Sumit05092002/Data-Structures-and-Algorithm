#include <iostream>
using namespace std;
#include <algorithm>
#include <climits>
double maxSubArrayAverage(int arr[],int n,int k){
    int i=0;
    int j=k-1;
    double sum=0;
    double maxSum=INT_MIN;
    for(int y=0;y<=j;y++){
        sum=sum+arr[y];
    }
    maxSum=max(maxSum,sum);
    while(j<n-1){
        sum=sum-arr[i];
        i++;
        j++;
        sum=sum+arr[j];
        cout<<j;
        cout<<"sum:"<<sum<<endl;
        maxSum=max(maxSum,sum);
        cout<<"maxSum:"<<maxSum<<endl;
    }
    double maxAvg= maxSum/k;
    cout<<maxAvg<<endl;
    return maxAvg;
}
int main(){
    int arr[100];
    cout<<"Enter the size of the array"<<endl;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the value of K"<<endl;
    int k;
    cin>>k;
    double ans=maxSubArrayAverage(arr,n,k);
    cout<<ans<<endl;
}