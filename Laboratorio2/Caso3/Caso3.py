class FiguraGeometrica:
    def __init__(self, area, perimetro):
        self._area = area
        self.perimetro = perimetro

class Elipse (FiguraGeometrica):
    def __init__(self, excentricidad, ejeMayor, ejeMenor):
        self._excentricidad = excentricidad
        self._ejeMayor = ejeMayor
        self._ejeMenor = ejeMenor

class Poligono (FiguraGeometrica):
    def __init__(self, cantidadLados, longitudLados):
        self._cantidadLados = cantidadLados
        self._longitudLados = longitudLados