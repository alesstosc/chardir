#include <stdio.h>

int main(){

int meseA;
int giornoA;
int meseB;
int giornoB;
int tot;
int totmesi;
int totgiorni;

printf("ins meseA: ");
scanf("%d", &meseA);
printf("ins giornoA: ");
scanf("%d", &giornoA);
printf("ins meseB: ");
scanf("%d", &meseB);
printf("ins giornoB: ");
scanf("%d", &giornoB);

tot=((meseA*30+giornoA)-(meseB*30+giornoB));

printf("giorni totali: %d", tot);

printf("\nmeseA: %d giornoA: %d \nmeseB: %d giornoB: %d\n", meseA, giornoA, meseB, giornoB);

totmesi=tot/30;
totgiorni=tot%30;

printf("Mesi %d Giorni %d di distanza\n", totmesi, totgiorni);






return 0;
}
