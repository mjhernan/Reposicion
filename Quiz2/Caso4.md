# CASO4
# Modelado de la clasificacion de los tipos de animales

El modelo a resolver para este caso sera la clasificacion general de los **animales**. Los cuales pueden dividirse entre **invertebrados** y **vertebrados**. Estos ultimos, a su vez pueden clasificarse en **mamiferos**, **aves** y **reptiles**. Las clases a definir son las siguientes:

1. Animales
    1. Invertebrados
    2. Vertebrados
        1. Mamiferos
        2. Aves
        3. Reptiles

Donde cada iteracion en la lista anterior representa la herencia de cada clase. Ejemplo: la clase **mamiferos** hereda de **vertebrados** que a su vez hereda de la clase **animales**.

La razon para clasificar los animales de esta forma es que todos los animales vertebrados tienen caracteristicas en comun. Por esta razon, se decide crear una clase para esta clasificacion y heredar los tipos de vertebrados de esta misma. Para evitar la duplicacion de parametros entre todas estas clases.