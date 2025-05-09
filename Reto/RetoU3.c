#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int menu(void)
{
    int opc;
    printf("Elegir: \n");
    printf(" 1. Ley de Ohm\n 2. Factor de potencia\n 3. Resistencia de un conductor \n 4. Resistencia de un LED. \n");
    scanf("%d", &opc);
    return opc;
}

void ley_de_ohm();
void factor_potencia();
void resistencia_conductor();
void resistencia_LED();

int main()
{
    int opc = menu();
    do
    {
        opc = menu();
        switch (opc)
        {
        case 1:
            printf("Ha elegido Ley de Ohm.");
            ley_de_ohm();
            break;
    
        case 2:
            printf("Ha elegido Factor de potencia. Inserte");
            factor_potencia();
            break;

        case 3: 
            printf("Ha elegido Resistencia de un conductor. Inserte");
            resistencia_conductor();
            break;

        case 4:
            printf("Ha elegido Resistencia de un LED. Inserte");
            resistencia_LED();
            break;
    
        default:
            break;
        }
    } while (opc != 5);
    return 0;
}


// Ley de Ohm: V = I * R
// Factor de potencia: cos(ϕ) = P / S
// Resistencia de un conductor: R = ρ * (L / A)
// Resistencia de un LED: R = (Vcc - Vled) / Iled

void ley_de_ohm()
{
    int opc;
    float V, I, R;
    printf("Inserte cual de los tres valores necesita: \n 1. Resistencia\n 2. Corriente. \n 3. Voltaje\n 4. Ingrese cualquier otro numero si no desea aplicar Ley de Ohm\n");
    scanf("%d", &opc);
    switch (opc)
    {
        case 1:
            printf("Insertar el voltaje: \n");
            scanf("%f", &V);
            printf("Insertar corriente: \n");
            scanf("%f", &I);
            R = V / I;
            printf("La resistencia obtenida es: %f, \n", R);
            break;
        case 2:
            printf("Insertar el voltaje: \n");
            scanf("%f", &V);
            printf("Insertar la resistencia: \n");
            scanf("%f", &R);
            I = V / R;
            printf("La corriente obtenida es: %f, \n", I);
            break;
        case 3:
            printf("Insertar la resistencia: \n");
            scanf("%f", &R);
            printf("Insertar corriente: \n");
            scanf("%f", &I);
            V = I * R;
            printf("El voltaje obtenido es: %f, \n", V);
            break;
        default:
            break;
    }
}

// Calcular factor de potencia, potencia activa o aparente.
// Potencia activa: P = V * I * cos(ϕ)
// Potencia aparente: S = V * I
// Factor de potencia: cos(ϕ) = P / S
void factor_potencia()
{
    int opc;
    float P, S, V, I, cos_phi, Q;
    printf("Inserte cual de los tres valores necesita: \n 1. Potencia activa\n 2. Potencia aparente. \n 3. Factor de potencia\n 4. Ingrese cualquier otro numero si no desea aplicar factor de potencia.\n");
    scanf("%d", &opc);
    switch (opc)
    {
        case 1:
            printf("Insertar voltaje: \n");
            scanf("%f", &V);
            printf("Insertar corriente: \n");
            scanf("%f", &I);
            printf("Insertar factor de potencia: \n");
            scanf("%f", &cos_phi);
            P = V * I * cos_phi;
            printf("La potencia activa obtenida es: %f, \n", P);
            S = V * I;
            Q = sqrt((S * S) - (P * P));
            printf("La potencia reactiva obtenida es: %f, \n", Q); 
            printf("El coseno del angulo es: %f, \n", cos_phi);                       
            break;
        case 2:
            printf("Insertar voltaje: \n");
            scanf("%f", &V);
            printf("Insertar corriente: \n");
            scanf("%f", &I);
            printf("Insertar factor de potencia: \n");
            scanf("%f", &cos_phi);
            // Factor de potencia = cos(phi)
            S = V * I;
            printf("La potencia aparente obtenida es: %f, \n", S);
            P = V * I * cos_phi;
            Q = sqrt((S * S) - (P * P));
            printf("La potencia reactiva obtenida es: %f, \n", Q);
            printf("El coseno del angulo es: %f, \n", cos_phi);                       
            break;
        case 3:
            printf("Insertar potencia activa: \n");
            scanf("%f", &P);
            printf("Insertar potencia aparente: \n");
            scanf("%f", &S);
            cos_phi = P / S;
            printf("El factor de potencia (cos_phi) obtenido es: %f, \n", cos_phi);
            Q = sqrt((S * S) - (P * P));
            printf("La potencia reactiva obtenida es: %f, \n", Q);
            break;
        default:
            break;
    }
}

