#include <iostream>
using namespace std ;
class MyClass 
{
 public:
  string nom_cls;
   int nmb_etd;

     MyClass(){
         cout<<"welcome to your class\n";
     }
 
   
     ~MyClass(){
       
       cout<<"hi etudient\n";
     }
     void display()
{
    cout<<nom_cls<<" "<<nmb_etd<<" \n";
}
};
int main()
{
    MyClass licence;
    licence.nom_cls="genie info";
    licence.nmb_etd=70;
     licence.display();
    
    return 0;
}