#include <iostream>
using namespace std ;
class Test
{
 public:
  string date_test;
   int numero_test;
   static int n; //déclarztion de variable static
     Test(string d, int n){
         date_test=d;
         numero_test=n;
     }
 
   
     void call(){
       
      
    cout<<"la date de ce test est "<<date_test<<"  le numéro de test est "<<numero_test<<endl;
    
    n++;
}
};
int Test::n=0; //initialisation de variable static
int main(){
    Test reseau("12/12/2021",3);
     reseau.call();
     reseau.call();
     reseau.call();
     reseau.call();
     reseau.call();
     reseau.call();
     reseau.call();
     reseau.call();
    cout<<"le nombre d'appele de la fonction cal dans int main est "<<reseau.n;
    return 0;
}

