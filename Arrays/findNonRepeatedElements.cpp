#include <iostream>
using namespace std;
int nonRepeated(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    return ans;
}
int main(){
    int arr[100];
    cout<<"Enter the size of the array"<<endl;
    int size;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int nonRepeatedElement=nonRepeated(arr,size);
    cout<<nonRepeatedElement<<endl;
}