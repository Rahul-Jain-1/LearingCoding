#include<iostream>
using namespace std;

void update(int& n){
    //call by reference in function 

    n ++;
}
int& func(int n){//return by reference
    int num = n;
    int& ans = num;
    return ans;
}

int main (){
    /*int  a = 5;
    //creating  a reference variable 
    int& b = a;
    int &c = a;
    //both int& b and int &b are same 
    cout << a << endl;
    cout << b << endl;
    cout << c<< endl;*/


    int i = 5;
    cout << "before " << i << endl;
    update(i);
    cout << "After " << i << endl;


    cout << func(i);//never do this type of practice (bad practcie hai)
    return 0 ;
}