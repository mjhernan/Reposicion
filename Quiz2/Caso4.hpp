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

    Invertebrados::Invertebrados (std::string habitat) {
        this.habitat = habitat;
    }
}

class Vertebrados : Animal {
    protected:
    int cantidadHuesos;

    Vertebrados::Vertebrados (int huesos){
        this.cantidadHuesos = huesos;
    }
}

class Mamiferos : Vertebrados {
    std::string tipoPelaje;

    Mamiferos::Mamiferos (std::string pelaje) {
        this.tipoPelaje = pelaje;
    }
}

class Aves : Vertebrados {
    std::string tipoPlumas;

    Aves::Aves (std::string plumas){
        this.tipoPlumas = plumas;
    }
}

class Reptiles : Vertebrados {
    std::string tipoEscamas;

    Reptiles::Reptiles (std::string escamas) {

    }
}