#include <iostream>
using namespace std;

int findduplicate(int arr[], int size){
    int ans = 0 ;
    for (int i = 0 ; i<size; i++){
        ans = ans ^ arr[i];
    }
    for (int i = 1 ; i<size; i++){
        ans = ans ^ i ;
    }
    return ans;
}

int main(){
    int size;
    cin >> size;

    int arr[100];
    cout << "Enter the elements ";
    for (int i = 0; i<size ; i++){
        cin >> arr[i];
    }
    cout <<"Duplicate element is " << findduplicate(arr,size);
    return 0;

}