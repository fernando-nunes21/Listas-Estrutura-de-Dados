#include <stdio.h>
#include <stdlib.h>
#include "lib.h"
int main(){
    Aluno a[4] = {{2,"Andre",9.5,7.8,8.5},
                         {4,"Ricardo",7.5,8.7,6.8},
                         {1,"Bianca",9.7,6.7,8.4},
                         {3,"Ana",5.7,6.1,7.4}};

	Lista * li = cria_lista();
    int i;
    for(i=0; i < 4; i++)
        insere_lista_inicio(li,a[i]);

	printf("Gerando e imprimindo sub-lista\n");
    Lista * subLista = sub_lista(li, 1, 2);
    imprime_lista(subLista);
    return 0;
}

