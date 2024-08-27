#include <iostream>
using namespace std;

int main(){
    cout<<"Enter your budget"<<endl;
    int budget;
    cin>>budget;
    if(budget>200000){
        cout<<"You can buy a scorpio"<<endl;
    }else{
        cout<<"You cannot buy a scorpio"<<endl;
    }
    cout<<"Enter the grade"<<endl;
    char grade;
    cin>>grade;
    switch(grade){
        case 'A':
        cout<<"Grade A"<<endl;
        break;
        case 'B':
        cout<<"Grade B"<<endl;
        break;
        case 'C':
        cout<<"Grade C"<<endl;
        break;
        default:
        cout<<"Invalid grade"<<endl;


    }
        int a=10;
        (a>18)?cout<<"can vote":cout<<"cannot vote"<<endl;
}