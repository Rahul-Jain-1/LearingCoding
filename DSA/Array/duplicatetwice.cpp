// find the duplicate in an arraay 
// for ex = arr = [1,2,2,1,3,4,5] n = 7 
// we have to print integer which appear twice i.e. 1 and 2

#include<iostream>
using namespace std;

int findduplicate(int arr[], int size){
    int ans = 0 ;
    int arr2[100];
    for (int i = 0 ; i<size; i++){
        ans = ans ^ arr[i];
        
    }
    for (int i = 1 ; i<size; i++){
        ans = ans ^ i ;
    
    }
    for (int i = 0 ; i < size ; i++){
        cout << arr2[ans];
    }

    return arr2[100];
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
