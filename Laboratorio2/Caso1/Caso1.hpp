class Persona {
    protected:
    std::string nombre;
    unsigned int cedula;

    public:
    Persona::Persona (std::string nombre, unsigned int cedula){
        this.nombre = nombre;
        this.cedula = cedula;
    }
}

class Estudiante : Persona {
    std::string carrera;
    unsigned int creditosAprobados;

    Estudiante::Estudiante (std::string carrera, unsigned int creditosAprobados, std::string nombre, unsigned int cedula) : Persona(nombre, cedula) {
        this.carrera = carrera;
        this.creditosAprobados = creditosAprobados;
    }
}

class Empleados : Persona {
    protected:
    float salario;

    Empleados::Empleados(float salario, std::string nombre, unsigned int cedula) : Persona(nombre, cedula) {
        this.salario = salario;
    }
}

class Maestro : Empleados {
    unsigned int cursosAsignados;
    bool plaza;

    Maestro::Maestro (unsigned int cursosAsignados, bool plaza, float salario, std::string nombre, unsigned int cedula) : Empleados(salario, nombre, cedula) {
        this.cursosAsignados = cursosAsignados;
        this.plaza = plaza;
    }
}

class Administrativo : Empleados {
    std::string puesto;

    Administrativo::Administrativo (std::string puesto, float salario, std::string nombre, unsigned int cedula) : Empleados(salario, nombre, cedula) {
        this.puesto = puesto;
    }
}