#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <signal.h>
#include <errno.h>
#include "structures.h"


int main( int argc , char * argv []) {

    pid_t affichage = fork();
    if(affichage == -1) {
        perror("fork affichage");
        return EXIT_FAILURE;
    }
    if(affichage == 0){//dans le fils 

        execl("./affichage", "affichage", NULL);
        perror("execl");
        return EXIT_FAILURE;
    }
    char pid_aff[16];
    snprintf(pid_aff, sizeof(pid_aff), "%d", affichage);

    usleep(100);

    pid_t tri = fork();
    if(tri == -1) {
        perror("fork tri");
        return EXIT_FAILURE;
    }
    if(tri == 0){//dans le fils 

        execl("./tri", "tri", pid_aff, NULL);
        perror("execl");
        return EXIT_FAILURE;
    }



    

}