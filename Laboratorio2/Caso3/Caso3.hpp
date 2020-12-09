class FiguraGeometrica {
    protected:
    float area;
    float perimetro;
    
    FiguraGeometrica::FiguraGeometrica (float area, float perimetro) {
        this.area = area;
        this.perimetro = perimetro;
    }
}

class Elipse : FiguraGeometrica {
    float excentricidad;
    float ejeMayor;
    float ejeMenor;

    Elipse::Elipse (float excentricidad, float ejeMayor, float ejeMenor) {
        this.excentricidad = excentricidad;
        this.ejeMayor = ejeMayor;
        this.ejeMenor = ejeMenor;
    }
}

class Poligono : FiguraGeometrica {
    protected:
    int cantidadLados;
    float longitudLados;

    Poligono::Poligono (int cantidadLados, float longitudLados) {
        this.cantidadLados = cantidadLados;
        this.longitudLados = longitudLados;
    }
}