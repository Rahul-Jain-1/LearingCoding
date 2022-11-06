#include<iostream>
using namespace std;

class human {
    public:
    int height;
    int weight;
    int age;
    public:
    int getage(){
        return this->age;
    }
    void setweight(int weight){
        this->weight = weight;
    }
};
class male : public human {  //syntax of inheritance
    public:
    string color;
    void sleep(){
        cout << "MALE SLEEPING" << endl;
    }
};
int main(){
    male ob1;
    cout << ob1.age << endl;
    ob1.setweight(43);
    cout << ob1.weight << endl;
    
    cout << ob1.height << endl;
    cout << ob1.color << endl;
    ob1.sleep() ;
    return 0;
}