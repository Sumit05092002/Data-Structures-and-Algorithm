#include <iostream>
using namespace std;

int main(){
    int arr[100];
    cout<<"Enter the value of n";
    int n;
    cin>>n;
    int actualSum=0;
    for(int i=0;i<=n;i++){
        actualSum=actualSum+i;
    }
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int arraySum=0;
    for(int i=0;i<n;i++){
        arraySum=arraySum+arr[i];
    }
    int missingNo=actualSum-arraySum;
    cout<<missingNo<<endl;
}