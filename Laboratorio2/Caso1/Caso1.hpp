class Persona {
    protected:
    std::string nombre;
    unsigned int cedula;
    unsigned int edad;

    Persona::Persona (std::string nombre, unsigned int cedula, unsigned int edad){
        this.nombre = nombre;
        this.cedula = cedula;
        this.edad = edad;
    }
}

class Estudiante : Persona {
    unsigned int carnet;
    std::string carrera;
    unsigned int creditosAprobados;

    Estudiante::Estudiante (unsigned int carnet, std::string carrera, unsigned int creditosAprobados) {
        this.carnet = carnet;
        this.carrera = carrera;
        this.creditosAprobados = creditosAprobados;
    }
}

class Empleados : Persona {
    protected:
    float salario;
    std::string departamento;

    Empleados::Empleados(float salario, std::string departamento) {
        this.salario = salario;
        this.departamento = departamento;
    }
}

class Maestro : Empleados {
    unsigned int cursosAsignados;
    bool plaza;

    Maestro::Maestro (unsigned int cursosAsignados, bool plaza) {
        this.cursosAsignados = cursosAsignados;
        this.plaza = plaza;
    }
}

class Administrativo : Empleados {
    std::string puesto;

    Administrativo::Administrativo (std::string puesto) {
        this.puesto = puesto;
    }
}