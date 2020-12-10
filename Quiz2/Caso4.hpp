class Animal {
    protected:
    int esperanzaVida;
    std::string nombre;

    Animal::Animal (int esperanzaVida, std::string nombre) {
        this.esperanzaVida = esperanzaVida;
        this.nombre = nombre;
    }
}

class Invertebrados : Animal {
    std::string habitat;

    Invertebrados::Invertebrados (std::string habitat, int esperanzaVida, std::string nombre) : Animal(esperanzaVida, nombre) {
        this.habitat = habitat;
    }
}

class Vertebrados : Animal {
    protected:
    int cantidadHuesos;

    Vertebrados::Vertebrados (int cantidadHuesos, int esperanzaVida, std::string nombre) : Animal(esperanzaVida, nombre) {
        this.cantidadHuesos = cantidadHuesos;
    }
}

class Mamiferos : Vertebrados {
    std::string tipoPelaje;

    Mamiferos::Mamiferos (std::string pelaje, int cantidadHuesos, int esperanzaVida, std::string nombre) : Vertebrados(cantidadHuesos, esperanzaVida, nombre) {
        this.tipoPelaje = pelaje;
    }
}

class Aves : Vertebrados {
    std::string tipoPlumas;

    Aves::Aves (std::string plumas, int cantidadHuesos, int esperanzaVida, std::string nombre) : Vertebrados(cantidadHuesos, esperanzaVida, nombre) {
        this.tipoPlumas = plumas;
    }
}

class Reptiles : Vertebrados {
    std::string tipoEscamas;

    Reptiles::Reptiles (std::string escamas, int cantidadHuesos, int esperanzaVida, std::string nombre) : Vertebrados(cantidadHuesos, esperanzaVida, nombre) {

    }
}