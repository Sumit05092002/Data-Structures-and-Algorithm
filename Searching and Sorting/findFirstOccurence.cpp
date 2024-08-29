#include <iostream>
#include <vector>
using namespace std;
void findFirstOccurence(vector<int>&v,int n,int&ans,int target){
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(v[mid]==target){
            ans=mid;
            end=mid-1;
        }else if(v[mid]>target){
            end=mid-1;
        }else{
            start=mid+1;
        }
    }
}
int main(){
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        v.push_back(data);
    }
    int ans=-1;
    int target;
    cin>>target;
    findFirstOccurence(v,n,ans,target);
    cout<<"First occurence is: "<<ans<<endl;
}