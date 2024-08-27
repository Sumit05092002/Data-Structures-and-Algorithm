#include <iostream>
using namespace std;
#include <cmath>
int main()
{
    cout << "Enter your number" << endl;
    int no;
    cin >> no;
    decimalToBinary(no);
    // BinaryToDecimal
    int binaryNo;
    cin >> binaryNo;
    binaryToDecimal(binaryNo);
    return 0;
}

void decimalToBinary(int no)
{
    int sum = 0;
    int count = 0;
    // method 1
    //  while(no>0){
    //      int bit=no%2;
    //      sum=sum+bit*pow(10,count++);
    //      cout<<sum<<endl;
    //      no=no/2;
    //  }
    //  cout<<endl;
    //  cout<<sum<<endl;

    // method 2

    while (no > 0)
    {
        int bit = no & 1;
        sum = bit * pow(10, count++) + sum;
        no = no >> 1;
    }
    cout << sum << endl;
}

void binaryToDecimal(int binaryNo)
{
    int decimal = 0;
    int i = 0;
    while (binaryNo > 0)
    {
        int dig = binaryNo & 1;
        decimal = decimal + dig * pow(2, i++);
        binaryNo = binaryNo / 10;
    }
    cout << decimal;
}