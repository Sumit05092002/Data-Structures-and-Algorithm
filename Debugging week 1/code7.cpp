/*
Pattern
N = 4
   1
  232
 34543
4567654
*/
#include<iostream>
using namespace std;
int main(){
    int no;
    cin>>no;
    int i=1;
    int n = 2*no;
    int count=0;
    int count2=-1;
    while(i<=no){
        int gaps = n-i;
        int k=1;
        while(k<=gaps){
            cout<<" ";
            k = k + 1;
        }
        int ch = n - gaps + 1, z = 1;
        while(z<=i){
            cout<<z+count;
            z = z + 1;
        }
            count=count+1;
            int j=2;
        while(j<=i){
            cout<<j+count2;
            j=j+1;
        }
        count2=count2+1;
        cout<<"\n";
        i = i + 1;
    }
}