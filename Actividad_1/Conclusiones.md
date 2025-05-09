# Preguntas

### ¿Cuál es la función principal del **preprocesador** en C?

El preprocesador realiza operaciones preliminares en archivos de C y C++ antes de pasarlos al compilador.

### ¿Por qué se dice que el **código objeto** (.o) no es directamente ejecutable?

Los archivos de objeto contienen código de máquina e información sobre símbolos externos, mientras que los archivos ejecutables contienen código de máquina totalmente vinculado, bibliotecas, recursos y metadatos necesarios para la ejecución.

### ¿Qué diferencia existe entre el **código ensamblador** (.s) y el **código objeto** (.o)?

El código ensamblador (.s) es un archivo legible por humanos que contiene instrucciones en lenguaje ensamblador, mientras que el código objeto (.o) es un archivo binario con instrucciones en código máquina, preparado para ser enlazado y ejecutado.

### ¿Para qué sirve la opción `S` en GCC?

De man gcc : -s Elimina toda la tabla de símbolos y la información de reubicación del ejecutable 

### ¿Qué sucede si omitimos la etapa de **linker**?

El programa no se podrá ejecutar correctamente, ya que el linker es responsable de unir (o enlazar) los diferentes módulos o archivos objeto generados durante la compilación.
