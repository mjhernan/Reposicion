# CASO3
# Clasificacion de figuras geometricas

El modelo a resolver para este caso sera la clasificacion de las **figuras geometricas**. Estas se dividiran entre **elipses** y **poligonos** que seran considerados como regulares para efectos de este programa. Las clases a definir son las siguientes:

1. FiguraGeometrica
    1. Elipses
    2. Poligonos

Donde cada iteracion en la lista anterior representa la herencia de cada clase. Ejemplo, **poligonos** hereda directamente de **FigurasGeometricas**

Esta division se realiza ya que entre todas las figuras geometricas se encuentran dos grandes grupos, las elipses que son en esencia figuras circulares o semi-circulares y los poligonos, que son figuras formadas por segmentos de linea recta. Sin embargo, a pesar de sus diferencias, ambas clasificaciones poseen siempre dos atributos en comun, que son el area y el perimetro. Por esta razon, se puede aplicar herencia en este modelo.