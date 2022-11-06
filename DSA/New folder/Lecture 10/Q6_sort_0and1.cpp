#include<iostream>
using namespace std;



void sortZeroAndOne(int arr[],int n){
    int i = 0;
    int j = n - 1;
    while(i<j){
        if((arr[i]==0)&&(i<j)){
            i++;
        }
        if((arr[j]==1)&&(i<j)){
            j--;
        }
        if ((arr[i]==1 && arr[j]==0)&&(i<j)){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }

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

    cout << endl << "Elements after sorting 0 And 1 is : ";
    for(int i = 0;i<size;i++){
        cout << arr[i] << " ";
    }
    return 0;

}