#include<iostream>
using namespace std;

int main(){
    int size;
    cout << "Enter the size of an array : ";
    cin >> size;
    int arr[100];
    cout <<"Enter the eleemnts " ;
    for(int i = 0;i<size;i++){
        cin >> arr[i];
    }
    int target;
    cout << "Enter the target ";
    cin >> target;
    for(int i = 0;i<size-1;i++){
        if((arr[i]+arr[i+1]+arr[i+2])==target){
            cout << arr[i] << " " << arr[i+1] << " "<< arr[i+2] ;
        }
        cout << endl;
    }
    return 0;
}