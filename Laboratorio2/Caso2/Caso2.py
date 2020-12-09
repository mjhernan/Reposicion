class Vehiculo:
    def __init__(self, placa, capacidadPersonas, gasolina, marca):
        self._placa = placa
        self._capacidadPersonas = capacidadPersonas
        self._gasolina = gasolina
        self._marca = marca

class Moto (Vehiculo):
    def __init__(self, cilindraje):
        self.cilindraje = cilindraje

class Bus (Vehiculo):
    def __init__(self, tarifa, ruta):
        self.tarifa = tarifa
        self.ruta = ruta

class Carro (Vehiculo):
    def __init__(self, modelo, color):
        self._modelo = modelo
        self._color = color

class Taxi (Carro):
    def __init__(self, tarifa, conductor, provincia):
        self.tarifa = tarifa
        self.conductor = conductor
        self.provincia = provincia