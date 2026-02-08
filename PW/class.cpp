#include<iostream>
using namespace std;

class player{
private:
    int score;  //data members
    int health; //data members

public:
    void setscore(int s){   //setter
        score=s;
    }

    void sethealth(int h){
        health=h;
    }

/*    void showhealth(){   //member function
        cout<<"health is:"<<health<<endl;
    }

*/

    int getscore(){
        return score;
    }

    int gethealth(){
        return health;
    }

};


int main()
{
    int score[100]={};
    int health[100]={};

    player shrishti;
    shrishti.setscore(20);
    shrishti.sethealth(100);
//    shrishti.score=90;
//    shrishti.health=100;
//   cout<<shrishti.score<<endl;
//  cout<<shrishti.health<<endl;
    cout << "Shrishti's Score: " << shrishti.getscore() << endl;
    cout << "Shrishti's Health: " << shrishti.gethealth() << endl;



    player shreya;
    shreya.setscore(95);
    shreya.sethealth(90);
//    shreya.score=95;
//    shreya.health=90;
//    cout<<shreya.score<<endl;
//    cout<<shreya.health<<endl;

    cout << "Shreya's Score: " << shreya.getscore() << endl;
    cout << "Shreya's Health: " << shreya.gethealth() << endl;

    return 0;
}