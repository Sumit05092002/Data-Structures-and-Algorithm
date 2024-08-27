#include <iostream>
using namespace std;
//time complexity:n2
void twoSum(int arr[],int size,int target){
   for(int i=0;i<size;i++){
    for(int j=i+1;j<size;j++){
        if(arr[i]+arr[j]==target){
            cout<<arr[i]<<" "<<arr[j]<<endl;
        }
    }
   }
}
int main(){
    int arr[100];
    cout<<"Enter the size of the array"<<endl;
    int size;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];

    }

    cout<<"Enter the target"<<endl;
    int target;
    cin>>target;
    twoSum(arr,size,target);
}