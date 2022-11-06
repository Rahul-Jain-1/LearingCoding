#include<iostream>
using namespace std;

int fibbonacci(int n){
    //base case
    if(n==0){
        return 0;
    }
    if (n == 1){
        return 1;

    }
    return fibbonacci(n-1) +fibbonacci(n-2);

}

int main(){
    int num;
    cout << "Enter the number ";
    cin >> num;
    //fibbonacci series -  0 1 1 2 3 5 8 13 21 .....
    // starting from 0 th term
    // if num = 4 i.e. 4th term so ans is 3 
    // oth term = 0 
    // 1st term = 1, 2nd tem = 1, 3rd term = 2
    // therefore 4th term is 3 so ans is 3
    cout << "Fibbonacci number of " << num  << " is ";
    cout << fibbonacci(num);
    return 0;
}