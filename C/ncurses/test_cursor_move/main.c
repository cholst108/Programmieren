#include <ncurses.h>  

int main(){
    int counter=0;
    initscr();              /* Start curses mode          */
    nodelay(stdscr,TRUE);   /*nicht auf Enter warten*/
    
    WINDOW *win1;
    WINDOW *win2;

    win1 = newwin(20,40,0,0);
    win2 = newwin(10,10,20,20);
   
    nodelay(win1,TRUE);   /*nicht auf Enter warten*/
    nodelay(win2,TRUE);   /*nicht auf Enter warten*/
     
    box(win1, 0,0);
    box(win2, 0, 0);

    // Farbe in sspiel bringen
    if (has_colors() == FALSE){
        // beenden, aber schnell! 
        mvwprintw(win2, 1,1, "Error - keine Farbe im Terminal möglich!\n");
        delwin(win1);
        delwin(win2);
        endwin();           /* End curses mode        */
        return 0;
    }
    start_color();
    init_pair(2, COLOR_RED, COLOR_BLUE);
    attron(COLOR_PAIR(2));
   
    // move and print in window
    mvwprintw(win1, 0, 1, "win1");
    mvwprintw(win2, 1, 1, "win2");
    attroff(COLOR_PAIR(2));
    
    // refreshing the window
    wrefresh(win1);
    wrefresh(win2);
  
    // dauerschleife, bis eine Taste gedrückt wird.  
    while(mvwgetch(win1,1,19) == ERR){
        // neues reinschreiben
        mvwprintw(win1,1,1,"zeit: %i",counter);
        wrefresh(win1);
        napms(1000);    /* warte für 1 sekunde*/
        counter++;      /* counter hoch zählen*/
        wclrtoeol(win1);
    }
    nodelay(stdscr, FALSE);
    nodelay(win1, FALSE);
    nodelay(win2, FALSE);

    // deleting windows
    delwin(win1);
    delwin(win2);
    endwin();           /* End curses mode        */
             
    return 0;
} 
