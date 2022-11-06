#include<iostream>
using namespace std;

class Animal {
    public:
    int weight;
    int age;
    public:
    void speek(){
        cout << "Speaking. " << endl;
    }
};
class Dog : public Animal{ 
    
};
//that is single inheritance
int main(){
    Dog d;
    d.speek();
    cout << d.age << endl;
    return 0;
}