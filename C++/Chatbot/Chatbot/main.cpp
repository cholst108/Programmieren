#include <iostream>
#include "chatbot.h"

using namespace std;

int main()
{
    // Instanz des Chatbots
    cChatbot chatti;

    // Modus ändern...
    chatti.changeMode(2);

    // Lauf los...
    chatti.run();

    // Programm wird normal beendet
    return 0;
};
