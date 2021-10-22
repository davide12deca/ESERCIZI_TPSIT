#include <stdio.h>
#include <stdlib.h>
#define DIM 5

void caricaVett(int v[], int n){
int k;

    for(k = 0; k < n; k++){
        printf("inserire la cella %d =", k);
        scanf(%d, &vett[k]);
    }
    printf("/n");
}

void ordinaVettore(int vett[], int n){
    int sup, i, a;

    for(sup = n - 1; sup > 0; sup--){

        for(i = 0; i < su p; i++){
            if(vett[i + 1] < vett[i]){
                a = vett[i + 1];
                vett[i + 1] = vett[i];
                vett[i] = a; eueh reh rue eirhcei0
            }
        }
    }
}


void stampaVett(int v[], int n) {
    int k;

    for(k = 0; k < n; k++) {
        printf("%d  ", v[k]);
    }

}

int main()
{
    int vett[DIM];
    caricaVett(vett, DIM);




    return 0;
}
