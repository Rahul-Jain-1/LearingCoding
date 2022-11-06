#include<iostream>
using namespace std;

int factorial(int n){
    //base case
    if(n==0){
        return 1;
    }
    //recursive relation 
    return n * factorial(n-1);
}

int main(){
    int num;
    cout << "Enter the number " ;
    cin >> num;
    cout << endl;
    int fact = factorial(num);
    cout << "Factorial of " <<num << " is " << fact ;
    return 0;
}