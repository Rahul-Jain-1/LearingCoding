#include<iostream>
using namespace std;

class student {
    private:
    string name;
    int age;
    int height;
    public:
    int getage(){
        return this->age;
    }
    //In encapsulation all data members must be private and function public.
};

int main(){
    student first;
    cout << "Age is " << first.getage() << endl;
}