#include <stdio.h>

int main () {     // original files codes
   char yourname[20];
   int yourage;

    printf("Whats your name?\t");
    scanf("%18[^\n]s", yourname);

    yourname[19] = '\0';
    fflush(stdin);

    printf("How old are you?\t");
    scanf(" %d",&yourage);

    printf("You are %d years old and your name is %s\n\n\n", yourage, yourname);

    system("pause");
    return(0);
}
