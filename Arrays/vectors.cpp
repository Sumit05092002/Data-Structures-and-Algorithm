#include <iostream>
#include <vector>
using namespace std;
void print(vector<int> numbers)
{
    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;
}
void alterVector(vector<int> numbers)
{
    int i = 0;
    while (i < 10)
    {
        numbers.push_back(80);
        i++;
    }
    print(numbers);
}


int main()
{
    vector<int> numbers;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int data;
        cin >> data;
        numbers.push_back(data);
    }
    print(numbers);
    alterVector(numbers);
    numbers.clear();
    print(numbers);
}