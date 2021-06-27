// Online C++ compiler to run C++ program online
#include <iostream>
#include<string.h>
using namespace std;

class Car{
    public:
    string name;
    
    // void drive(int speed){
    //     cout<<name<<" is running at "<<speed<<"km/hr";
    // } ***** this part is used for declaring the method inside the class....

    void drive(int speed);
    
};
//To define a function outside the class definition, you have to declare it inside the class and then define it outside of the class.
//This is done by specifiying the name of the class, followed the scope resolution :: operator, followed by the name of the function:
void Car::drive(int speed){
    cout<<name<<" is running at "<<speed<<"km/hr";
}



int main() {
    Car car1;
    car1.name="BMW";
    car1.drive(160);

    return 0;
}

/////Use of constructor- no return type, mostly inside public a.s. , and same name as class and also can be defined inside and ouside the class definition.


// Online C++ compiler to run C++ program online
#include <iostream>
#include<string.h>
using namespace std;

class Car{
    public:
    string name;
    int model;
    
    Car(string n,int m);

    void drive(int speed);
    
};

void Car::drive(int speed){
    cout<<name<<" "<<model<<" is running at "<<speed<<"km/hr";
}

Car::Car(string n, int m){
    name=n;
    model=m;
}


int main() {
    Car car1("BMW",1980);
    car1.drive(160);
    // car1.name="BMW";
    // car1.drive(160);

    return 0;
}

///The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users. 
//To achieve this, you must declare class variables/attributes as private (cannot be accessed from outside the class). 
///If you want others to read or modify the value of a private member, you can provide public get and set methods.
///To access a private attribute, use public "get" and "set" methods:


// Online C++ compiler to run C++ program online
#include <iostream>
#include<string.h>
using namespace std;

class Car{
    private:
    string name;
    int model;
    
    
    public:
    void set_name(string n){
         name=n;
    }
        void set_model(int m){
         model=m;
    }
    string get_name(){
        return name;
    }
    int get_model(){
        return model;
    }
    // Car(string n,int m);

    
};

// void Car::drive(int speed){
//     cout<<name<<" "<<model<<" is running at "<<speed<<"km/hr";
// }

// Car::Car(string n, int m){
//     name=n;
//     model=m;
// }


int main() {
    Car car1;
    car1.set_name("BMW");
    car1.set_model(1980);

    cout<<car1.get_name();
    cout<<endl;
    cout<<car1.get_model();
    // car1.name="BMW";
    // car1.drive(160);

    return 0;
}


///concept of inheritence with protected a.s.
///he third specifier, protected, is similar to private, but it can also be accessed in the inherited class:

// Online C++ compiler to run C++ program online
#include <iostream>
#include<string.h>
using namespace std;

class Car{
    protected:
    int price;
    private:
    string name;
    int model;
    
    
    public:
    void set_name(string n){
         name=n;
    }
        void set_model(int m){
         model=m;
    }
    string get_name(){
        return name;
    }
    int get_model(){
        return model;
    }
    // Car(string n,int m);

    
};
class Autocar:public Car{
public:
    void set_price(int p){
        price=p;
    }    
    int get_price(){
        return price;
    }
};

// void Car::drive(int speed){
//     cout<<name<<" "<<model<<" is running at "<<speed<<"km/hr";
// }

// Car::Car(string n, int m){
//     name=n;
//     model=m;
// }


int main() {
    Car car1;
    car1.set_name("BMW");
    car1.set_model(1980);

    cout<<car1.get_name();
    cout<<endl;
    cout<<car1.get_model();
    // car1.name="BMW";
    // car1.drive(160);
    Autocar at;
    at.set_price(100);
    cout<<endl<<at.get_price();

    return 0;
}

///Friend function to find which number is bigger.
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class A;
class B;
class A{

    int a;

    friend void big(A,B);
};
class B{

    int b;
    
    friend void big(A,B);
};

void big(A first, B second){
    first.a=100;
    second.b=20;
    if(first.a>second.b){
        cout<<"A big";
    }
    else
    cout<<"B big";

    
}



int main() {
    // Write C++ code here
    A first;
    B second;
    big(first,second);

    return 0;
}



