#include<iostream>
using namespace std;

int main(){
    int i = 5;
    int* ptr1 =  &i;
    int** ptr2 = &ptr1;
    //ptr1 wale block mein kya padha hai 
    cout << "printing p block " << ptr1 << endl;
    //address of ptr1 block
    //cout << "Address of p block " << &ptr1 << endl;

    //value at ptr2
    cout << "value at ptr2 " << *ptr2 << endl;

    //ways to print value of i 
    cout << ".............................................." << endl;
    cout << "Value of i is " << i << endl;

    //ptr1 having the address of i block and *ptr1 print the value at that address
    cout << "Value of i using ptr1 is " << *ptr1 <<endl;

    //ptr2 having the address of ptr1 block and *ptr2 print the value at that address
    //and **ptr2 print the value at that (*ptr2)
    cout << "Value of i using ptr2 is " << **ptr2 <<endl;


    return 0;
}