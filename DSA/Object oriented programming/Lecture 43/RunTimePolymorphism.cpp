#include<iostream>
using namespace std;

class Animal {
    public :
    void speaking (){
        cout << "SPEAKING . " << endl;
    }
};
class Dog :public Animal{
    public:
    void speaking (){
        cout << "BARKING . " << endl;
    }
};
int main(){
    //func overridding - if we sub and super class.
    // sub and super class mein same func hai tuh subclass ka func call hoga
    Dog obj1;
    obj1.speaking();
    return 0;
}