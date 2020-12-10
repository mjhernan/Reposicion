class Vehiculo:
    def __init__(self, placa, capacidadPersonas, marca):
        self._placa = placa
        self._capacidadPersonas = capacidadPersonas
        self._marca = marca

class Moto (Vehiculo):
    def __init__(self, cilindraje, placa, capacidadPersonas, marca):
        self.cilindraje = cilindraje
        Vehiculo(placa, capacidadPersonas, marca)

class Bus (Vehiculo):
    def __init__(self, tarifa, ruta, placa, capacidadPersonas, marca):
        self.tarifa = tarifa
        self.ruta = ruta
        Vehiculo(placa, capacidadPersonas, marca)

class Carro (Vehiculo):
    def __init__(self, modelo, placa, capacidadPersonas, marca):
        self._modelo = modelo
        Vehiculo(placa, capacidadPersonas, marca)

class Taxi (Carro):
    def __init__(self, tarifa, conductor, provincia, modelo, placa, capacidadPersonas, marca):
        self.tarifa = tarifa
        self.conductor = conductor
        self.provincia = provincia
        Carro(modelo, placa, capacidadPersonas, marca)