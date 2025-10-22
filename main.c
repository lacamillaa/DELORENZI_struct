#include <stdio.h>

struct Cocktail {
    // NON è un oggetto
    char *nome;
    float price;
    short int alcoholPercent;
};

int main(void) {
    struct Cocktail mojito;
    mojito.nome = "Mojito";
    mojito.price = 3.5f;
    mojito.alcoholPercent = 40;
    return 0;
}