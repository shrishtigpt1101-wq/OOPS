#include<iostream>
using namespace std;

class GUN {
public:
    int ammo;
    int damage;
    int scope;
};

class player {
private:
    class helmet {
        int hp;
        int level;

    public:
        void sethp(int hp) {
            this->hp = hp;
        }

        void setlevel(int level) {
            this->level = level;
        }

        int gethp() {
            return hp;
        }

        int getlevel() {
            return level;
        }
    };

    int health;
    int age;
    int score;
    bool alive;
    GUN gun;
    helmet myHelmet;  

public:
    GUN getgun() {
        return gun;
    }

    void setgun(GUN gun) {
        this->gun = gun;
    }

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

    void sethelmet(int level) {
        helmet* temp = new helmet();  // dynamically allocate

        temp->setlevel(level);

        int hp = 0;
        if (level == 1) {
            hp = 50;
        } else if (level == 2) {
            hp = 75;
        } else if (level == 3) {
            hp = 100;
        } else {
            cout << "Invalid helmet level!" << endl;
        }

        temp->sethp(hp);
        this->myHelmet = *temp; 
        delete temp;
    }

    void gethelmet() {
        cout << myHelmet.gethp() << endl;
        cout << myHelmet.getlevel() << endl;
    }

    int add(int a, int b) {
        return a + b;
    }

    player getMaxScorePlayer(player a, player b) {
        return (a.getscore() > b.getscore()) ? a : b;
    }
};

int main() {
    player p1;
    player p2;

    GUN akm;
    akm.ammo = 30;
    akm.damage = 50;
    akm.scope = 2;

    GUN awm;
    awm.ammo = 5;
    awm.damage = 100;
    awm.scope = 4;

    p1.setgun(akm);
    p2.setgun(awm);

    p1.sethealth(100);
    p1.setage(25);
    p1.setscore(0);
    p1.setalive(true);
    p1.sethelmet(2);

    p2.sethealth(100);
    p2.setage(30);
    p2.setscore(0);
    p2.setalive(true);
    p2.sethelmet(3);

    GUN gun123 = p1.getgun();
    /*
    cout << gun123.ammo << endl;
    cout << gun123.damage << endl;
    cout << gun123.scope << endl;

    */ 

    GUN gun456 = p2.getgun();
    /* 
    cout << gun456.ammo << endl;
    cout << gun456.damage << endl;
    cout << gun456.scope << endl;

    p1.gethelmet();
    p2.gethelmet();
    */ 

    player players[2] = {p1, p2};
    cout<<players[0].getage() << endl;
    cout<<players[1].getage() << endl;


    return 0;
}
