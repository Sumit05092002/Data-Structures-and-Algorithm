#include <iostream>
#include <cmath>
using namespace std;
int main(){
    cout<<"Enter the no"<<endl;
    int no;
    cin>>no;
    cout<<"Enter the no of precision"<<endl;
    int n;
    cin>>n;
    int start=0;
    int end=no;
    double ans=-1.0;
    while(start<=end){
        int mid=start+(end-start)/2;
        int square=mid*mid;
        if(square==no){
            cout<<mid<<endl;
            break;
        }else if(square<no){
            ans=mid;
            start=mid+1;
        }else{
            end=mid-1;
        }
    }

    cout<<ans<<endl;
    double precision=-1.0;
    for(int i=1;i<=n;i++){
    int s=1;
    int e=9;
    cout<<"ans:"<<ans<<endl;
    while(s<=e){
        float mid=s+(e-s)/2;
        cout<<"mid:"<<mid<<endl;
        int divider=pow(10,i);
        if(i%2==0){
            divider=divider+1;
        }
        cout<<divider<<endl;
        float modifiedAns=ans+(mid/divider);
        cout<<modifiedAns<<endl;
        if(modifiedAns*modifiedAns==no){
            cout<<modifiedAns;
        }else if(modifiedAns*modifiedAns<no){
            precision=modifiedAns;
            s=mid+1;
        }else{
            e=mid-1;
        }
    }
    ans=precision;
    cout<<"answer changed"<<endl;
    }
    cout<<precision<<endl;
}