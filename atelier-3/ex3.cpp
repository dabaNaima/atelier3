
#include <iostream>
#include <cmath>

using namespace std;
class Complexe{
  
  public:
  double real, imag; // les attributs de classe 

 Complexe(double r, double i)// Constructeur paramétrie pour définie les variables
  {
    real = r;
    imag = i;
  }

};

int main(){
  int operation ; 
  double i,r;
 double r1, i1;
  cout<< "Premier nombre \n";
  cout << "saisez la partie réelle de premiere nombre complexe : ";
  cin>> r1;
  cout<< "saisez la partie imaginaire de premiere nombre complexe : ";
  cin>> i1;
  
 // créer le premier complexe 
 Complexe z1(r1, i1);
  cout <<  r1 <<"+"<< i1<<"i"<<endl;
  
  cout << "Deuxième nombre\n";
 double r2,i2;
  cout << "saisez la partie réelle de duxieme nombre complexe: ";
  cin >> r2;
  cout << "saisez la partie imaginaire de duxieme nombre complexe: ";
 cin >> i2;
  //créer le nombre complexe 2  
  Complexe z2(r2, i2);
 cout <<  r2<< "+"<< i2<<"i" <<endl;
 cout<<" voici un menu d'opération a respecté \n (+): addition =enter 0\n (-): substration=entrer 1\n (*): multiplication=entre 2\n choisi l'une de les opération "
 ;
 cin>>operation;
 cout << "votre operation choisi : " << operation << endl;

 switch (operation){
      case 0:
        r=r1+r2;
        i= i1+i2;
      cout << "La somme est "<< r << " + " << i << "i";
 break;
      case 1:
        r = r1 - r2;
        i = i1 - i2;
            cout << "soustraction de ce 2 nombres complixes  est "<< r << " + " << i << "i";
   break;
    case 2:

      r = r1* r2 - i1 * i2;
        i  = r1 * i2 + i1 * r2;
           cout << "multiplication  de ce 2 nombres complixes  est "<< r << " + " << i << "i";
    break;
     default:
        cout<<"rechoisi l'une des opérations dans votre menu donné svp ";
       break;
  }


return 0;
}