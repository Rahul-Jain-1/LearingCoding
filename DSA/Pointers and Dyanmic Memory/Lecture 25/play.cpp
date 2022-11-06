#include<iostream>
using namespace std;
int main(){ 
    /* #1st code
    //pointer to int is created and pointing to some garbage address
    //int *ptr ;
    //cout << *ptr;
    // if we dont know humko kidhar point karvana hai then create null pointer
    //int *p = 0;
    // it will print segmentation fault as null memory is not exit
    cout << endl;
    //cout << *p ;
*/
/*  2nd code
    // start from starting
    int i = 5;
    int *p = 0;
    p = &i;
    cout << p ;
    cout << endl << *p;
    int *q = &i;
    cout << endl << q;
    cout << endl << *q;
*/
    int num = 5;
    int a = num ;
    a++;
    cout << "value of num after a++ is " << num;
    cout << endl;
    int *p = &num;
    cout << "value of num before *p++ is " << num;
    cout << endl;

    (*p)++;
    cout << "value of num after *p++ is " << num;
    cout << endl;


    // copying  a pointer
    int *q = p ;
    cout << p << "-"<<q;
    cout << endl;
    cout << *p << "-" << *q;

    //addition in pointer
    cout << endl;
    cout << endl;
    int s = 4;
    int *t = &s;
    *t = *t + 1;
    cout << *t << endl;
    cout << "before t is " << t << endl;
    t = t + 1; 
    cout << "after t++ t is " << t << endl;

    return 0;
}