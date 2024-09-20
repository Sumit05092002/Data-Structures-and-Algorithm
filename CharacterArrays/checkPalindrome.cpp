#include <iostream>
using namespace std;
int main(){
    char arr[100];
    cout<<"Enter your value"<<endl;
    cin.getline(arr,100);
    int count=0;
    int i=0;
    while(arr[i]!='\0'){
        count++;
        i++;
    }

    int start=0;
    int end=count-1;
    int swap=0;
    while(start<=end){
        if(arr[start]!=arr[end]){
           swap++;
        }
        start++;
        end--;
    }
    if(swap>0){
        cout<<"Not a palindrome"<<endl;
    }else{
        cout<<"palindrome"<<endl;
    }
}