#include <iostream>
#include <vector>
using namespace std;
int binarySearch(vector<int> arr,int target){
    int start=0;
    int end=arr.size()-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==target){
            return mid;

        }else if(arr[mid+1]==target){
            return mid+1;
        }else if(arr[mid-1]==target){
            return mid-1;
        }else if(target>arr[mid]){
            start=mid+2;
        }else{
            end=mid-2;
        }
    }
    return -1;
}
int main(){
    vector<int> arr={10,3,40,20,50,80,70};
    int target=70;
    int ans=binarySearch(arr,target);
    cout<<ans<<endl;
}