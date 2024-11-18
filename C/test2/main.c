#include <ncurses.h>

int main()
{	
    int counter=0;
	initscr();			    /* Start curses mode 		  */
    nodelay(stdscr,TRUE);   /*nicht auf Enter warten*/
    
    // dauerschleife, bis eine Taste gedrückt wird.  
    while( getch() == ERR){
        clear();
        printw("Das Programm läuft seit %i Sekunden.", counter);
        refresh();		/* Print it on to the real screen */
        napms(1000);    /* warte für 1 sekunde*/
        counter++;      /* counter hoch zählen*/
    }

    nodelay(stdscr, FALSE);
	endwin();			/* End curses mode		  */

	return 0;
}




//    // zähler für die ????
//    int counter = 0;
//    
//    // Initialisierung des Screens
//    initscr();
//    
//    // keine AHnung
//    nodelay(stdscr, TRUE);
//
//    // dauerschleife, bis eine Taste gedrückt wird 
//    while (getchar()==ERR){
//        counter++;
//        printw("Das Programm läuft seit %d Sekunden!",counter);
//        refresh();
//        napms(1000);
//    }    
//    
//    nodelay(stdscr, FALSE);
//
//    // window beenden
//    endwin();
//
//    return 0; 
//}
