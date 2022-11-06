#include<iostream>
using namespace std ;
int Sumarr(int arr[], int size){
    int sum = 0;
    for (int i = 0; i<size ; i++){
        sum = sum + arr[i] ;
    }
    cout << "Sum of all elements of Array is " << sum;
    return sum;
}

int main(){

    int size;
    //taking the size as input from the user
    cout << "Enter the no of elements ";
    cin >> size ;

    int arr[100];
    //input the element from the user
    for (int i = 0; i<size ; i++){
        cin >> arr[i];

    }
    Sumarr(arr,size);
    return 0;
}