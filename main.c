#include <stdio.h>

int main() {
    int num,cont_positivo=0,cont_negativo=0,sumatorio=0;
    for (int i = 0; i < 20; ++i) {
        printf("Introduce un numero: ");
        scanf("%d",&num);
        sumatorio+=num;
        if (num<0)
            cont_negativo++;
        else
            cont_positivo++;
    }
    printf("\nCantidad de numeros positivos: %d\n",cont_positivo);
    printf("Cantidad de numeros negativos: %d\n",cont_negativo);
    printf("Suma de todos los numeros: %d",sumatorio);
    return 0;
}
