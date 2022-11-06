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
class GermanShepherd : public Dog{

};
//that is multilevel inheritance
int main(){
    GermanShepherd g;
    g.speek();
    cout << g.age << endl;
    return 0;
}