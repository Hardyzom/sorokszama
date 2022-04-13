#include <stdio.h>
#include <stdlib.h>

#define BUFFER 1000

typedef char * string;

int get_number_of_lines(string fajlneve){
    FILE* fp = fopen(fajlneve,"r");
    char tomb[BUFFER];
    int counter = 0;
    while(fgets(tomb,BUFFER,fp) != NULL){
        counter++;
    }
    fclose(fp);
    return counter;
}

int main(int argc, char *argv[]){
    if(argc==1){
        fprintf(stderr,"Hiba! Adja meg egy szöveges allomany nevét!\n");
        exit(1);
    }
    else{
        printf("%d\n",get_number_of_lines(argv[1]));
    }

return 0;

}