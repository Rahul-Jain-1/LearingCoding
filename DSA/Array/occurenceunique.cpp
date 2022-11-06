//leetcode problem
#include<iostream>
using namespace std;

bool uniqueoccurence(int arr[], int size){
    int c = 0;
    int start = arr[0];
    for (int i = 0 ; i<size ; i++){
        if (start == arr[i]){
            c = c + 1;
        }
    }


}

int main(){
    int size;
    cin >> size;

    int arr[100];
    cout << "Enter the elements ";
    for (int i = 0; i<size ; i++){
        cin >> arr[i];
    }

    

}