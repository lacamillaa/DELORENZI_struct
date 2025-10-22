#include <stdio.h>

typedef struct {
    // NON è un oggetto
    char *nome;
    float price;
    short int alcoholPercent;
} Cocktail;

void stampa(Cocktail cocktail);

int main(void) {
    Cocktail mojito;
    mojito.nome = "Mojito";
    mojito.price = 3.5f;
    mojito.alcoholPercent = 40;
    stampa(mojito);
    return 0;
}

void stampa(Cocktail cocktail) {
    printf("%s:\n", cocktail.nome);
    printf("Price: %.2feur\t", cocktail.price);
    printf("%d%% alcohol", cocktail.alcoholPercent);
}