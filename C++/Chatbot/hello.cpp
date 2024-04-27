#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

void Auswertung(string* str, int mode){

	// Modus Auswahl
	switch (mode){

        // Version 1: a la Papagei
        case 1:
            cout << "Toll, hier ist er: " << endl << *str << endl;
            break;

        // Version 2: mit Reaktion auf Schlagworte
        case 2:
            if      ((*str).find("bier") != std::string::npos){cout << "Gute Wahl! Ich hole eins..." << endl;}
            else if ((*str).find("milch") != std::string::npos){cout << "Auch net schlecht." << endl;}
            else {cout << "Das habe ich leider nicht verstanden..." << endl;};
            break;

        // Fall falscher Wert übergeben wurde
        default: cout << "Dieser Modus ist nicht definiert!" << endl;
    };
};

int main(){

	string strUserAnweisung;

	// endlosschleife
	do{
		// 1. User nett begrüßen
		cout <<  "Hallo, ich bin ein Chatbot - wie darf ich helfen? (beenden mit ende)"<<endl;

		// 2. Input von user einlesen
		getline(cin, strUserAnweisung);

		// 3 ANtworten
		Auswertung(&strUserAnweisung,2);

	}while(strUserAnweisung.find("ende") == std::string::npos);

	return 0;
}


