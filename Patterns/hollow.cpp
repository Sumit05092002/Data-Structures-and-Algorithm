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
            if(i==0||i==rows-1||j==0||j==coloumns-1||j==i||j==coloumns-i-1){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}