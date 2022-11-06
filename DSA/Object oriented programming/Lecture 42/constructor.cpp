#include<iostream>
using namespace std;

class hero{
    private:
    //properties 
    int health;
    char level;
    public:

    //constructor
    hero(){
        cout << "Constructor called " << endl;
    }
    //Parameterised Constructor
    hero (int health){
        //health = health;
        //yeah konsi health ki baat karegya jiska scope sabse psass hoga
        // tuh idhar func ki health pass mein hai tuh woh heath nicche call hoegyi
        // compiler yeah health object ki health mein nahin daalegya
        // balki ussi health ko baar baar caall karta rhegya
        //to overcome this problem we use this keyword
        this->health = health;
        //where this is pointer pointing to object thiss->health means obj ki health
        
    }
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
};
int main(){
    /*
    //Constructor
    hero rahul; // call rahul.hero()
    // by default class make a constructor but we can't see that
    // as we make constructor i.e. hero() func so default contsructor is removed 
    
    //dynamically 
    hero *h = new hero;
    */
   /*2. Parameterised constructor
    hero h1(89);
    cout << h1.gethealth() << endl;
    hero h2(96,'B');
    cout << h2.gethealth() << endl;
    cout << h2.getlevel() << endl;
    */

    /*3. Copy constructor
    hero rahul(92,'A');
    //copy the value of rahul object
    hero raj(rahul); //it will call copy constructor in built we have copy constructor

    cout << raj.gethealth() << endl;
    cout << raj.getlevel() << endl;
    */
     
    hero a(10,'B');
    hero b(20,'A');
    a = b; // it will copy the value of b in a  
    cout << a.gethealth() << endl;
    cout << b.getlevel() << endl;
    
    return 0;
}