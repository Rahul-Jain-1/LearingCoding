#include<iostream>
#include<vector>
using namespace std;
int main(){
    int size;
    cout << "Enter the no of elements do you want to enter in an array: ";
    cin >> size;
    int arr[100];
    cout << "Enter the elements ";
    for(int i = 0;i<size;i++){
        cin >> arr[i];
    }
    int target ;
    cout << "Enter the target : ";
    cin >> target ;

    for(int i = 0;i<size;i++){
        for(int j =i+1 ; j<size;j++){ 
            if((arr[i]+arr[j])==target){
                
               cout << i <<" "<< j;
            }
        }
        cout << endl;   
    }

    return 0;
}