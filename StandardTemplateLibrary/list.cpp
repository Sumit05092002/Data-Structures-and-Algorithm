#include <iostream>
#include <list>
using namespace std;
int main(){
    //creation of linked list
    list<int>myList;
    //insertion in linked list
    //using push_back operator to push_back the elements in linked list
    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);
    //10->20->30
    //using push_front operator to insert in linked list
    myList.push_front(40);
    myList.push_front(50);
     //50->40->10->20->30
    //deletion in linked list
    myList.pop_back();
    //50->40->10->20
    myList.pop_front();
    //40->10->20

    //checking the size of the linkedlist
    cout<<myList.size()<<endl;

    //removing all the elements from the linkedlist
    myList.clear();
    cout<<myList.size()<<endl;

    //checking if the linkedlist is empty or not
    cout<<myList.empty()<<endl;

    //fetching the first element of linkedlist
    cout<<myList.front()<<endl;

    //fetching the last element of the linkedlist
    cout<<myList.back()<<endl;


    //traversing on linked list using iterators
    list<int>::iterator it=myList.begin();

    while(it!=myList.end()){
        cout<<*it<<" ";
        it++;
    }

    //using remove operator :remove operator removes all the elements from the linkedlist that are equal to the specified value
    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);
    myList.push_back(10);

    //using remove operator
    myList.remove(10);

    list<int>::iterator it2=myList.begin();
    while(it2!=myList.end()){
        cout<<*it2<<" ";
        it2++;
    }

    //using swap function
    list<int>myList2;
    myList2.push_back(10);
    myList2.push_back(20);
    myList2.push_back(30);
    myList2.push_back(40);
    myList.swap(myList2);

    //myList:10->20->30->40
    //using insert function
    myList.insert(myList.begin(),100);
    //100->10->20->30->40



}