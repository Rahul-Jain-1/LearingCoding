#include<iostream>
using namespace std;

int firstocc(int arr[], int n , int key){
    int s = 0;
    int e = n - 1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while (s<=e)
    {
        if (arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid]){
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
    
}
int lastocc(int arr[], int n, int key ){
    int s = 0;
    int e = n - 1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while (s<=e){
        if (arr[mid]==key){
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid]){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){
    int size;
    cout << "Enter the size of an array  ";
    cin >> size;
    int arr[size];
    cout << endl << "Enter the elements of an array ";
    for(int i = 0; i <size;i++){
        cin >> arr[i];
    }
    //given that array is sorted (binary search work on sorted array )
    int key ;
    cout << endl << "Enter the element do you want to search ";
    cin >> key;
    
    int first = firstocc(arr,size,key);
    int last = lastocc(arr,size,key);
    int total_no_of_occ = last - first + 1;
    cout << " Total No of occurence " << total_no_of_occ << endl;
    return 0;
}