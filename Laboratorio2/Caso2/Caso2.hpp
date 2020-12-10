class Vehiculo {
    protected:
    unsigned int placa;
    unsigned int capacidadPersonas;
    std::string marca;

    Vehiculo::Vehiculo (unsigned int placa, unsigned int capacidadPersonas, std::string marca) {
        this.placa = placa;
        this.capacidadPersonas = capacidadPersonas;
        this.marca = marca;
    }
}

class Motocicleta : Vehiculo {
    std::string cilindraje;

    Motocicleta::Motocicleta(std::string cilindraje, unsigned int placa, unsigned int capacidadPersonas, std::string marca) : Vehiculo(placa, capacidadPersonas, marca) {
        this.cilidraje = cilindraje;
    }
}

class Bus : Vehiculo {
    float tarifa;
    std::string ruta;

    Bus::Bus (float tarifa, std::string ruta, unsigned int placa, unsigned int capacidadPersonas, std::string marca) : Vehiculo(placa, capacidadPersonas, marca) {
        this.tarifa = tarifa;
        this.ruta = ruta;
    }
}

class Carro : Vehiculo {
    protected:
    std::string modelo;

    Carro::Carro (std::string modelo, unsigned int placa, unsigned int capacidadPersonas, std::string marca) : Vehiculo(placa, capacidadPersonas, marca) {
        this.modelo = modelo;
    }
}

class Taxi : Carro {
    float tarifa;
    std::string conductor;
    std::string provincia;

    Taxi::Taxi (float tarifa, std::string conductor, std::string provincia, std::string modelo, unsigned int placa, unsigned int capacidadPersonas, std::string marca) : Carro(modelo, placa, capacidadPersonas, marca) {
        this.tarifa = tarifa;
        this.conductor = conductor;
        this.provincia = provincia;
    }
}