#include<iostream>
using namespace std;

void print(int *p){
    cout << *p << endl;
}
void update(int *p){
   //p = p + 1;
    //cout << p << endl;
    *p = *p + 1;

}
//int arr[]  is same as int *arr bcoz
// arr[i] = *(arr+i) 
//agr hum i ko kuch nahin daalte then
//arr[] = *arr
int getsum1(int *arr,int n){
    // n is size of an array 
    cout << "Size of array is " << sizeof(arr) << endl;
    int sum=0;
    for (int i = 0; i<n;i++){
        sum+=arr[i];
    }
    return sum;
}   

int main(){
    /*
    int v = 5;
    int *p = &v;
    print(p);
    cout << p << endl;
    cout << "before " << *p << endl;
    update(p);
    cout << "after " << *p << endl;
    */

    int arr[5] = {1,2,3,4,5};
    //cout << getsum1(arr,5);
    //benefit of passing array in function treated as pointer
    // is we can select a range of num jiska hume sum chahiye
    cout << endl<< getsum1(arr+2,3);//got the sum from 2 to 5th index of array

    return 0;
}