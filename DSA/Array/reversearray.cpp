#include<iostream>
using namespace std;

int reverseArr(int arr[], int size){
    int start = 0;
    int end = size - 1;
    while (start <=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    return 0;
}

int main(){
    int size;
    cin >> size;

    int arr[100];
    cout <<"Enter the elements ";
    for (int i = 0; i<size ; i++){
        cin >> arr[i];
    }

    //printing the array
    cout <<endl <<"Printing the Array ";
    for (int i = 0; i<size ; i++){
        cout << arr[i] << " ";
    }

    reverseArr(arr,size);
    //printing reversed array
    cout <<endl <<"Printing the Reversed Array ";
    for (int i = 0; i<size ; i++){
        cout << arr[i] << " ";
    }

    return 0;
}