//leetcode problem 
//codelink :: https://leetcode.com/problems/climbing-stairs/
//in online it will show time limit exceed otherwise code is correect.
#include<iostream>
using namespace std;

int climbStairs(int n) {
    //base case
    if (n <0){
        return 0;
    }
    if (n == 0 ){
        return 1;
    }
    //recursive relation 
    return climbStairs(n-1) + climbStairs(n-2);
        
}

int main(){
    int num;
    cout << "Enter the number ";
    cin >> num;
    
    cout << "No of ways you can climb for " << num  << " steps is ";
    cout << climbStairs(num);
    return 0;
}