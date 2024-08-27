#include <iostream>
using namespace std;
int main(){

    //impplicit or automatic typecasting
    int a=5;
    float b=10.5;
    float result=a+b;
    cout<<result<<endl;

    //explicit or manual typecasting

    int x=20;
    float y=10.5;
    float res=x+int(y);
    cout<<res<<endl;

}