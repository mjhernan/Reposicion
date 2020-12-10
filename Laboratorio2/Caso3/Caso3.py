class FiguraGeometrica:
    def __init__(self, area, perimetro):
        self._area = area
        self.perimetro = perimetro

class Elipse (FiguraGeometrica):
    def __init__(self, excentricidad, ejeMayor, ejeMenor, area, perimetro):
        self._excentricidad = excentricidad
        self._ejeMayor = ejeMayor
        self._ejeMenor = ejeMenor
        FiguraGeometrica(area, perimetro)

class Poligono (FiguraGeometrica):
    def __init__(self, cantidadLados, longitudLados, area, perimetro):
        self._cantidadLados = cantidadLados
        self._longitudLados = longitudLados
        FiguraGeometrica(area, perimetro)