#include <iostream>
using namespace std;
int maximum(int arr[],int size){
    int max=arr[0];
    int i=0;
    while(i<size){
        if(arr[i]>max){
            max=arr[i];
        }
        i++;
    }
    return max;
}

int main(){
    int arr[100];
    cout<<"Enter the size of the array"<<endl;
    int size;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int max=maximum(arr,size);
    cout<<max<<endl;
}