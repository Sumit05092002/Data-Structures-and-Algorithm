#include <iostream>
using namespace std;
int main(){
    char arr[100];
    cout<<"Enter the value"<<endl;
    cin.getline(arr,100);
    int i=0;
    while(arr[i]!='\0'){
        if(arr[i]!=' ')
        arr[i]=arr[i]-'A'+'a';
        i++;
    }
    cout<<arr;
}