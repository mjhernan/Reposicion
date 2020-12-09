class Vehiculo {
    protected:
    unsigned int placa;
    unsigned int capacidadPersonas;
    std::string gasolina;
    std::string marca;

    Vehiculo::Vehiculo (unsigned int placa, unsigned int capacidadPersonas, std::string gasolina, std::string marca) {
        this.placa = placa;
        this.capacidadPersonas = capacidadPersonas;
        this.gasolina = gasolina;
        this.marca = marca;
    }
}

class Motocicleta : Vehiculo {
    std::string cilindraje;

    Motocicleta::Motocicleta(std::string cilindraje) {
        this.cilidraje = cilindraje;
    }
}

class Bus : Vehiculo {
    float tarifa;
    std::string ruta;

    Bus::Bus (float tarifa, std::string ruta) {
        this.tarifa = tarifa;
        this.ruta = ruta;
    }
}

class Carro : Vehiculo {
    protected:
    std::string modelo;
    std::string color;

    Carro::Carro (std::string modelo, std::string color) {
        this.modelo = modelo;
        this.color = color;
    }
}

class Taxi : Carro {
    float tarifa;
    std::string conductor;
    std::string provincia;

    Taxi::Taxi (float tarifa, std::string conductor, std::string provincia) {
        this.tarifa = tarifa;
        this.conductor = conductor;
        this.provincia = provincia;
    }
}