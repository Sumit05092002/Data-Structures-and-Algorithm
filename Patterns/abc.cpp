#include <iostream>
using namespace std;
int main(){
    cout<<"Enter the no of rows"<<endl;
    int n;
    cin>>n;
    for(int i=65;i<65+n;i++){
        for(int j=65;j<=i;j++){
            cout<<char(j);
        }
        
        for(int k=i-1;k>=65;k--){
            cout<<char(k);
        }
        cout<<endl;
    }
}
