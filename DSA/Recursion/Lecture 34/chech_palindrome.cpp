#include<iostream>
using namespace std;

bool palindrome(string str, int i , int j ){
    //base case
    if (i>j){
        return true;
    }
    if (str[i] != str[j]){
        return false;
    }
    else{
        //recursive relation
        return palindrome(str,i+1,j-1);
    }
}

int main(){
    string n;
    cout << "Enter the string ";
    cin >> n;
    bool ans = palindrome(n,0,n.length()-1);
    if(ans){
        cout << "It is  a palindrome . "<< endl;
    }
    else{
        cout << "It is not a palindrome . " << endl;

    }
    return 0;
}