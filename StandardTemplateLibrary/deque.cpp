#include <iostream>
#include<queue>
using namespace std;
int main(){
    deque<int>dq;
    //insertion in deque
    dq.push_back(10);
    dq.push_back(20);
    dq.push_front(30);
    dq.push_front(40);

    //deletion in deque
    dq.pop_back();
    dq.pop_front();

    //checking the size of deque
    cout<<dq.size()<<endl;

    //accessing the front and back elements of the deque
    cout<<dq.front()<<endl;
    cout<<dq.back()<<endl;

    //checking if the deque is empty or not
    cout<<dq.empty()<<endl;

    //iterating on deque
    deque<int>::iterator it=dq.begin();
    while(it!=dq.end()){
        cout<<*it<<endl;
        it++;
    }

    //accessing the elements of the deque
    cout<<dq[0]<<endl;
    //can also use at operator
    cout<<dq.at(0)<<endl;

    //clearing the deque
    dq.clear();
    cout<<dq.size()<<endl;

}