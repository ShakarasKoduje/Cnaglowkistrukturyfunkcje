
#include <stdio.h>

#ifndef STRUKTURY_H
#include "enumy.c"


typedef struct pole_t pole_t;
typedef struct przedmiot_t przedmiot_t;





struct pole_t{

    double r;
    double *R;

};

struct przedmiot_t{
    char *nazwa;
    char *opis;
    rodzaj rodzaj;
    //enum rodzaj {BRON, JEDZENIE, UZYTKOWA, PANCERZ, LECZENIE} rodzaj;
};


#define STRUKTURY_H
#endif
