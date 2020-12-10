class Animal:
  def __init__(self, esperanzaVida, nombre):
    self._esperanzaVida = esperanzaVida
    self._nombre = nombre

class Invertebrados (Animal):
  def __init__(self, habitat, esperanzaVida, nombre):
    self.habitat = habitat
    Animal(esperanzaVida, nombre)

class Vertebrados (Animal):
  def __init__(self, cantidadHuesos, esperanzaVida, nombre):
    self._cantidadHuesos = cantidadHuesos
    Animal(esperanzaVida, nombre)

class Mamiferos (Vertebrados):
  def __init__(self, tipoPelaje, cantidadHuesos, esperanzaVida, nombre):
    self._tipoPelaje = tipoPelaje
    Vertebrados(cantidadHuesos, esperanzaVida, nombre)

class Aves (Vertebrados):
  def __init__(self, tipoPlumas):
    self._tipoPlumas = tipoPlumas
    Vertebrados(cantidadHuesos, esperanzaVida, nombre)

class Reptiles (Vertebrados):
  def __init__(self, tipoEscamas):
    self._tipoEscamas = tipoEscamas;
    Vertebrados(cantidadHuesos, esperanzaVida, nombre)