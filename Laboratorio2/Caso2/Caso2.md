# CASO2
## Modelado de la clasificacion de vehiculos en carretera

El modelado a resolver para este caso es la clasificacion de vehiculos en carretera. Las clases para trabajar este modelo son las siguientes:

1. Vehiculo
    1. Motocicleta
    2. Bus
    3. Carro
        1. Taxi

Donde cada identacion en la lista anterior representa la herencia de cada clase. Ejemplo, la clase **taxi** hereda de la clase **carro** que a su vez hereda de la clase **vehiculo**

La razon por la que este sistema es posible modelarlo mediante herencia de clases en programacion es porque cada tipo de vehiculo se puede considerar como un objeto, con caracteristicas especificas de cada clase. Sin embargo, todos ellos comparten atributos en comun como la placa, la capacidad de transporte y el tipo de gasolina. Siendo asi, en vez de crear diferentes clases con atributos repetidos se decide crear una sola clase con estos atributos comunes y heredar los mismos para las clases mas especificas.