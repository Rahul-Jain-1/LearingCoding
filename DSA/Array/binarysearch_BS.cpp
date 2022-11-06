#include<iostream>
using namespace std;

int binarysearch(int arr[], int n, int key){
    int s = 0;
    int e = n - 1;

    int mid = s + (e-s)/2;
    //mid = (s+e)/2 if size of s and e i.e. int is 2^31 -1 
    //if we find mid  then s + e will come out from the range of int
    // that's why we are using mid = s + (e-s)/2
    while (s<=e){
        if (arr[mid] == key){
            return mid;
        }
        if (key > arr[mid]){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return -1;

}

int main(){
    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {3,8,11,14,16};
    int key;
    cin >> key;
    int evenindex = binarysearch(even,6,key);
    cout << "Even Index is " << evenindex << endl;
    int oddindex = binarysearch(odd,5,key);
    cout << "Odd Index is " << oddindex << endl;
    return 0;

}