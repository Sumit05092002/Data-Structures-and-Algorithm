#include <iostream>
using namespace std;
//Time complexity:n3
void threeSum(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            for(int k=j+1;k<size;k++){
                if(arr[i]+arr[j]+arr[k]==target){
                    cout<<arr[i]<<","<<arr[j]<<","<<arr[k]<<endl;
                }
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
    threeSum(arr,size,target);
}