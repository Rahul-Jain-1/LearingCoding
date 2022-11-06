#include<iostream>
using namespace std;

void print(int n){
    if (n==0){
        return ;
    }
    cout << n << endl;
    print(n-1);
}
int main(){
    int num;
    cout << "Enter the number ";
    cin >> num;
    cout << "Couting fron " << num <<" to 1 is " << endl;
    print(num);
    return 0;
}