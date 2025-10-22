#include <stdio.h>
#include <stdlib.h>

typedef struct {
    // NON è un oggetto
    char *nome;
    float price;
    short int alcoholPercent;
} Cocktail;

void stampa(Cocktail *cocktail);

int main(void) {
    Cocktail *mojito = malloc(sizeof(Cocktail));
    mojito->nome = "Mojito";
    mojito->price = 3.5f;
    mojito->alcoholPercent = 40;
    stampa(mojito);


    Cocktail *angelo = malloc(sizeof(Cocktail));
    angelo->nome = "Angelo Azzurro";
    angelo->price = 8.5f;
    angelo->alcoholPercent = 50;
    stampa(angelo);

    Cocktail *listino_malloc = malloc(10 * sizeof(Cocktail));
    listino_malloc[0] = *mojito;
    listino_malloc[1] = *angelo;

    free(mojito);
    mojito = NULL;
    free(angelo);
    angelo = NULL;
    free(listino_malloc);
    listino_malloc = NULL;
    return 0;
}

void stampa(Cocktail *cocktail) {
    printf("%s:\n", cocktail->nome);
    printf("Price: %.2feur\t", cocktail->price);
    printf("%d%% alcohol", cocktail->alcoholPercent);
}