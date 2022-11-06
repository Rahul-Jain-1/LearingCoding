#include<iostream>
using namespace std;
int score = 10; //creating global variable 

void a(int& i ){
    cout << score << "in a " << endl;
    cout << i <<endl;
}

void b(int& i){
    cout << score << "in b " << endl;
    cout << i << endl;
}

int main (){
    cout << score << "in main " << endl;
    int i = 5;
    a(i);
    b(i);
    return 0;

}