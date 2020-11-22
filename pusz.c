#include <stdio.h>

#include "struktury.h"

void Wypisz(pole_t p){

    printf("Pole %g\n" , *p.R);

}

double DodajPola(pole_t p1, pole_t p2){
    return *p1.R + *p2.R;
}

void Ustaw(pole_t p, double n){
    *p.R = 0 + n;
    printf("USTAWIAM %g\n", *p.R);
}

pole_t UtworzPole(double r){
    pole_t p={0};
    return p;
}

void UtworzPole2(pole_t *p, double r){
    p->r = r;
    p->R = &r;
}

void StworzPrzedmiot(przedmiot_t *p, char *nazwa, char *opis, rodzaj r){    
    p->nazwa = nazwa;
    p->opis = opis;
    p->rodzaj = r;
}

