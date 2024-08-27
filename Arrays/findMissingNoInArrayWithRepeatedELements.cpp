#include <iostream>
using namespace std;
int missing(int arr[],int n){
    int ans=-1;
    for(int i=0;i<n;i++){
        int index=abs(arr[i]);
        if(arr[index-1]>0){
            arr[index-1]*=ans;
        }
    }
        for(int i=0;i<n;i++){
            if(arr[i]>0){
                return i+1;
            }
        }
        return ans;
}
int main(){
    int arr[100];
    cout<<"Enter the size of the aray"<<endl;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=missing(arr,n);
    cout<<"ans:"<<ans;
}