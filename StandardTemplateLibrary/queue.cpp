#include <iostream>
#include <queue>
using namespace std;
int main(){
    queue<int>q;
    //insertion in queue
    q.push(10);
    q.push(20);
    q.push(30);
    //10,20,30
    //checking the size of the queue
    cout<<q.size()<<endl;
    //deletion in queue
    q.pop();
    //20,30
    q.pop();
    //30
    q.pop();
    //queue becomes empty
    //checking whether queue is empty or not
    cout<<q.empty()<<endl;
    //accessing the first element of the queue
    cout<<q.front()<<endl;
    //accessing the last element of the queue
    cout<<q.back()<<endl;
    //swaping the contents of two queues
    queue<int>first;
    queue<int>second;
    first.push(10);
    first.push(20);
    second.push(100);
    second.push(200);
    first.swap(second);
}