#include<iostream>
using namespace std;

void print(int *arr,int n){
    for (int i =0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortArray(int *arr, int i,int n){
    print(arr,n);
    //base case - array is already sorted
    if (i == n ){
        return ;
    }

    for(int i = 0 ; i <n ;i++){
        int minIndex = i;
        if (arr[i+1] < arr[minIndex]){
            minIndex = i + 1;
        }
        swap(arr[minIndex],arr[i]);
    }
    sortArray(arr,i+1,n);
}

int main(){
    int arr[5] = {64,25,12,22,11};
    sortArray(arr,0,5);
    cout << "Sorted array is " << endl;
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    return 0;
}