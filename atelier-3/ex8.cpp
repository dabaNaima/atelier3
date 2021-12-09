#include<iostream>
using namespace std;
class Media { // déclaration de la classe media 
public:
	string titre; //déclaration de l'attribut titre 
	string id(string title) {
		titre = title;
	    return titre	;
	}
	virtual void imprimer() //fonction  virtuel affiche le titre
	{ 
		cout << "le titre de ce media est : " << titre << endl;
	}

};
	
class Livre :public Media { // sous classe de classe media
public:
	string ecrivain; // propre attribut pour cette classe
	 Livre(){
	     ecrivain="ahmadi"; // initialisation de attribut
	 }
	
	 void imprimer() {
		cout << "l'ecrivain ce livre est :"<<ecrivain<<endl; //affichage de l'attribut
	}

};
class Audio :public Media { // sous classe de classe media
public:
	string type; // propre attribut de la classe audio 
	Audio() {
		type="mp4"; // initialisation de attribut
	}
	void imprimer() {
		cout << "le type d'audio est :" <<type<<endl; //affichage de l'attribut
	}

};
class Cd :public Audio { // déclaration de classe cd  hériter de la classe audio 
public:
	string abr;
	Cd(){
	    abr="compact disc"; // initialisation de attribut
		

	}
	void imprimer() {
		cout<<" cette type de autio cd qui est l'abrériation de "<<abr<<endl;
	}

};
class Cassete :public Audio {  // déclaration de classe cassete  hériter de la classe audio
public:
	string allographe;
	Cassete() {
		allographe="k7";
		
	}
	void imprimer() {
		cout<<" couramment  cassete abrégé en français l'allographe  "<<allographe<<endl;
	}

};
class Disque :public Audio { // déclaration de classe disque  hériter de la classe audio
public:
	string colour;
	Disque(){
	    colour="grie";
	}
	
	void imprimer() {
		cout << "disque en colour : " << colour<<endl;
	}

};
class Presse :public Media { // déclaration de classe presse  hériter de la classe media
public:  
	int numero;
	Presse(){
	    numero=1087;
	}

	
	void imprimer() {
		cout << "le numero  de cette presse est :" << numero<<endl;
	}

};
class Magazine : public Presse { // déclaration de classe magazine hériter de la classe presse
public:
    string nom;
    Magazine(){
        nom="le soir";
    }
	

	void imprimer() {
		cout << "le nom de magazine est : " << nom<<endl;
	}
};
class Journal :public Presse { // déclaration de classe journal  hériter de la classe presse
public:
	string nom;
	 Journal(){
	     nom="maroc";
	 }
	
	void imprimer() {
		cout << "le nom de journal est:  " << nom<<endl;
	}
};
class Revue :public Presse { // déclaration de classe revue  hériter de la classe presse
public:
	string nom;
	Revue(){
	    nom="l'une";
	}
	
	void imprimer() {
		cout << "le nom de cette revue est:  " << nom<<endl;
	}
};
 
int main() {
	//déclaration des objets des classes
	Media mediaa;
    Livre l;
    Audio au;
    Cd cdd;
    Disque d;
    Presse p;
    Magazine m;
    Revue r;
    Journal j;
    Cassete c;
	mediaa.id(" série");
	//appelle de la fonction imprimer pour chaque objet
	mediaa.imprimer();
	l.imprimer();
	au.imprimer();
	cdd.imprimer();
	d.imprimer();
	p.imprimer();
	m.imprimer();
	r.imprimer();
	j.imprimer();
	c.imprimer();
	return 0;

}