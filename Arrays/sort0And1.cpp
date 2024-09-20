#include <iostream>
using namespace std;
void sort(int arr[],int size){
   int s=0;
   int e=size-1;
   while(s<e){
    if(arr[s]>arr[e]){
        swap(arr[s],arr[e]);
        e--;
    }
    s++;
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
    sort(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
}