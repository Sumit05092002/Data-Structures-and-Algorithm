#include <iostream>
using namespace std;
void move(int arr[],int n){
    int j=0;
    int i=0;
    while(i<=n-1){
        if(arr[i]>0){
            swap(arr[i],arr[j]);
            j++;
            i++;
        }else{
            i++;
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
    move(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}