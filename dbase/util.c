#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void allMovies();
void eventHandler(int, char *);
void shortestMov(char *);
void longestMov(char *);
void olderThan(char *);
void newerThan(char *);
void rangeMovies(char *);
void sameActor(char *);
void sameYear(char *);
void sameLength(char *);
void addMovie(char *);
void delMovie(char *);

void displayMenu(char *fname) {
    int option=1;
    system("clear");
    printf("Welcome to the C Movie Database!\nMain Menu:\n-----------------------------------------------------\n1: Display all movies:-->\n2: Display the shortest movie:-->\n3: Display the longest movie:->\n4: Display older movies:-->\n5: Display newer movies:-->\n6: Display movies in the region specified:-->\n7: Display all movies of same actor:-->\n8: Display all movies released in the same year:-->\n9: Display all the movies of the same length:-->\n10: Add a movie:-->\n11: Remove a movie:\n0: Quit the program:-->\n");
    printf("-----------------------------------------------------\nEnter your choice: ");
    scanf("%d",&option);
    eventHandler(option,fname);
}
void eventHandler(int option, char *filename) {
    if (option==0) {
            system("clear");
            exit(1);
    }
    else if (option==1) {
            system("clear");
            allMovies(filename);
    }
    else if (option==2) {
            system("clear");
            shortestMov(filename);
    }
    else if (option==3) {
            system("clear");
            longestMov(filename);
    }
    else if (option==4) {
            system("clear");
            olderThan(filename);
    }
    else if (option==5) {
            system("clear");
            newerThan(filename);
    }
    else if (option==6) {
            system("clear");
            rangeMovies(filename);
    }
    else if (option==7) {
            system("clear");
            sameActor(filename);
    }
    else if (option==8) {
            system("clear");
            sameYear(filename);
    }
    else if (option==9) {
            system("clear");
            sameLength(filename);
    }
    else if (option==10) {
            system("clear");
            addMovie(filename);
    }
    else if (option==11) {
            system("clear");
            delMovie(filename);
    }
    else if ((int)option>56 || (int)option < 48) {
            char c;
            system("clear");
            fprintf(stdout,"\nInvalid option! Please choose a valid option...\n\n");
            fprintf(stdout,"Press ENTER to continue...\n");
            fscanf(stdin,"%c",&c);
            if (getchar())
                displayMenu(filename);
    }
    else {
            char c;
            system("clear");
            fprintf(stdout,"\nInvalid option! Please choose a valid option...\n\n");
            fprintf(stdout,"Press ENTER to continue...\n");
            fscanf(stdin,"%c",&c);
            if (getchar())
                displayMenu(filename);
        }
}
void allMovies(char *filename) {
    FILE *movies;
    char title[100]="",actor[100]="";
    int year,length;
    char c;
    
    movies=fopen(filename,"r");
    printf("\n");
    while(!feof(movies)) {
        fscanf(movies,"%s %s %d %d\n",title,actor,&length,&year);
        fprintf(stdout,"%s %s %d %d\n",title,actor,length,year);
    }
    printf("\n");
    fclose(movies);
    fprintf(stdout,"Press ENTER to continue...\n");
    fscanf(stdin,"%c",&c);
    if (getchar())
        displayMenu(filename);


}
void shortestMov(char *fname) {
    FILE *movies;
    char title[100]="",actor[100]="";
    int year,length;
    char c;
    
    movies=fopen(fname,"r");
    fscanf(movies,"%s %s %d %d",title,actor,&length,&year);
    char nTitle[100]="",nActor[100]="";
    int nYear,nLength;
    nLength=length;
    strcpy(nTitle,title);
    strcpy(nActor,actor);
    nYear=year;
    while (!feof(movies)) {
        fscanf(movies,"%s %s %d %d\n",title,actor,&length,&year);
        if (length < nLength) {
            nLength=length;
            strcpy(nTitle,title);
            strcpy(nActor,actor);
            nYear=year;
        }
    }
    fprintf(stdout,"\nThe shortest movie is: %s by %s.\n\n",nTitle,nActor);
    fclose(movies);
    fprintf(stdout,"Press ENTER to continue...\n");
    fscanf(stdin,"%c",&c);
    if (getchar())
        displayMenu(fname);


}

void longestMov(char *fname) {
    FILE *movies;
    char title[100]="",actor[100]="";
    int year,length;
    movies=fopen(fname,"r");
    char c;
    fscanf(movies,"%s %s %d %d",title,actor,&length,&year);
    char nTitle[100]="",nActor[100]="";
    int nYear,nLength;
    
    nLength=length;
    strcpy(nTitle,title);
    strcpy(nActor,actor);
    nYear=year;
    
    while (!feof(movies)) {
        fscanf(movies,"%s %s %d %d\n",title,actor,&length,&year);
        if (length > nLength) {
            nLength=length;
            strcpy(nTitle,title);
            strcpy(nActor,actor);
            nYear=year;
        }
    }
    fprintf(stdout,"\nThe longest movie is: %s by %s.\n\n",nTitle,nActor);
    fclose(movies);
    fprintf(stdout,"Press ENTER to continue...\n");
    fscanf(stdin,"%c",&c);
    if (getchar())
        displayMenu(fname);


}
void olderThan(char *fname) {
    FILE *movies;
    char title[100]="",actor[100]="";
    int year,length,inputYear;
    movies=fopen(fname,"r");
    char c;
    printf("Display movies older than what year?: ");
    scanf("%d",&inputYear);

    while (!feof(movies)) {
        fscanf(movies,"%s %s %d %d\n",title,actor,&length,&year);
        if (year < inputYear) {
            fprintf(stdout,"%s by %s\n",title,actor);
        }
    }
    printf("\n\n");
    fclose(movies);
    fprintf(stdout,"Press ENTER to continue...\n");
    fscanf(stdin,"%c",&c);
    if (getchar())
        displayMenu(fname);


}

