#include <stdio.h>

int menu(void)
{
    int* opc;
    printf("Elegir: \n");
    printf(" 1. Ley de Ohm\n 2. Factor de potencia\n 3. Resistencia de un conductor \n 4. Resistencia de un LED.");
    scanf("%d\n", opc);
    return opc;
}

int main()
{
    int opc;
    do
    {
        switch (opc)
        {
        case 1:
            printf("Ha elegido Ley de Ohm. Inserte cual de los tres valores necesita: \n 1. Resistencia\n 2. Corriente. \n 3. Voltaje");
            break;
    
        case 2:
        printf("Ha elegido Factor de potencia. Inserte");
            break;

        case 3: 
        printf("Ha elegido Resistencia de un conductor. Inserte");
            break;

        case 4:
        printf("Ha elegido Resistencia de un LED. Inserte");
            break;
    
        default:
            break;
        }
    } while (opc <= 4);
}