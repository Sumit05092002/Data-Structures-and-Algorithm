#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int arr[]={1,0,2};
    sort(arr,arr+3);
    int s=0;
    int e=2;
    int ans=-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==mid){
            s=mid+1;
        }else{
            ans=mid;
            e=mid-1;
        }
    }
    if(ans==-1){
        cout<<3<<endl;
    }else{
         cout<<ans<<endl;
    }
   
}