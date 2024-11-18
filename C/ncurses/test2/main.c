#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>                  /*  for sleep()  */
#include <curses.h>


int main(void) {

    WINDOW * mainwin;

    /*  Initialize ncurses  */
	fprintf(stderr, "Hallo, hier startet das Programm! Gute nee?\n"); 

    if ( (mainwin = initscr()) == NULL ) {
	    fprintf(stderr, "Error initialising ncurses.\n");
	    exit(EXIT_FAILURE);
    }


    /*  Display "Hello, world!" in the centre of the
	screen, call refresh() to show our changes, and
	sleep() for a few seconds to get the full screen effect  */

    for(;;){
        mvaddstr(13, 33, "Moin, test  world!");
        refresh();
        sleep(1);
        if (_kbhit()) 
            if (_getch() == 's');
                break;
            
    }

    /*  Clean up after ourselves  */
    delwin(mainwin);
    endwin();
    refresh();

    return EXIT_SUCCESS;
}
