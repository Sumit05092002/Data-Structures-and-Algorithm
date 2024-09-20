#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
int main(){
    vector<int>no;
    cout<<"Enter the size of the array"<<endl;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        no.push_back(data);
    }

    unordered_map<int,int>freq;

    for(int i=0;i<n;i++){
        int number=no[i];
        freq[number]++;
    }

    unordered_map<int,int>::iterator it=freq.begin();
    while(it!=freq.end()){
        if(it->second==1){
            cout<<it->first;
        }
        it++;
    }
}