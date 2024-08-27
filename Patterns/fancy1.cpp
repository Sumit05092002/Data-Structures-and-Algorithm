#include <iostream>
using namespace std;
int main(){
    cout<<"Enter the no of rows"<<endl;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<2*i+1;j++){
            if(j%2!=0){
                cout<<"X ";
            }else{
                cout<<i+1<<" ";
            }
        }
            cout<<endl;
    }
}