#include <iostream>
#include <string>

using namespace std;
class Personne{
  
  protected:
  string nom;
  string prenom;
  string date_naissance;

 Personne(){
    nom ="ahmed";
    prenom ="ahmedi";
    date_naissance="10/02/1980";
  }
void afficher()
{
cout<<"cette personne s'appelle "<<nom<<""<<prenom<<"nee "<<date_naissance;
}

};
class  Employe : public Personne
{
public:
int  salaire ;
   Employe()
   {
       salaire=8000;
   }
   void afficher()
{
cout<<"cette personne s'appelle "<<nom<<""<<prenom<<"nee "<<date_naissance<<"son salaire"<<salaire;
}
   
};
class  Chef :public Employe
{
    public:
    string service;
    Chef(){
        service="controle";
    }
     void afficher()
{
cout<<"cette personne s'appelle "<<nom<<""<<prenom<<"nee "<<date_naissance<<"son salaire"<<salaire<<"son sevice"<<service;
}
};
class  Directeur : public Chef
{
    public:
    string societe;
    Directeur(){
        societe="DKM";
    }
    
     void afficher()
{
cout<<"cette personne s'appelle "<<nom<<" "<<prenom<<" nee "<<date_naissance<<" son salaire "<<salaire<<" son sevice est  "<<service<<" dans l'associté "<<societe;
}
    

    
};

int main(){
 
 Directeur a;
 a.afficher();

return 0;
}