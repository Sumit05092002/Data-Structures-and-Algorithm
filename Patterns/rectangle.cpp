#include <iostream>
using namespace std;
int main(){
    cout<<"Enter the no of rows"<<endl;
    int rows;
    cin>>rows;
    cout<<"Enter the no of coloumns"<<endl;
    int coloumns;
    cin>>coloumns;

    for(int i=0;i<rows;i++){
        for(int j=0;j<coloumns;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}