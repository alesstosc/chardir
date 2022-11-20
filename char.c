#include <stdio.h>
#include <string.h>

// il main cosi formattato accetta input da comando
int main(int argc, char** argv){
	// inizia una stringa
	// registrata in mono vettore
	char a[]="ciao";
	// controlla se nel vettore vi sia almeno un dato
	if (argc==1){

	printf("non hai inserito parametri\n");
	return 0;

}	

	//iniz vettore mono
	char b[]={'R','o','b','e','r','t','o','\0'};
	int z;
	// stampa la stringa
	printf ("\n%s\n", b);
	// stampa il valore immesso a lato del comando
	printf ("%s\n", argv[1]);
	// confronto tra 2 stringhe
	// funzione strcmp ritorna boleano 0 se stringhe uguali
	// lib string.h
	z = strcmp(argv[1],b);
	if (z==0){

		printf("due dati uguali\n");

}else{

		printf("due dati diversi\n");

}
	// printf con etichetta
	printf ("%d Risultato booleano se 0 == uguali: ",z);

	printf ("\n%s Parola di riferimento: \n", argv[1]);



return 0;
}
