#include<iostream>
using namespace std;

void update(int **p){
    //kuch change hoga 
    //p = p + 1;
    //Ans - No change 

    //*p = *p + 1;
    //Ans -yes

    **p = **p + 1;
    //Ans - Yes
}

int main(){
    int i = 5;
    int* ptr1 =  &i;
    int** ptr2 = &ptr1;

    cout <<endl <<endl;
    cout << "before " << i << endl;
    cout << "before " << ptr1 << endl;
    cout << "before " << ptr2 << endl;
    update(ptr2);
    cout << endl << "After " << i << endl;
    cout << "After " << ptr1 << endl;
    cout << "After " << ptr2 << endl;

    return 0;

}