#include <stdio.h>

int main () {

// input
printf("inserisci la percentuale del prodotto:");
scanf(" %d", &prezzo);

printf("inserisci la percentusle di sconto:");
scanf("%d", &sconto);

// calcoli
valore_sconto = prezzo* sconto/ 100;

// output 
printf (" \n --- risultati--- \n");
printf(" prezzo pieno: %d euro\n" ,prezzo);
printf("sconto effettuato: %d euro\n ", valore_sconto);
printf(" prezzo scontato: %d euro\n" , prezzo_scontato);

return 0;
}