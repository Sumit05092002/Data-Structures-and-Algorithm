/*
Pattern
N = 4
   *
  ***
 *****
*******
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j = i,count = i+2*i-1,gaps=(n-i),k=1;
        while(k<=gaps){
            cout<<" ";
            k = k + 1;
        }
        int m = 1,ch=i;
        while(m<=ch){
            cout<<"*";
            m = m + 1;
        }
        k = 2;
        while(k<=i){
            cout<<"*";
            k = k + 1;
        }
        cout<<"\n";
        i = i + 1;
    }
}