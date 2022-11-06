#include<iostream>
using namespace std;
int main (){

    int row ;
    cin >> row  ;
    //1d array to store no of col in each row
    int* col = new int[row];
    //creating dynamically 2d array
    int** arr = new int*[row];
    for(int i = 0 ; i < row ; i ++){
        cout <<"Enter the no of column for row no " << i << " is ";
        cin >> col[i];
        arr[i] = new int[col[i]]; 
    }
    cout << endl;

    //taking input 
    for(int i = 0 ; i < row ; i ++){
        for(int j = 0 ; j < col[i]; j++){
            cin >> arr[i][j];
        }
    }

    //taking output 
    cout <<endl;
    cout << "JAGGERED ARRAY " << endl;
    for(int i = 0 ; i < row ; i ++){
        for(int j = 0 ; j < col[i]; j++){
            cout << arr[i][j]<< " ";
        }
        cout << endl;
    }

    //releasing memory 
    for(int i = 0;i<row;i++){
        delete []arr[i];
    }
    delete []arr;

    return 0 ;
}