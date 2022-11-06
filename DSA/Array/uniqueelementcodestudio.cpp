//codestudio Problem (to find unique element )

#include <iostream>
using namespace std;

int unique(int arr[], int size){
    int ans = 0;
    for (int i = 0 ; i < size ; i++){
        ans = ans ^ arr[i];
    }
    return ans;
}

int main(){
    int size; // given the size in odd terms i.e 2m + 1
    cin >> size; 

    int arr[100];
    cout << "Enter the elemtns ";
    for (int i = 0 ; i<size ; i++){
        cin >> arr[i];
    }

    cout << unique(arr,size);
    //upper function return single comming element

    return 0;
}