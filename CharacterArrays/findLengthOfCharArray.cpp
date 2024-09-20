#include <iostream>
#include <vector>
using namespace std;
int main(){
    char arr[100];
    cout<<"Enter your value"<<endl;
    cin>>arr;
    int i=0;
    int count=0;
    while(arr[i]!='\0'){
        i++;
        count++;
    }
    cout<<count<<endl;
}