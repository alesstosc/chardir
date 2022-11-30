//sequenza di fibonacci

#include <stdio.h>

int main(void)
{
        int a,b,fibo,count;
	int x;
	printf("limita sequenza a:");
	// x é il limite di ricorsioni del ciclo for
	scanf("%d", &x);
	// inizializzazione valori necessari per il primo ciclo
	a=0;
	b=1;

        for(count=0 ; count<x ; count++)
        {
	// algoritmo
	fibo=a+b; 
	b=a;
	a=fibo;

            printf("%d\n", fibo);
        }

return 0;
}
