#include<iostream>
using namespace std;

class hero{
    private:
    //properties 
    int health;
    char level;
    public:
    
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
};

int main(){
    /* 1.
    //creation of object
    hero h1;
    h1.sethealth(70);
    h1.setlevel('S');
    cout << "Health is " << h1.gethealth() << endl;
    cout << "Level is " << h1.getlevel() << endl;
    //h1.health through an error because health is private member which is not accessible outside the class
    //that's why we are using getters and setters
    h1.score = 76;
    cout << "Score is " << h1.score << endl;
    */

    /* 2.
    //static allocation
    hero a;
    a.sethealth(84);
    a.setlevel('B');
    cout << "Health is " << a.gethealth() << endl ;
    cout << "Level is " << a.getlevel() << endl ; 
    //Dynamically allocation 
    hero *b = new hero;
    b->sethealth('A');          // b->sethealth('A'); or (*b).sethealth('A') both are same.
    b->setlevel(89);
    //since 89 is in int so it is converted to char of ascii value 89
    cout << "Health is " << (*b).gethealth() << endl ;
    cout << "Level is " << (*b).getlevel() << endl ; 
    */

    
    return 0;
}