#include<iostream>
using namespace std;

int getMax(int arr[], int size){

    int maxi = INT_MIN;
    for (int i = 0 ; i<size ; i++){
        maxi = max(maxi,arr[i]);
        //if (arr[i] > max){
        //    max = arr[i];
        //}
    }
    //returning the maximum value 
    return maxi;
}
int getMin(int arr[], int size){
    int mini = INT_MAX;
    for (int i = 0 ; i<size ;i++){
        mini = min(mini,arr[i]);
        //if (arr[i] < min){
        //    min = arr[i];
        //}
    }
    return mini;
}

int main(){

    int size;
    cin >> size;
    
    int num[100];
    //taking input in an array 
    for (int i = 0; i<size ; i++){
        cin >> num[i] ;
    }
    cout << "Maximum value of array is "<<getMax(num,size)<<endl;
    cout << "Minimum value of array is "<<getMin(num,size);


    return 0;
}