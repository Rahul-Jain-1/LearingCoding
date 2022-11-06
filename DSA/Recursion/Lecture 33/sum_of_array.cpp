#include<iostream>
using namespace std;

void print(int *arr,int size,int sum){
    cout << "Size of an array is " << size << endl;
    for(int i = 0; i < size ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << sum << endl;
}

int getsum(int *arr, int size){

    print(arr,size,0);

    //base case
    if(size == 0 ){
        return 0;
    }
    if(size == 1){
        return arr[0];
    }
    int remaining_part = getsum(arr+1,size-1);
    int sum =  arr[0] + remaining_part;
    print(arr,size,sum);
    return sum;
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
    int sum = getsum(arr,size);
    cout <<"Sum of an array is " << sum;
    return 0;

}