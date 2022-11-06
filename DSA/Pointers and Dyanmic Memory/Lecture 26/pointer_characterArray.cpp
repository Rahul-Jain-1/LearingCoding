#include<iostream>
using namespace std;

int main (){
    int arr[10] = {1,2,3};
    char ch[10] = "abcde";
    //diffference between arr and ch during print
    cout << arr << endl;
    cout << ch << endl;//it will print in entire string 
    // this is due to cout different implementation 

    char *c = &ch[0];
    cout << c<< endl;

    char r = 'Z';
    char *cn = &r;
    cout << cn <<endl;// it will print entire ch of r till it founf null terminator "\0"

    return 0;
}