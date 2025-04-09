# Reto calculadora
## Analisis del problema

Se solicita una calculadora con la que se pueda, valgame la redundancia, calcular 5 leys distintas dependiendo de la necesidad del usuario. 

Estas leyes son:

1. Ley de Ohm
2. Factor de potencia
3. Resistencia de un conductor 
4. Resistencia de un LED. 

Al elegir una de estas leyes, se tendran que pedir los datos necesarios que se desean calcular. 


### Pequeñas partes del problema:

Cada una de estas leyes tiene distintas variables que determinan el tipo de operacion que se va a aplicar. Por ende, tanto las variables de entrada como de salida se determinaran dentro de cada ley. 

EJ: 

Proceso 1: Elegir que calculo deseo aplicar.

Proceso 2: Por poner un ejemplo, se eligio Ley de Ohm, asi que los datos que apareceran sera: 

-Resistencia

-Corriente

-Voltaje

Y el dato que desee calcular sera el que determine la operacion deseada. 

## Variables de entrada: 

Menu principal:
1. Ley de Ohm
2. Factor de potencia
3. Resistencia de un conductor 
4. Resistencia de un LED. 

### Ley de Ohm

Variables de entrada: 

* Si se eligio calcular resistencia, las variables de entrada seran Corriente y Voltaje.
* Si se eligio calcular corriente, las variables de entrada seran Voltaje y Resistencia.
* Si se eligio calcular Voltaje, las variable de entrada seran Corriente y Resistencia. 

Variable de salida: 

* La variable que se decidio calcular. 

Constantes: 

* En este caso, ninguno. 

Ecuaciones: 

* Voltaje (V) = Corriente (I) * Resistencia (R)
* Corriente = Voltaje / Resistencia
* Resistencia = Voltaje / Corriente

### Factor de potencia 

Variables de entrada: 

* Si se desea calcular potencia activa, las variables de entrada seran potencia aparente y factor de potencia. 
* Si se desea calcular la potencia aparente, las variables de entrada seran potencia activa y factor de potencia.
* Si se desea calcular el factor de potencia, las variables de entrada seran potencia activa y factor de potencia. 

Variable de salida: 

* La variable que se decidio calcular.

Constantes: 

* No hay constantes.

Ecuaciones:

* P = V * I * Cos(phi)
* S = V * I
* Q = Raiz de: P^2 + S^2
* FP = P / S 

### Resistencia de un conductor

Variable de entrada: 
* En caso de elegir oro, aluminio o cobre:
    - Longitud del material
    - Seccion transversal del conductor 
* En caso de elegir otros:
    - Resistividad 
    - Longitud del material
    - Seccion transversal del conductor 

Variable de salida:
* Resistencia electrica.

Constantes: 
* En caso de elegir oro, aluminio o cobre:
    - Resistividad: 20° C
    - Resistividad Au: 2.44 × 10⁻⁸ Ω·m
    - Resistividad Al: 2.65 × 10⁻⁸ Ω·m
    - Resistividad Cu: 1.68 × 10⁻⁸ Ω·m
* En caso de elegir otros: 
    - No hay constantes. 

Ecuaciones:

* R = ρ * L / A

### Resistencia de un LED. 

Variables de entrada: 
* Tension de la fuente en voltios (V)
* Numero de LEDS conectados al circuito 
* Tipo de conexion de ledes: Serie o Paralelo. 
* Tension nominal del LED en voltios (Vf)
* Corriente normal del LED en amperios. 

Variables de salida:
* Valor Resistencia
* Potencia de la resistencia
* Potencia total del circuito 
* Corriente total suministrada por la fuente. 

Constantes:
* No hay.

Ecuaciones:
* R = (Vfuente​−V)/I
* PR = I^2 * R
* Ptotal = Vfuente * I
* I = (Vfuente - V)/R
