// Your First C++ Program

#include <iostream>
#include <string>

using namespace std;

class CPerson{
	private:
		string name;
	
	public:
		// Konstruktor
		CPerson(){
			name = "Muster";
		}
		
		// Destrutktor
		~CPerson(){
			cout << "Objekt CPerson wird gelöscht" << endl;
		}
		
		// Inline-Definition (Effizienz)
		void setName(string Name){
			this -> name = Name;
		}
		
		// Prototyp der Methode
		string getName();
};

class CLehrer:public CPerson{
	private:
		string fach;
	
	public:
		void setFach(string fach){
			this -> fach = fach;
		}
		string getFach(){
			return this -> fach;
		}
};

// Methode ausserhalb der Klasse definieren
string CPerson::getName(){
	return(this->name);
}


int main () {
	// statische Erzeugung
	CPerson MisterX; 
	MisterX.setName("Till");
	MisterX.getName();
	
	// dynamische Erzeugung
	CPerson *zeiger;
	zeiger = new CPerson;
	zeiger -> setName("Klaus");
	zeiger -> getName();
	
	return 0;
}

//int main(){
	//CPerson p1;
	
	//char c1 = 'H';
	//cout << "Hier kommt c1: " << c1 << endl;
	
	//char[] string1 = "Moin!";
	//cout << "Hier kommt string1: " << string1 << endl;
	
	
	
	//p1.setName("Holger");	
	//cout << "Name: " << p1.getName();
//}











//class CPerson{
	//private:
		//string Vorname;
		//string Nachname;
	
	//public:
		//void setName(string Vorname, string Nachname){
			//this -> Vorname = Vorname;
			//this -> Nachname = Nachname;
		//}
		
		//string getName(){
			//return(Nachname+" "+Vorname);
		//}
//};


//int main(){
	//CPerson p1;
	
	//p1.setName("Holger", "Baron");
	
	//cout << "Name: " << p1.getName();
	
//}















//class Punkt{

//public:
	//void aendern(int x, int y){
		//// ... Prüfung
		//this -> x = x;
		//this -> y = y;
	//}

//private:
	//int x;	// x-Koordinate
	//int y; 	// y-Koordinate	
//};


//int main() {
	//Punkt einPunkt;
	
	//// Nur mit der Methode können ändern...
	//einPunkt.aendern(100,10);
    
    //return 0;
//}

