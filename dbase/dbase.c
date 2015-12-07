#include <stdio.h>
#include <stdlib.h>

void displayMenu(char *);

int main(int argc, char *argv[]) {
    FILE *movies;
    movies=fopen(argv[1],"r");
    if (argc!=2) {
        printf("------------------------------\n| Usage: ./dbase <file-name> |\n------------------------------\n");
        exit(1);
    }
    
    if (movies==NULL) {
        printf("Error: Entered file-name doesnt exist. \nPlease choose a valid filename from the following:\n---------------------------------------------------\n");
        system("ls");
        exit(1);
    }
    displayMenu(argv[1]);
    return 0;
}