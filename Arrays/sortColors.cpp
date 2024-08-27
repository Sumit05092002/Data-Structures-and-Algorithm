#include <iostream>
using namespace std;
void sortColors(int arr[],int n){
   int low=0;
   int medium=0;
   int high=n-1;
   while(medium<=high){
    if(arr[medium]==0){
        swap(arr[medium],arr[low]);
        low++;
        medium++;
    }else if(arr[medium]==1){
        medium++;
    }else{
        swap(arr[medium],arr[high]);
        high--;
    }
   }
}
int main(){
    int arr[100];
    cout<<"Enter the size of the array"<<endl;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sortColors(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}