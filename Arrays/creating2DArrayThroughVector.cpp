#include <iostream>
#include<vector>
using namespace std;
void search(vector<vector<int>>arr, int target){
    int rowSize=arr.size();
    int colSize=arr[0].size();
    for(int i=0;i<rowSize;i++){
        for(int j=0;j<colSize;j++){
            if(arr[i][j]==target){
                cout<<i<<" "<<j<<" ";
            }
        }
    }
}

int main(){
    vector<vector<int> > arr(4,vector<int>(3,0));
    int rowSize=arr.size();
    int colSize=arr[0].size();
    for(int i=0;i<rowSize;i++){
        for(int j=0;j<colSize;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //searching a particular element in 2d vector
    for(int i=0;i<rowSize;i++){
        for(int j=0;j<colSize;j++){
            cin>>arr[i][j];
        }
    }

    int target;
    cin>>target;

    search(arr,target);
}