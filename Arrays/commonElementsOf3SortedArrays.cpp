#include <iostream>
using namespace std;
void common(int arr[],int arr1[],int arr2[]){
    int i=0;
    int j=0;
    int k=0;
    int ans[100];
    int count=0;
    while(i<5&&j<4&&k<5){
        if(arr[i]==arr1[j]&&arr1[j]==arr2[k]){
            cout<<"hello"<<endl;
            ans[count]=arr[i];
            count++;
            i++;
            j++;
            k++;
        }else if(arr[i]<arr1[j]){
            i++;
        }else if(arr1[j]<arr2[k]){
            j++;
        }else{
            k++;
        }
    }
    cout<<count<<endl;
    for(int i=0;i<count;i++){
        cout<<ans[i]<<" ";
    }
}
int main(){
    int arr[]={30,35,40,50,60};
    int arr1[]={20,50,60,70};
    int arr2[]={10,20,30,40,50};
    common(arr,arr1,arr2);

}