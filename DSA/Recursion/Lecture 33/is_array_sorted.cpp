#include<iostream>
using namespace std;

void print(int *arr,int size){
    cout << "Size of an array is " << size << endl;
    for(int i = 0; i < size ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


bool issorted(int *arr, int size){
    //remaining array and size at each stage of recursion
    //for better understanding. 
    print(arr,size);
    //base case
    if(size == 0 || size == 1){
        return 1;
    }
    if (arr[0] > arr[1]){
        return false;

    }
    else{
        //recursive relation
        bool remaining_part = issorted(arr + 1, size - 1);
        return remaining_part;
    }
}

int main(){

    int size;
    cout << "Enter the size of an array ";
    cin >> size;
    //stores it dynamically heap memory
    int *arr = new int[size];
    //taking input 
    for(int i = 0; i < size ; i++){
        cin >> arr[i];
    }
    bool ans = issorted(arr,size);
    if(ans){
        cout << "Array is sorted. " << endl;
    }
    else{
        cout << "Array is not sorted. " << endl;
    }
    return 0;

}