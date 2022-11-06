#include<iostream>
using namespace std;



void sortZeroAndOne(int arr[],int n){
    int i = 0,k=0;
    int j = n-1;
    while(i<=j){
        if(arr[i]==0){
            swap(arr[i],arr[k]);
            k++;
        }
        else if (arr[i]==2){
            swap(arr[i],arr[j]);
            i--;
            j--;
        }
        i++;
    }

}

int main(){
    int size;
    cout << "Enter the size of an array ";
    cin >> size;
    int arr[100];
    cout << "Enter the elements of an array ";
    for(int i =0;i<size;i++){
        cin >> arr[i];
    }
    sortZeroAndOne(arr,size);

    cout << endl << "Elements after sorting 0, 1 and 2 is : ";
    for(int i = 0;i<size;i++){
        cout << arr[i] << " ";
    }
    return 0;

}