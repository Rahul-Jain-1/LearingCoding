#include<iostream>
using namespace std;

class hero{
    private:
    //properties 
    int health;
    char level;
    public:
    static int timeToComplete; // static keyword bana rhe hai 

    //constructor
    hero(){
        cout << "Constructor called " << endl;
    }
    //Parameterised Constructor
    
    hero (int health, char level){
        this->health = health;
        this->level = level;
    }

    //copy constructor
    hero (hero &temp){ // we do by call by reference if we do by call by value then it will create a copy and value change done on this
        this->health = temp.health;
        this->level = temp.level;
        cout << "COPY CONSTRUCTOR CALLED" <<endl;
    }

    int score;
    int gethealth(){
        return health;
    }
    char getlevel(){
        return level;
    }
    void sethealth(int h){
        health = h;
    }
    void setlevel(char c){
        level = c;
    }
    //static function
    static int random(){

        cout << timeToComplete << endl;

    }

    //Destructor
    ~hero() {
        cout << "Destructor called "<< endl;
    }
};
//static keyword
int hero::timeToComplete = 5;


int main(){
    /*
    //static
    hero a;
    //automatically destructor is called for static allocation
    //dynamic 
    hero *b = new hero();
    //dynamic allocation mein manually destructor called karna padhta hai
    delete b;
    */
    cout << hero::timeToComplete << endl;
    hero a;
    cout << a.timeToComplete << endl;

    cout << hero::random()<< endl;
    return 0;
}   