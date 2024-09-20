#include <iostream>
using namespace std;
void replacement(char arr[],char replace,char replaced){
    int i=0;
    while(arr[i]!='\0'){
        if(arr[i]==replaced){
            arr[i]=replace;
        }
        i++;
    }
    cout<<arr;
}
int main(){
    char arr[100];
    cout<<"Enter your value"<<endl;
    cin.getline(arr,100);
    cout<<"Enter the replacement"<<endl;
    char replace;
    cin>>replace;
    cout<<"Enter the character to be replaced"<<endl;
    char replaced;
    cin>>replaced;
    replacement(arr,replace,replaced);
}