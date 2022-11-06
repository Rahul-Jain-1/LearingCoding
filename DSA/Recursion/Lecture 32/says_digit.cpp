#include<iostream>
using namespace std;

// i/p - 419 o/p - four one nine

void saydigits(int n, string *arr){
    //base case
    if(n==0){
        return ;
    }
    //proccessing 
    int digit = n % 10;
    n = n / 10;

    // recursive call
    saydigits(n,arr);
    cout << arr[digit] << " ";

}


int main (){
    string arr[10] = {"Zero","One", "Two","Three","Four " ,
                "Five ","Six", "Seven" , "Eight" ,"Nine"};
    int num;
    cout << "Enter the number " ;
    cin >> num;
    cout << endl << "Digit of " << num << " is " ;
    saydigits(num, arr);
    return 0;
}