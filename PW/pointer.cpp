#include <iostream>
using namespace std;

class player {
private:
    int score;
    int health;
    int age;
    bool alive;

public:
    int gethealth() {
        return health;
    }

    int getage() {
        return age;
    }

    int getscore() {
        return score;
    }

    bool isalive() {
        return alive;
    }

    void sethealth(int health) {
        this->health = health;
    }

    void setage(int age) {
        this->age = age;
    }

    void setscore(int score) {
        this->score = score;
    }

    void setalive(bool alive) {
        this->alive = alive;
    }
};

int addscore(player a,player b){
return a.getscore() + b.getscore();
}

int add(int a, int b) {
    return a + b;
}

player getMaxScorePlayer(player a, player b) {
    if (a.getscore() > b.getscore())
        return a;
    else
        return b;
}

int main() {
    player shrishti; //object creation , statically
    player shreya;  //compiler allocates memory for these objects on the stack
   // static allocation

    player *ritu = new player ();   // Dynamic allocation example
    //runtime allocation
    //compiler allocates memory for this object on the heap

    player rituobject = *ritu; // Copying the object
    
    rituobject.setscore(30);
    rituobject.sethealth(80);
    rituobject.setage(26);
    rituobject.setalive(true);
    cout<<rituobject.getscore() << endl;

    ritu->setscore(100);
    cout<<ritu->getscore() << endl; // Accessing the score using pointer

    /*
    shrishti.setscore(20);
    shrishti.sethealth(100);
    shrishti.setage(25);
    shrishti.setalive(true);

    shreya.setscore(22);
    shreya.sethealth(90);
    shreya.setage(24);
    shreya.setalive(false);

    cout<<add(5, 10) << endl; 
    cout<<addscore(shrishti, shreya) << endl;

    player sanket= getMaxScorePlayer(shrishti, shreya);
    cout<<sanket.getscore() << endl;
    cout<<sanket.gethealth() << endl;
    cout<<sanket.getage() << endl;
*/

    return 0;

}