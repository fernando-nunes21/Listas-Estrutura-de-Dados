#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "lib.h"

int main (){
 	Aluno aluno1 = {1, "Fulano", 9.0, 9.5, 10.0};
 	Aluno aluno2 = {2, "Ciclano", 9.0, 5.5, 10.0};
 	Aluno aluno3 = {3, "Beltrano", 6.0, 9.5, 10.0};

 	Lista * li = cria_lista();

 	insere_lista_inicio(li, aluno3);
 	insere_lista_inicio(li, aluno2);
 	insere_lista_inicio(li, aluno1);

 	printf("----------------------------- \n");
	printf("Sub-Lista Invalida\n");
 	Lista * subLista = sub_lista(li, 0, 4);
 	printf("----------------------------- \n");
 	printf("Sub-Lista Valida\n");
 	subLista = sub_lista(li, 1, 2);
 	imprime_lista(subLista);
 	printf("----------------------------- \n");


   return 0;
}
