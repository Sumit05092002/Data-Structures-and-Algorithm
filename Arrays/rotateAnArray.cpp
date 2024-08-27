#include <iostream>
using namespace std;
void reverse(int arr[],int start,int end){
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void rotate(int arr[],int size,int n){
    reverse(arr,0,size-1);
    reverse(arr,0,n-1);
    reverse(arr,n,size-1);
}

int main(){
    int arr[100];
    cout<<"Enter the size of the array"<<endl;
    int size;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter the no of places"<<endl;
    int n;
    cin>>n;
    rotate(arr,size,n);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}