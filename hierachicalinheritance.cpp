#include<bits/stdc++.h>
using namespace std;

class a {
    public:
        void func1(){
            cout<<"inside function"<<endl;
        }
};

class b: public a {
    public:
        void func2(){
            cout<<"inside function 1"<<endl;
        }
};
class c: public a {
    public:
        void func3(){
            cout<<"inside function 1"<<endl;
        }
};

int main(){

    a object1;
    object1.func1();


    b object2;
    object2.func1();
    object2.func2();

    c object3;
    object2.func1();
    object2.func2();
    // object2.func3();








}