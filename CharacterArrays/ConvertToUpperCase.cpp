#include <iostream>
using namespace std;
int main(){
    char arr[100];
    cout<<"Enter the value"<<endl;
    cin.getline(arr,100);
    int i=0;
    while(arr[i]!='\0'){
        if(arr[i]!=' '&& arr[i]<='a'&& arr[i]>='z')
        arr[i]=arr[i]-'a'+'A';
        i++;
    }
    cout<<arr;
}