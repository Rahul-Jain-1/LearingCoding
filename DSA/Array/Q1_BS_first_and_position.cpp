//codesudio problem 
//code link :: https://www.codingninjas.com/codestudio/problems/first-and-last-position-of-an-element-in-sorted-array_1082549?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2
#include<iostream>
using namespace std;

int firstocc(int arr[], int n, int key){
    int s = 0;
    int e = n - 1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while (s<=e){
        if (arr[mid] ==  key){
            ans = mid;
            e = mid - 1; //left wale part ko select karne ke liye
        }
        else if (key > arr[mid]){
            s = mid + 1;
        }
        else {
            e =  mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans ;
}

int lastocc(int arr[], int n, int key ) {
    int s = 0;
    int e = n - 1 ;
    int mid = s + (e-s)/2;
    int ans = -1;
    while (s <= e){
        if (arr[mid] == key){
            ans = mid;
            s = mid + 1;  //right waale part ko select karne ke liye
        }
        else if (key > arr[mid]){
            s = mid + 1;
        }
        else {
            e = mid - 1 ;
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
    int firstindex = firstocc(arr,size,key);
    int lastindex = lastocc(arr,size,key);
    cout << "First Occurence is " << firstindex << endl;
    cout << " Last occurence is " << lastindex << endl;

    return 0;

}