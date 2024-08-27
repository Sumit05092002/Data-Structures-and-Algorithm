#include <iostream>
using namespace std;
int main(){
    int arr[100];
    cout<<"Enter the size of the array"<<endl;
    int size;
    cin>>size;
    cout<<"start entering the values in the array"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int s=0;
    int e=size-1;
    while(s<=e){
        cout<<arr[s]<<" ";
        s++;
        if(e>s){
        cout<<arr[e]<<" ";
        e--;
        }
    }
}