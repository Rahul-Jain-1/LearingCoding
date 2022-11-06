#include<iostream>
using namespace std;

void sortArray(int *arr, int n){

    //bubbe sort algorithm
    //base case - array is already sorted
    if (n == 0 || n ==1){
        return ;
    }
    //1 case solve kar liya - largest element ko end mein rakh degye
    for(int i = 0; i<n ; i++){
        if (arr[i] >arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    //recursive call
    sortArray(arr,n-1);

}

int main() {
    int arr[5] = {2,5,1,6,9};
    sortArray(arr,5);
    cout << "Sorted array is " << endl;
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    return 0;

}