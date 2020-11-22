#include<stdio.h>
#include<stdlib.h>
#include "pierwszy.h"
#include "drugi.h"
#include "naglowek.h"
//#include "pusz.h"

int main(){
    pole_t p;
    pole_t p1;
    pole_t p2 = {0};
    pole_t p3={0};

    Ustaw(p, 10.0);
    Ustaw(p1, 1012.0);

    UtworzPole2(&p2, 111.55);
    *p2.R = 11.2;
    Ustaw(p2, 332.121);
    printf("......%g || %g\n", p2.r, *p2.R);
    Wypisz(p);
    Wypisz(p1);
    //Wypisz(p2);
    printf("\nPOLA pol %.8g", DodajPola(p,p1));


/*-----------
ALA

------------*/

    return 0;
}