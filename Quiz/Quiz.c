#include <stdio.h>

int main()
{
    int stock, compras;

        printf("Bienvenido al sistema de inventario. Stock disponible: 50\n");
        stock = 50;
        while (stock > 0)
        {
            printf("Cuanto desea comprar: \n");
            scanf("%d\n", &compras);
            if (compras <= stock)
            {
                stock = stock - compras;
                printf("Compra realizada. Stock restante: %d\n", stock);
            }
            else
            {
                printf("No hay suficientes productos disponibles.");
            }
        }
        return 0;
}