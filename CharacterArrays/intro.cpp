#include <iostream>
using namespace std;
int main(){
    //declaration of character array
    char arr[100];
    //In the character array we get an edge  that we don't need to use loop to take input in the entire array. We can take input the value without using a loop in a single chance
    //Same goes for printing the values of character array
    cout<<"ENTER YOUR NAME"<<endl;
    cin>>arr;
    cout<<arr<<endl;

    //We can also use the same old tradional method koi issue nahi hai
    // for(int i=0;i<100;i++){
    //     cin>>arr[i];
    // }

    //we can use the same old method for printing the entire array
    // for(int i=0;i<100;i++){
    //     cout<<arr[i];
    // }

    //The above methods are just an additional functionality
    //If we want to access the different characters one by one then we can use the same old method
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
    cout<<arr[3]<<endl;
    cout<<arr[4]<<endl;
    cout<<arr[5]<<endl;
    //THE LAST CHARACTER IS NULL CHARACTER AND IT MARKS THE TERMINATION OF CHARACTER ARRAY KI AB ISKE AAGE KOI VALUE NAHI HAI EVEN THOUGH ARRAY KA LENGTH 100 HAI BUT CHARACTER 5 HI HAI AUR 6TH CHARACTER NULL HAI JO KI TERMAINATION MARK KARTA HAI
    //PROOF: ASCII VALUE NULL CHARACTER KA 0 HOTA HAI
    for(int i=0;i<=5;i++){
        cout<<int(arr[i])<<endl;
    }
    //ISME GARBAGE VALUE PADA HAI
    cout<<(int)arr[6]<<endl;
    //SO IN SHORT HUM BOL SAKTE HAI AT THE END OF ALL VALUES IN CHARACTER ARRAY NULL PARA REHTA HAI
    //IMPORTANT POINT:JAB BHI CHARACTER ARRAY KA VALUE CIN K THROUGH INPUT LETE HAI TOH KUCH DELIMETERS (YANI KI KIS INPUT K BAAD VALUE INPUT NAHI LIYA JAYEGA) HOTA HAI JAISE ENTER TAB YA PHIR SPACE K BAAD JO BHI VALUE DETA HAI WO INPUT NAHI LIYA JAATA HAI
    //EXAMPLE

    char arr2[100];
    //INPUT:SUMIT MISHRA
    cin>>arr2;
    cout<<arr2;

    //USING THE GETlINE FUNCTION
    char arr3[100];
    cin.getline(arr3,100);
    cout<<arr3;
    //USING THE DELIMETER IN GETLINE FUNCTION
    cin.getline(arr3,100,'\t');
}