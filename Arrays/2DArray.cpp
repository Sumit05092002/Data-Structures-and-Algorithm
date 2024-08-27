#include <iostream>
using namespace std;
void print(int arr1[][3],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr1[row][col];
        }
    }
}
int main(){
    int arr[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    //row wise traversal
    for(int row=0;row<4;row++){
        for(int col=0;col<3;col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }

    //coloumn wise traversal
    for(int col=0;col<3;col++){
        for(int row=0;row<4;row++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
    int row,col;
    cin>>row;
    cin>>col;

    int arr1[row][col];

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr1[row][col];
        }
    }

    print(arr1,row,col);
}
