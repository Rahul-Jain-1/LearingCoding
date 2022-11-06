#include<iostream>
using namespace std;

void reverse(string &str, int i , int j ){
    // we have tuh reference vairable otherwise it will create a copy and value dont get update
    //base case
    if (i>j){
        return;
    }
    swap(str[i],str[j]);
    i++;
    j--;
    //recursive call
    reverse(str,i,j);
}

int main(){
    string n;
    cout << "Enter the string ";
    cin >> n;
    reverse(n,0,n.length()-1);
    cout << endl;
    cout <<"Reverse of string is " <<n;
    return 0;
}