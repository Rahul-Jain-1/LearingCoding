#include<iostream>
using namespace std;
int main(){
    /*
    int arr[10]={21,27,32,45};
    cout << "Address at first memory block " << &arr[0] << endl;
    // &arr[0] and arr both are sme both give the address of 1st array block
    cout << "Address at first memory block " << arr << endl;
    //*arr print the value at arr memory block 
    cout << "value at *arr " << *arr << endl;
    // increment the value *arr by 1
    cout << "increment the value *arr by 1  is "<< *arr + 1 << endl;
    //2st element of array is 
    cout<< "1st element of array is " << *(arr+1) << endl;
    //3rd element of array is 
    cout << "3rd element of array is  " << arr[2] << endl;;
    cout << "3rd element of array is  " << *(arr+2) << endl;

    // i[arr] = *(i+arr) and arr[i] = *(arr+1) both statement give same result
    int i = 3;
    cout << "Value at 3rd index  "<< i[arr] << endl;
 
    //size
    int temp[10] = {2,3};
    cout << "size of array is " << sizeof(temp)<<endl;
    cout <<"size of *temp is "<< sizeof(*temp)<<endl;//call the *temp = 2 and then print its size
    int *ptr = &temp[0];

    cout << "Size of pointer is " << sizeof(ptr)<<endl;
    cout << "Size of address of  pointer is " << sizeof(&ptr)<<endl;//size of adress of pointer
    
    //address
    int a [20] = {2,3,5,6,8};
    cout << "Adress of 0th index block is "<< &a[0]<<endl;
    cout << " Adress of 0th index block is " << &a << endl;
    cout << " Adress of 0th index block is " << a << endl;

    int *p =&a[0];
    cout << "Adress of p block is "<< p<<endl;
    cout << " Value of p block is " << *p << endl;
    //&p i.e. address of p block that must be different from address of &a[0]
    cout << " Adress of p block is " << &p << endl;
*/

    //Symbol table 
    int arr[10] ={0};
    //given error

    //arr = arr+1;
    int *ptr = &arr[0];
    cout << ptr << endl ;
    ptr = ptr + 1 ;
    cout << ptr ;

    return 0;
}