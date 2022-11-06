#include<iostream>
using namespace std;



bool binarySearch(int *arr, int s , int e, int k){

    //base case
    // 1. element not found
    if ( s> e){
        return false;
    }
    int mid = s + (e-s)/2;
    // 2. element found
    if(arr[mid] == k){
        return true;
    }
    if (arr[mid] < k){
        //right waala part
        return binarySearch(arr,mid+1,e,k);
    }
    else{
        //left wala part
        return binarySearch(arr,s,mid-1,k);
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
    cout << endl << "Enter the element do you want to search ";
    int key;
    cin >> key ;
    cout << endl;
    bool ans = binarySearch(arr,0,size,key);
    if(ans){
        cout << "Element is found ." << endl;
    }
    else{
        cout << "Element is not found . "<< endl;
    }
    return 0;

}