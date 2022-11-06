//codestudio problem
// code link :: https://www.codingninjas.com/codestudio/problems/square-root_893351
#include<iostream>
using namespace std;

long long  int sqrt(long long unsigned int n)
{   
    int s = 0;
    unsigned int e = n;
    long long mid = s + (e-s)/2;
    long long int ans = -1 ;
    while (s<=e){
        long long int square = mid * mid ;
        if (square == n){
            return mid;
        }
        if (square < n){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

double precision(long long int n, int precision, int temp){
    double factor = 1;
    double ans = temp;
    for (int i = 0; i<precision ; i++){
        factor = factor / 10;
        for(double j = ans; j*j<n ; j=j+factor){
            ans = j;
        }
    }
    return ans;
}
int main(){
    long long unsigned int n ;
    cin >> n ;
    int temp = sqrt(n);
    cout << "Square root is " << sqrt(n) << endl;
    cout << "Square root with precision is " << precision(n,3,temp) << endl;
    return 0;

}
