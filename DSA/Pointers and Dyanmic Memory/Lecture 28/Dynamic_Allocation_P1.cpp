#include<iostream>
using namespace std;

int getsum(int *arr, int n){ //as *arr is same as arr[]

    int sum = 0;
    for(int i = 0; i <n ; i++){
        sum= sum + arr[i];
    }
    return sum;
}
int main(){

    int n ;
    cout << "Enter the size of an array ";
    cin >> n;

    //creating array of variable size using heap allocation
    int* arr = new int[n]; // new is keyboard used to allocate heap memory
    
    cout << endl << "Enter the elements of array " ;
    for(int i = 0; i<n;i++){
        cin >> arr[i];
    }
    cout << endl << "Sum of the array is " << getsum(arr,n); ;
    

    return 0;
}