void newerThan(char *fname) {
    FILE *movies;
    char title[100]="",actor[100]="";
    int year,length,inputYear;
    movies=fopen(fname,"r");
    char c;
    printf("\nDisplay movies newer than what year?: ");
    scanf("%d",&inputYear);
    
    while (!feof(movies)) {
        fscanf(movies,"%s %s %d %d\n",title,actor,&length,&year);
        if (year > inputYear) {
            fprintf(stdout,"%s by %s\n",title,actor);
        }
    }
    printf("\n\n");
    fclose(movies);
    fprintf(stdout,"Press ENTER to continue...\n");
    fscanf(stdin,"%c",&c);
    if (getchar())
        displayMenu(fname);

}

void rangeMovies(char *fname) {
    FILE *movies;
    char title[100]="",actor[100]="";
    int year,length,inputYear1,inputYear2;
    movies=fopen(fname,"r");
    char c;
    printf("\nDisplay movies inbetween which years?: ");
    scanf("%d %d",&inputYear1,&inputYear2);
    
    while (!feof(movies)) {
        fscanf(movies,"%s %s %d %d\n",title,actor,&length,&year);
        if (year > inputYear1 && year < inputYear2) {
            fprintf(stdout,"%s by %s\n",title,actor);
        }
    }
    printf("\n\n");
    fclose(movies);
    fprintf(stdout,"Press ENTER to continue...\n");
    fscanf(stdin,"%c",&c);
    if (getchar())
        displayMenu(fname);

}

void sameActor(char *fname) {
    FILE *movies;
    char title[100]="",actor[100]="";
    int year,length;
    char c;
    char inputActor[100]="";
    fprintf(stdout,"\nDisplay movies of which actor?: ");
    fscanf(stdin,"%s",inputActor);
    movies=fopen(fname,"r");
    
    while (!feof(movies)) {
        fscanf(movies,"%s %s %d %d\n",title,actor,&length,&year);
        if (!strcmp(actor,inputActor)) {
            fprintf(stdout,"%s\n",title);
        }
    }
    printf("\n\n");
    fclose(movies);
    fprintf(stdout,"Press ENTER to continue...\n");
    fscanf(stdin,"%c",&c);
    if (getchar())
        displayMenu(fname);
}

void sameYear(char *fname) {
    FILE *movies;
    char title[100]="",actor[100]="";
    int year,length,inputYear;
    movies=fopen(fname,"r");
    char c;
    fprintf(stdout,"\nDisplay movies released in what year?: ");
    fscanf(stdin,"%d",&inputYear);
    
    while (!feof(movies)) {
        fscanf(movies,"%s %s %d %d\n",title,actor,&length,&year);
        if (year == inputYear) {
            fprintf(stdout,"%s by %s\n",title,actor);
        }
    }
    printf("\n\n");
    fclose(movies);
    fprintf(stdout,"Press ENTER to continue...\n");
    if (getchar())
        displayMenu(fname);

}

void sameLength(char *fname) {
    FILE *movies;
    char title[100]="",actor[100]="";
    int year,length,inputLength;
    movies=fopen(fname,"r");
    char c;
    fprintf(stdout,"\nDisplay movies of what length?: ");
    fscanf(stdin,"%d",&inputLength);
    
    while (!feof(movies)) {
        fscanf(movies,"%s %s %d %d\n",title,actor,&length,&year);
        if (length==inputLength) {
            fprintf(stdout,"%s by %s\n",title,actor);
        }
    }
    printf("\n\n");
    fclose(movies);
    fprintf(stdout,"Press ENTER to continue...\n");
    scanf("%c",&c);
    if (c==getchar())
        displayMenu(fname);

}

void addMovie(char * fname) {
    FILE *movies;
    char title[100]="",actor[100]="";
    int year,length;
    movies=fopen(fname,"a");
    char c;
    fprintf(stdout,"\nAdding a movie: ");
    fprintf(stdout,"\nTitle: ");
    fscanf(stdin,"%s",title);
    fprintf(stdout,"\nActor: ");
    fscanf(stdin,"%s",actor);
    fprintf(stdout,"\nDuration: ");
    fscanf(stdin,"%d",&length);
    fprintf(stdout,"\nYear: ");
    fscanf(stdin,"%d",&year);
    
    fprintf(movies,"%s %s %d %d",title,actor,length,year);
    
    fprintf(stdout,"\nMovie %s added successfully..\n\n",title);
    fclose(movies);
    fprintf(stdout,"Press ENTER to continue...\n");
    fscanf(stdin,"%c",&c);
    if (getchar())
        displayMenu(fname);

}

void delMovie(char * fname) {
    FILE *movies;
    char c;
    char title[100]="",actor[100]="",title2[100]="";
    int year,length;
    movies=fopen(fname,"r+");
    
    fprintf(stdout,"\n\nDisplay movie name?: ");
    fscanf(stdin,"%s",title2);
    
    system("touch temp.dat");
    FILE *temp;
    temp=fopen("temp.dat","a+");
    
    while (!feof(movies)) {
        fscanf(movies,"%s %s %d %d\n",title,actor,&length,&year);
        if (strcmp(title,title2))
            fprintf(temp,"%s %s %d %d\n",title,actor,length,year);
    }
    fprintf(stdout,"Movie %s removed successfully...\n\n",title);
    fclose(movies);
    remove(fname);
    rename("temp.dat",fname);
    fclose(temp);
    fprintf(stdout,"Press ENTER to continue...\n");
    fscanf(stdin,"%c",&c);
    if (getchar())
        displayMenu(fname);


}