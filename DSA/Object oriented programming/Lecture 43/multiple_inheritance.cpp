#include<iostream>
using namespace std;

class Animal {
    public:
    int weight;
    int age;
    public:
    void bark(){
        cout << "Barking. " << endl;
    }
};
class human { 
    public :
    string color;
    void speak(){
        cout << "Speaking . " << endl;
    }
};
//Multiple Inheritance
class Hybrid : public Animal, public human{ 
    
};

int main(){
    Hybrid h;
    h.speak();
    h.bark();
    cout << h.age << endl;
    return 0;
}