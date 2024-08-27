#include <iostream>
using namespace std;
int main(){
    cout<<"Enter the no of rows"<<endl;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"* ";
        }
        for(int k=0;k<=i;k++){
            cout<<"  ";
        }
        for(int l=1;l<=i;l++){
            cout<<"  ";
        }
        for(int m=0;m<n-i;m++){
            cout<<"* ";
        }
        cout<<endl;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }

        for(int l=n-i;l>1;l--){
            cout<<"  ";
        } 

        for(int k=0;k<n-i;k++){
            cout<<"  ";
        }
        
        for(int m=0;m<=i;m++){
            cout<<"* ";
        }
        cout<<endl;
    }
}