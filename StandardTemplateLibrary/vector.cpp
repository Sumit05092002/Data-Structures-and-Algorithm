#include <iostream>
#include <vector>
using namespace std;
int main(){
    //creation of vector
    vector<int>marks;
    //creation of vector with some particular size
    vector<int>miles(10);
    //initialisation of vector with some particular value
    vector<int>v(15,0);
    //miles.begin() is a pointer which points to the first index of vector
    //miles.end() is a pointer which points to the last index of the vector
    int n;
    cin>>n;
    //insertion in vector
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        marks.push_back(element);
    }
    for(int i=0;i<n;i++){
        cout<<marks[i]<<" ";
    }
    cout<<endl;

    //iterating on the vector using an iterator

    vector<int>::iterator it=marks.begin();
    while(it<=marks.end()){
        cout<<*it<<" ";
        it++;
    }

    //checking the size of the vector
    cout<<marks.size()<<endl;

    //Accessing the first element of the vector
    cout<<marks.front()<<endl;

    //Accessing the last element of the vector
    cout<<marks.back()<<endl;

    //removing the elements of the vector
    for(int i=marks.size()-1;i>=0;i--){
        marks.pop_back();
    }

    for(int i=0;i<marks.size();i++){
        cout<<marks[i]<<" ";
    }
    cout<<endl;

    //checking if the vector is empty or not
    cout<<marks.empty()<<endl;

    //using at operator to access the values of vector
    marks.push_back(50);
    marks.push_back(60);
    cout<<marks.at(0)<<endl;

    //lets say that we have created a vector and not defined its size but we can define its minimum capacity that is at least how many blocks it should hold
    vector<int>a;
    a.reserve(10);
    cout<<a.capacity()<<endl;

    //using clear operator:clear operator will delete the entire entries of the vector and the size of the vector will become 0
    marks.clear();
    for(int i=0;i<marks.size();i++){
        cout<<marks[i]<<" ";
    }
    cout<<endl;

    //use of insert operator
    marks.push_back(10);
    marks.push_back(20);
    marks.insert(marks.begin(),50);

    //use of erase operator
    marks.erase(marks.begin(),marks.end());
    cout<<marks.size()<<endl;

    //use of swap operator
    vector<int> x;
    x.push_back(10);
    x.push_back(20);
    x.push_back(30);
    x.push_back(40);

    vector<int>y;
    y.push_back(100);
    y.push_back(200);
    y.push_back(300);
    y.push_back(400);

    //all the values of y will come in x and all the values of x will move in y
    x.swap(y);
    for(int i:x){
        cout<<i<<endl;
    }


    //creating 2d array through vector
    vector<vector<int>> arr(4,vector<int>(4,0));
    int totalRows=arr.size();
    int totalColumns=arr[0].size();



}
