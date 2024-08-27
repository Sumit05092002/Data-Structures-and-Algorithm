#include <iostream>
using namespace std;

int linear(int arr[],int size,int key){
    int i=0;
    while(i<size){
        if(arr[i]==key){
            return i;
        }
        i++;
    }
    return -1;
}

int main(){
    int arr[100];
    cout<<"Enter the size of the array";
    int size;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"Enter the key"<<endl;
    int key;
    cin>>key;
    int idx=linear(arr,size,key);
    cout<<idx;
}