void resistencia_conductor()
{
    int opc;
    float R, rho, rho_0, L, A, T, a;
    printf("Inserte cual material del conductor para el calculo de la resistencia: \n 1. Cobre\n 2. Aluminio\n 3. Plata\n 4. Otros.\n 5. Ingrese cualquier otro numero si no desea aplicar resistencia de un conductor.\n");
    scanf("%d", &opc);
    switch (opc)
    {
        case 1:
            rho = 1.68 * pow(10, -8); // Resistividad del cobre
            printf("Insertar la longitud del conductor (m): \n");
            scanf("%f", &L);
            printf("Insertar el area de la seccion transversal del conductor (m^2): \n");
            scanf("%f", &A);
            R = rho * (L / A);
            printf("La resistencia del conductor es: %f ohmios, \n", R);
            break;
        case 2:
            rho = 2.65 * pow(10, -8); // Resistividad del aluminio
            printf("Insertar la longitud del conductor (m): \n");
            scanf("%f", &L);
            printf("Insertar el area de la seccion transversal del conductor (m^2): \n");
            scanf("%f", &A);
            R = rho * (L / A);
            printf("La resistencia del conductor es: %f ohmios, \n", R);
            break;
        case 3:
            rho = 1.59 * pow(10, -8); // Resistividad de la plata
            printf("Insertar la longitud del conductor (m): \n");
            scanf("%f", &L);
            printf("Insertar el area de la seccion transversal del conductor (m^2): \n");
            scanf("%f", &A);
            R = rho * (L / A);
            printf("La resistencia del conductor es: %f ohmios, \n", R);
            break;
        case 4:
            printf("Insertar la resistividad del material a una temperatura de referencia de 20 grados centigrados: \n");
            scanf("%f", &rho_0);
            printf("Insertar la temperatura a la que queremos calcular la resistividad: \n");
            scanf("%f", &T);
            printf("Insertar el coeficiente de temperatura de resistividad del material: \n");
            scanf("%f", &a);
            rho = rho_0 * (1 + a * (T - 20)); // Coeficiente de temperatura de resistividad del cobre
            printf("Insertar la longitud del conductor (m): \n");   
            scanf("%f", &L);
            printf("Insertar el area de la seccion transversal del conductor (m^2): \n");
            scanf("%f", &A);
            R = rho * (L / A);
            printf("La resistencia del conductor es: %f ohmios, \n", R);
            break;
        default:
            break;
    }
}

void resistencia_LED()
{
    float Tf, num_leds, opc, Vf, If, R, P, Pt, It;
    printf("Insertar los siguientes valores: \n");
    printf("1. Tension de la fuente en voltios: \n");
    scanf("%f", &Tf);
    printf("2. Numero de LEDs conectados al circuito: \n");
    scanf("%f", &num_leds);
    printf("3. Tipo de conexion. \n 1. En serie \n 2. En paralelo \n");
    scanf("%f", &opc);
    printf("4. Tension nominal de los LEDs en voltios: \n");
    scanf("%f", &Vf);
    printf("5. Corriente nominal de los LEDs en amperios: \n");
    scanf("%f", &If);
    if (opc == 1)
    {
        R = (Tf - (num_leds * Vf)) / If;
        printf("La resistencia del LED es: %f ohmios, \n", R);
        P = R * If * If;
        printf("La potencia disipada en la resistencia es: %f watts, \n", P);
        Pt = P * num_leds;
        printf("La potencia total disipada en la resistencia es: %f watts, \n", Pt);
        It = If * num_leds;
        printf("La corriente total en el circuito es: %f amperios, \n", It);
    }
    else if (opc == 2)
    {
        R = (Tf - Vf) / If;
        printf("La resistencia del LED es: %f ohmios, \n", R);
        P = R * If * If;
        printf("La potencia disipada en la resistencia es: %f watts, \n", P);
        Pt = P * num_leds;
        printf("La potencia total disipada en la resistencia es: %f watts, \n", Pt);
        It = If * num_leds;
        printf("La corriente total en el circuito es: %f amperios, \n", It);
    }
    else
    {
        printf("Opcion no valida.\n");
    }
}