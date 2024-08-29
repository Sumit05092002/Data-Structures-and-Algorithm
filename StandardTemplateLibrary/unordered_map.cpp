#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
    //declaration of unordered_map
    unordered_map<int,int>table;//storing roll no as key and desk no as value
    //insertion in unordered_map
    //square brackets hold the key no
    //Every key in unordered_map should be unique
    table[1]=53;
    table[2]=54;
    table[3]=55;
    table[2]=57;//in this case the value key=2 will be updated to 57 as keys must be unique so the existing entry of key=2 will get updated instead of creation of a new entry named key=2
    unordered_map<int,int>::iterator it=table.begin();
    while(it!=table.end()){
        int key=it->first;
        int value=it->second;
        cout<<"key: "<<key<<"value: "<<value<<endl;
        it++;
    }
    //searching the elements in map
    //searching the key 2 in the table whether key 2 is present in the table or not and if key 2 is present then printing the specific entry for the key 2 that is present in the table
    if(table.find(2)!=table.end()){
        cout<<table[2]<<endl;
    }else{
        cout<<"Key not present in the map"<<endl;
    }
    //deletion in unordered_map
    table.erase(2);
    unordered_map<int,int>::iterator it1=table.begin();
    while(it1!=table.end()){
        int key=it1->first;
        int value=it1->second;
        cout<<"key: "<<key<<"value: "<<value<<endl;
        it1++;
    }

    //searching the key 2 after deletion from table
    if(table.find(2)!=table.end()){
        cout<<table[2]<<endl;
    }else{
        cout<<"Key not present in the map"<<endl;
    }

    
}