#include <iostream>
using namespace std;
class Animal
{
public:
string nom;
int age;
 void set_value(string n, int a){
   nom=n;
   age =a;
 }
};
class Zebra : public Animal
{
    public:
    void display( float poit)
{
cout<<"voillà les informations de ce animal "<<" le nom "<<nom<<" son age  "<<age<<"ans et son poit  "<<poit<<"kg"<<endl;
}

};
class Dolphin  : public Animal
{
    public:
    void display( float poit)
{
cout<<"voillà les informations de ce animal "<<" le nom "<<nom<<" son age  "<<age<<"ans et son poit  "<<poit<<"kg"<<endl;
}
};
int main()
{
    Zebra a;
    Dolphin b;
    a.set_value("zebra",5);
    b.set_value("dolphin",8);
    a.display(14.2);
    b.display(25.5);
    
return 0;
}
