#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define LUNG 256

void caricaStringa(char frase[], char stringa[]){
printf("%s", frase);
gets(stringa);
}

bool trovaA(char stringa[]){
bool ok = false;
int k = 0;
while(k < 10 && ok == false){
    if(*(stringa+k) == ('A' || 'a')){
        ok = true;
    }else{
    k++;
    }
}
return ok;
}

int main(){

    char stringa[LUNG];
    bool ok;

    caricaStringa("scrivi qualcosa... ", stringa);

    ok = trovaA(stringa);

    if(ok == true){
        printf("trovata una A nei primi 10 caratteri della stringa\n");
    }else{
        printf("NON trovata una A nei primi 10 caratteri della stringa\n");
    }


    printf("\n");
    system("PAUSE");
    return 0;
}
