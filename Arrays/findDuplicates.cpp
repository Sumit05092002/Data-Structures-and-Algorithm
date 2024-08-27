#include <iostream>
using namespace std;
int duplicates(int arr[]){
    while(arr[0]!=arr[arr[0]]){
        swap(arr[0],arr[arr[0]]);
    }
    return arr[0];
}
int main(){
    int arr[100];
    cout<<"Enter the size of the array"<<endl;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=duplicates(arr);
    cout<<ans<<endl;
}