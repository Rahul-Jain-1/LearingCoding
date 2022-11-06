#include<iostream>
using namespace std;

class A{ 
    public:
    int a;
    int b;
    public:
    void sayhello(){
        cout << "Hello rj" << endl;
    }
    void sayhello(char name){
        cout <<"Hello " << name << endl;
    }
    void sayhello(string name){
        cout << "Hello " << name << endl;
    }
    void operator+ (A &obj){
        int v1 = this->a;
        int v2 = obj.a;
        cout << " OUTPUT " << v2- v1 <<endl;
    }
    void operator() (){
        cout << "MAIN BRACKET MEIN HU " << this->a << endl;
    }
};
int main(){
    A obj;
    
    obj.sayhello();
    //function overloading - same func ko dubra call karna 
    obj.sayhello('R');
    obj.sayhello("RAHUL");

    //OPERATOR overloading
    A obj1, obj2;
    obj1.a = 3;
    obj2.a = 7;
    obj1 + obj2;//+ sign overlaod the func the operator+
    obj1();
    return 0;
}