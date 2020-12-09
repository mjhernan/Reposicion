class Animal:
  def __init__(self, esperanzaVida, nombre):
    self._esperanzaVida = esperanzaVida
    self._nombre = nombre

class Vertebrados (Animal):
  def __init__(self, cantidadHuesos):
    self._cantidadHuesos = cantidadHuesos

class Mamiferos (Vertebrados):
  def __init__(self, tipoPelaje):
    self._tipoPelaje = tipoPelaje

class Aves (Vertebrados):
  def __init__(self, tipoPlumas):
    self._tipoPlumas = tipoPlumas

class Reptiles (Vertebrados):
  def __init__(self, tipoEscamas):
    self._tipoEscamas = tipoEscamas;