#include<iostream>
using namespace std;

bool linearSearch(int *arr, int size, int key){
    //bae case
    if (size == 0){
        return false;
    }
    if (arr[0]==key){
        return true;
    }
    else{
        int remaining_part = linearSearch(arr+1,size-1,key);

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
    cout << endl << "Enter the element do you want to search ";
    int key;
    cin >> key ;
    cout << endl;
    bool ans = linearSearch(arr,size,key);
    if(ans){
        cout << "Element is found ." << endl;
    }
    else{
        cout << "Element is not found . "<< endl;
    }
    return 0;

}