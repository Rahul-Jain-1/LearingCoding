


#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(int arr[], int n) {
        int s = 0;
        int e = n - 1;
        int mid = s + (e-s)/2;
        while (s<e){
            if (arr[mid] < arr[mid+1]){
                 s = mid + 1;
            }
            else {
                e = mid;
            }
            mid = s + (e-s)/2;
        }
        return s;
        
    }
    int main(){
        //n -> size of array
        int n;
         cout << "Enter the no of elements in array is";
        cin >> n;
        int *arr = new int(n);
        cout << endl << "Enter the  array " ;
        for(int i =0;i<n;i++){
            cin >> arr[i] ;
        }
        cout << endl << "Peak Index in array ";
        peakIndexInMountainArray(arr,n);
        return 0;
    }
};






