# CASO1
## Modelado del personal de una universidad

El modelo a resolver para este caso sera la organizacion del personal de una universidad. Para ello, se simplifico su poblacion en **estudiantes**, **maestros** y **personal administrativo**. Las clases a definir son las siguientes:

1. Persona
    1. Estudiante
    2. Empleado
        1. Maestro
        2. Administrativo

Donde cada identacion en la lista anterior representa la herencia de cada clase. Ejemplo: La clase **maestro** hereda de **Empleado** que a su vez hereda de **Persona**

La razon para dividir la organizacion de esta forma y aplicar herencia es que tanto los estudiantes como los tipos de empleado comparten atributos en comun. Como nombre, cedula y edad. Sin embargo, difieren en caracteristicas especificas como por ejemplo, solo los empleados tienen un salario, mientras que solo los estudiantes tienen cursos matriculados. Lo que los convierte en atributos privados de sus clases en especifico.