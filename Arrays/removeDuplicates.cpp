#include <iostream>
using namespace std;
//array provide should be sorted
int main(){
    int arr[100];
    cout<<"Enter the size"<<endl;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=1;
    int j=0;
    while(i<=n-1){

    if(arr[i]==arr[j]){
        i++;
    }else{
        j++;
        arr[j]=arr[i];
        i++;
    }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}