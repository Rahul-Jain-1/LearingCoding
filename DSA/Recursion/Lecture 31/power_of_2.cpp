#include<iostream>
using namespace std;

int power(int n ){
    if (n==0){
        return 1;
    }
    return 2 * power(n-1);
}
int main(){
    int num;
    cout << "Enter the number ";
    cin >> num;
    cout << endl;
    int ans = power(num);
    cout << "Power of 2 to " << num << " is " << ans;
    return 0;
}