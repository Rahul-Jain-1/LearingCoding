#include<iostream>
using namespace std;
void printArr(int arr[], int size){
    cout << "Printing the Array " << endl;
    // print the array
    for (int i; i < size; i++){
            cout << arr[i] << " " ;
    }
    cout << endl << "Printing Done" << endl;

}
int main(){
    // declare
    int array[15];
    cout << "Value at 15 position is " << array[14] << endl; 
    cout << "Valye at 3 position is " << array[2] << endl;

    int first[15] = {2,3,1,5}; //other values are garbage value 
    // calling the function printarr(jismein array print ho rha hn)
    printArr(first, 15);
    cout << endl;

    //initalise all location of array with 0
    int second[10] =  {0}; // if we use 1 in place of 0 then it will initalise all location with 1 
    printArr(second, 10);
    cout << endl;

    //array of character 
    char ch[5] = {'a','b','c','d','e'};
    //printArr(ch, 5);// we cannot do this as datatype of this array is char but in func we have datatype of int
    cout << "Printing the Array " << endl;
    // print the array
    for (int i; i < 5; i++){
            cout << ch[i] << " " ;
    }
    cout << endl << "Printing Done" << endl;

    cout << endl <<"Everything Is Fine";
    return 0;
}