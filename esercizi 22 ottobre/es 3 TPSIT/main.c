#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define LUNG 256

void caricaStringa(char frase[], char s[]){
printf("%s", frase);
    fflush(stdin);
    gets(s);
}
void stampaStringhe(char s[], char s1[]){
printf("%s\n", s);
printf("%s\n", s1);
}

bool isPalindromo(char s[]) {
    int n = strlen(s);
    char s1[n];
    bool ok = false;
    int j = n - 1;
    int k = 0;

    while(k < n) {
        *(s1+k) = *(s+j);
        j--;
        k++;

    }
    printf("%s\n", s1);
    //stampaStringhe(s,s1);

    if(strcmp(s1,s) == 0) {
        ok = true;
    }
    return ok;
}


int main(){

    char stringa[LUNG];
    int n;

    caricaStringa("scrivi qualcosa.... ", stringa);

    if(isPalindromo(stringa)){
    printf("la stringa e' palindroma\n");
    }else{
    printf("la stringa non e' palindroma\n");
    }


    printf("\n");
    system("PAUSE");
    return 0;
}
