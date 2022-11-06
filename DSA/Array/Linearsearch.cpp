#include<iostream>
using namespace std;

bool linearsearch(int arr[], int size, int key){
    for (int i = 0; i<size ;i++) {
        if (arr[i] == key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int size;
    cin >> size ;
    cout << endl;

    int arr[100];
    cout << "Enter the Elements ";
    for (int i = 0; i<size ; i++){
        cin >> arr[i];
    }

    //printing the array 
    cout <<"Printing the Array ";
    for (int i = 0; i<size ;i++){
        cout << arr[i] << " ";
    }

    int key;
    cout << endl << "Enter the elements to search for ";
    cin >> key;

    bool found = linearsearch(arr, size, key);
    if (found){
        cout << "Key is Present " << endl;
    }
    else{
        cout << "Key is Absent " << endl;
    }
    return 0;
}