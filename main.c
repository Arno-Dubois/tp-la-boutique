#include <stdio.h>

int main() {
    float applePrice = 3;
    float sodaPrice = 7;
    float cakePrice = 1;
    double selectedPrice = 0;
    char selectedProduct;

    printf("Quel produit souhaitez vous acheter (\"p\" pour pomme, \"s\" pour soda ou \"g\" pour gâteau) :\n");
    scanf("%c", &selectedProduct);

    if(selectedProduct == 'p') selectedPrice = applePrice;
    else if(selectedProduct == 's') selectedPrice = sodaPrice;
    else if(selectedProduct == 'g') selectedPrice = cakePrice;
    else { printf("Erreur produit invalide !"); return 0;}

    selectedPrice*=1.20;

    printf("Vous devez payer %lf¤", selectedPrice);

    return 0;
}
