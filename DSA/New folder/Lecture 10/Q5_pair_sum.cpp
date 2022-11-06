#include<iostream>
using namespace std;

int pairsum(int arr[],int size,int target){
    cout << "Pairs is  "<< endl ;
    for(int i = 0;i<size;i++){
        for(int j =i+1;j<size;j++){
            if((arr[i]+arr[j])==target){
                cout << arr[i] << " " << arr[j];

            }
        }
        cout << endl;
    }
    return 1;
}

int main(){
    int size;
    cout << "Enter the size of an array ";
    cin>>size;
    int arr[100];
    cout << "Enter the elements ";
    for (int i = 0;i<size;i++){
        cin >> arr[i];
    }
    int target;
    cout << "Enter the tagret ";
    cin >> target ;
    pairsum(arr,size,target);
    return 0;
}