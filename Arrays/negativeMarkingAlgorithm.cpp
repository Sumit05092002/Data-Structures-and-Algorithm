#include <iostream>
using namespace std;
int duplicate(int arr[],int n){
    int ans=-1;
    for(int i=0;i<n;i++){
        int index=abs(arr[i]);
        if(arr[index]<0){
            return index;
        }
        arr[index]*=ans;
    }
    return -1;
}
int main(){
    int arr[100];
    cout<<"Enter the size of the array"<<endl;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=duplicate(arr,n);
    cout<<"ans:"<<ans<<endl;
}