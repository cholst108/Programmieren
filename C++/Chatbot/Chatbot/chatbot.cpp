// Implementierung chatbot.cpp
#include <string>
#include <iostream>
#include "chatbot.h"

using namespace std;

// Funktion: Begrüßung + Einlesen
void cChatbot::GetUserInput(){

    // Begrüßung
    cout << "Hallo - wie kann ich helfen?" << endl;

    // Einlesen
    getline(cin, this->str);
};

// Funktion: Wertet die Anweisung des Users aus
void cChatbot::AnalyseInput(){
    // Modus Auswahl
	switch (mode){

        // Version 1: a la Papagei
        case 1:
            // Modus 1: Papagei
            cout << "Ich wiederhole: " << this->str << endl;
            break;

        // Version 2: mit Reaktion auf Schlagworte
        case 2:
            if ((this->str).find("bier") != std::string::npos){
                cout << "Gute Wahl! Ich hole eins..." << endl;
            }else if ((this->str).find("milch") != std::string::npos){
                cout << "Auch net schlecht." << endl;
            }else {cout << "Das habe ich leider nicht verstanden..." << endl;};
                break;

        // Fall falscher Wert übergeben wurde
        default: cout << "Dieser Modus ist nicht definiert!" << endl;
    };
};

// Modus ändern
void cChatbot::changeMode(int mode){
    this->mode = mode;
};

void cChatbot::run(){

    // endlosschleife
	do{
		// User nett begrüßen
		GetUserInput();

		// Antworten
		AnalyseInput();

	}while(this->str.find("ende") == std::string::npos);

};
