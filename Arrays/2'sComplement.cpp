#include <iostream>
#include <vector>
using namespace std;
int main(){
    //declaring the vector binary
    vector<int> binary={0,0,0,0};
    //getting the 1's complement
    for(int i=0;i<binary.size();i++){
        if(binary[i]==1){
            binary[i]=0;
        }else{
            binary[i]=1;
        }
    }
    //getting the 2's complement
    vector<int> ans(binary.size()+1,0);
    int carry=1;
    for(int i=binary.size()-1;i>=0;i--){
        int sum=binary[i]+carry;
        int bit=sum%2;
        ans[i+1]=bit;
        carry=sum/2;
    }
    if(carry==1){
        ans[0]=carry;
    }else{
        ans[0]=0;
    }

    //displaying the final ans;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}