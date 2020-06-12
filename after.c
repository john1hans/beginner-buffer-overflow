#include <stdio.h>

int main () {
   char yourname[1];
   int yourage[1];                   // edited file code     

    printf("Whats your name?\t");
    scanf("%1[^\n]s", yourname);

    yourname[1] = '\0';
    fflush(stdin);

    printf("How old are you?\t");
    scanf(" %d",&yourage);

    printf("You are %d years old and your name is %s\n\n\n", yourage, yourname);

    return(0);
}
