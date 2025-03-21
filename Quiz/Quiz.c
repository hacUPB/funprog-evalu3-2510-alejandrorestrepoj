#include <stdio.h>

int main()
{
    int stock, compras;

        printf("Bienvenido al sistema de inventario. Stock disponible: 50\n"); //Aqui se agrego \n
        stock = 50;
        while (stock > 0) //Se elimino el ";" que afectaba al codigo.
        {
            printf("Cuanto desea comprar: \n");
            scanf("%d\n", &compras); //Se agrego ; 
            if (compras <= stock)
            {
                stock = stock - compras; //Se agrego ;
                printf("Compra realizada. Stock restante: %d\n", stock);
            }
            else
            {
                printf("No hay suficientes productos disponibles.");
            }
        }
        return 0;
}
