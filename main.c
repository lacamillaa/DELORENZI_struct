#include <stdio.h>

struct Cocktail {
    // NON è un oggetto
    char *nome;
    float price;
    short int alcoholPercent;
};

void stampa(struct Cocktail cocktail);

int main(void) {
    struct Cocktail mojito;
    mojito.nome = "Mojito";
    mojito.price = 3.5f;
    mojito.alcoholPercent = 40;
    stampa(mojito);
    return 0;
}

void stampa(struct Cocktail cocktail) {
    printf("%s:\n", cocktail.nome);
    printf("Price: %.2feur\t", cocktail.price);
    printf("%d%% alcohol", cocktail.alcoholPercent);
}