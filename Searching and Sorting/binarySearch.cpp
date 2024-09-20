#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>arr;
    cout<<"Enter the no of elements"<<endl;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        arr.push_back(data);
    }

    cout<<"Enter the element you want to search for"<<endl;
    int element;
    cin>>element;
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==element){
            cout<<mid<<endl;
            break;
        }else if(arr[mid]>element){
            end=mid-1;
        }else{
            start=mid+1;
        }
    }

}