#include <iostream>
using namespace std;
int main(){
    int arr[3][3]={{70,23,41},{27,69,42},{56,12,18}};
    int secondMin=0;
    int min=arr[0][0];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]<min){
                secondMin=min;
                min=arr[i][j];
            }
        }
    }
    cout<<secondMin<<endl;
    cout<<min<<endl;
    
}