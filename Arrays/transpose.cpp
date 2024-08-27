#include <iostream>
using namespace std;
int main(){
    cout<<"Enter the no of rows"<<endl;
    int rows;
    cin>>rows;
    int arr[rows][rows];
    for(int i=0;i<rows;i++){
        for(int j=0;j<rows;j++){
            cin>>arr[i][j];
        }
    }

    int ans[rows][rows];
    for(int i=0;i<rows;i++){
        for(int j=0;j<rows;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<rows;j++){
            ans[j][i]=arr[i][j];
        }
    }

    for(int i=0;i<rows;i++){
        for(int j=0;j<rows;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }


//same array ko agar transpose karna hai toh

for(int i=0;i<rows;i++){
    for(int j=i;j<rows;j++){
        swap(arr[i][j],arr[j][i]);
    }
}

for(int i=0;i<rows;i++){
        for(int j=0;j<rows;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}