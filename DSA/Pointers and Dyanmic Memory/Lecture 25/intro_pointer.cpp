#include<iostream>
using namespace std;
int main(){
    int num = 5;
    cout << num << endl ;
    // Address operator - &
    cout << "Address of num is " << &num << endl ;
    int *ptr = & num;
    cout << " value is "<< *ptr << endl;
    // if * is not used then it will print value of ptr i.e. address
    cout << "Address is " <<ptr;
    double d = 8.3;
    double *p = &d;
    cout << endl << "value of p is "<< *p;
    cout << endl << "Address of p is " << p << endl;

    cout << endl << "Size of integer is " << sizeof(num);
    cout << endl << "Size of pointer is " << sizeof(ptr);
    // size of pointer is 8 because it store the address of num
    cout << endl << "Size of double is " << sizeof(d);
    cout << endl << "Size of pointer of double is " << sizeof(p);
    //always the size of pointer is 8 beacuse pointer is always stores the address o
    
    return 0;
}