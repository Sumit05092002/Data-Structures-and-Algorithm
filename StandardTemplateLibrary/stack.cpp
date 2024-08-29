#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<int>st;
    //insertion in stack
    st.push(10);
    st.push(20);
    st.push(30);
    //printing the size of the stack
    cout<<st.size()<<endl;
    //deletion in stack
    st.pop();
    st.pop();
    st.pop();
    //accessing the topmost element in stack
    cout<<st.top();

    //implementing the swap function
    stack<int>first;
    stack<int>second;
    first.push(10);
    first.push(20);
    second.push(100);
    second.push(200);
    first.swap(second);

}