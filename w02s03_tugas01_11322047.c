/*
    NIM  : Olivia Apriani
    Nama : 11322047
    Nama Program : w02s03_tugas01_11322047.c
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _product{
   int ID;
   char *name;
   char *spec ;
   float price;
}LAPTOP;

//Fungsi Untuk Set Nilai Elemen ke dalam struct PRODUK
LAPTOP MakeLAPTOP (int ID, char *name, char *spec, float price){
    LAPTOP P;
    P.ID = ID;
    P.name = (char*) malloc(strlen(name)+1);
    strcpy(P.name, name);
    P.spec = (char*) malloc(strlen(spec)+1);
    strcpy(P.spec, spec);
    P.price = price;
    return P;
}

void BacaLAPTOP (LAPTOP *P){
   int ID;
   char name[100];
   char spec[100] ;
   float price;
    printf("ID : "); scanf("%d", &ID);
    printf("NAME LAPTOP : "); scanf("%s",&name);
    printf("SPEC LAPTOP : "); scanf("%s", &spec);
    printf("PRICE LAPTOP : "); scanf("%f", &price);
    *P = MakeLAPTOP(ID,name,spec,price);
}
void TulisLAPTOP (LAPTOP P){
    printf("ID :%d\n", P.ID);
    printf("NAME : %s\n", P.name);
    printf("SPEC : %s\n", P.spec); 
    printf("PRICE : %.2f\n",P.price); 
}
int main(){
    LAPTOP P;

    BacaLAPTOP(&P);
    printf("==========DATA LAPTOP==========\n");
    TulisLAPTOP(P);
    printf("\n");

    return 0;
}