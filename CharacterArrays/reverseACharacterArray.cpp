#include <iostream>
using namespace std;
int main(){
    char arr[100];
    cout<<"Enter the value"<<endl;
    cin.getline(arr,100);
    int count=0;
    int i=0;
    while(arr[i]!='\0'){
        count++;
        i++;
    }
    int start=0;
    int end=count-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    cout<<arr;
}
