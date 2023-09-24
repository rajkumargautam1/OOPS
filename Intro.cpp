// By default access modifier is private
// To access properties od data memeber by "." operartor
// In private data member not be access outside the class



#include<bits/stdc++.h>
using namespace std;
class hero{
    // properties
    private:
    
    int health;
    // char name[100];
    // int health;

    public:
    char level;
    void print (){
        cout<<level<<endl;
    }

    int gethealth(){
        return health;
    }
    char getlevel(){
        return  level;

    }
    void sethealth(int h){
        health=h;

    }
    void setlevel(char ch){
        level=ch;
    }

};
int main(){
    // static allocation 

    hero a;
    cout<<

    //dyanamically 

    hero *b =new hero;
      





    // // creating object
    // hero ramesh;

    // cout<<"ramesh health is "<<ramesh.gethealth()<<endl;
    // //use setter 
    // ramesh.sethealth(70);
    // // ramesh.health =70;
    // ramesh.level='A';

    // cout<<"health is: "<<ramesh.gethealth()<<endl;
    // cout<<"level is: "<<ramesh.level<<endl;
    

    // // *** when a class is empty size should be 1;**** 
    // // cout<<"size : "<<sizeof(h1)<<endl;
    return 0;
}