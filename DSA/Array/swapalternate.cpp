#include<iostream>
using namespace std;

void swapalternate(int arr[], int size){
    for (int i=0 ; i<size ; i+=2){
        if (i+1 < size){
            swap(arr[i],arr[i+1]);
        }
    }

}

int main(){
    int size;
    cin >> size;

    int arr[100];
    cout << "Enter the elements ";
    for (int i = 0 ; i<size ; i++){
        cin >> arr[i];
    }

    cout << endl << "Printing the array ";
    for (int i = 0; i<size ; i++){
        cout << arr[i] << " ";
    }

    swapalternate(arr,size);

    //print the array after alternating array
    cout << endl << "Printing the array after alternating swaping ";
    for (int i = 0; i<size ; i++){
        cout << arr[i] << " ";
    }    
    return 0;
}