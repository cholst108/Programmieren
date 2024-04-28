// Header Datei chatbot.h
#include <string>

using namespace std;

class cChatbot{
    private:
        // User Input als String
        string str;

        // Modus
        int mode {2};

    public:
        // Funktion: Begrüßung
        void GetUserInput();

        // Funktion: Wertet die Anweisung des Users aus
        void AnalyseInput();

        // Endlosschleife
        void run();

        // Modus ändern
        void changeMode(int mode);
};

