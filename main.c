#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <unistd.h>


#define Name "Micron Text Editor "
#define Version "0.1.0"
#define Cursor "\\>"
#define Commands " HELP = ? \n LIST DIRECTORYS = D \n VERSION = V \n ASCII TO NUMERAL CONVERTER = A \n CLEAR SCREEN = Z \n EXIT SHELL = X \n"

char *Input;
char *ASCII;
int *Loop;
int *Loop2;

int main()
{
printf(Name "Version " Version "\n" "Made By PKM74\n");

while(1 == 1){

    printf(Cursor);
    scanf(" %c", &Input);

    if(Input == 'v' || Input == 'V'){ //VERSION INFO
        printf(Name Version "\n");
    }

    if(Input == '?'){ //HELP CMD
        printf(Commands);
    }

    if(Input == 'z'||Input == 'Z'){ //clear screen :)
    system("cls");
    }

    if(Input == 'X'||Input == 'x'){ //EXIT SHELL
       return 69420;
    }

    if(Input == 'a'||Input == 'A'){ //ASCII to numeral converter :)
        printf("ASCII CONVERTER MODE ON \n");
        for (Loop = 0; Loop < 3 || ASCII == 10; Loop++){
        scanf(" %c", &ASCII);
        printf("NUMBER OF CHARACTER IS %d \n", ASCII);
        }
    }

    if(Input == 'D' || Input == 'd'){ //list dirs
     struct dirent *de;  // Pointer for directory entry

    // opendir() returns a pointer of DIR type.
    DIR *dr = opendir(".");

    if (dr == NULL)  // opendir returns NULL if couldn't open directory
    {
        printf("ERROR NO DIRECTORYS!" );
        return 256;
    }

    // Refer http://pubs.opengroup.org/onlinepubs/7990989775/xsh/readdir.html
    // for readdir()
    while ((de = readdir(dr)) != NULL)
            printf("%s\n", de->d_name);

    closedir(dr);


    }//else{
        //printf("Invalid Command");
    //};
}

return 1;
};

int Editor()
{

    main();
};
