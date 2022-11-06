#include<iostream>
using namespace std;

void waveprint(int arr[][4], int nrow, int mcol){
    for(int col = 0 ; col<mcol;col++){
        if (col%2 != 0 ){
            //odd column no
            //bottom to top
            for (int row = nrow-1;row>=0;row--){
                cout<<arr[row][col]<<" ";
            }
        }
        else{
            for(int row = 0; row<nrow ; row++){
                cout<<arr[row][col]<<" ";
            }
        }
    }
}

int main(){
    int arr[3][4];
    for(int i=0 ; i<3 ;i++){
        for(int j = 0; j<4 ; j++){
            cin >> arr[i][j];
        }
    }
    for(int i=0 ; i<3 ;i++){
        for(int j = 0; j<4 ; j++){
            cout << arr[i][j] << " " ;
        }
        cout << endl;
    }
    cout << endl;
    cout << "Printing the array in sine wave order " << endl;
    waveprint(arr,3,4);
    return 0;
}