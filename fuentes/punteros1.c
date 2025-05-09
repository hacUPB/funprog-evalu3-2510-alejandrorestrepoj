#include <stdio.h>

int main(int argc, char *argv[])
{
    int y;
    int estatura;
    int *x = NULL; 
    y = 35; 
    y = &y;

    printf("Direccion de memoria de y %p\n", &y);
    printf("Contenido de X %p\n", x);
    printf("Contenido y %d\n", y);

    (*x) = 100;
    printf("Contenido y %d\n", y);

    y = (*x) * 2;

    x = &estatura;

    return 0;
}