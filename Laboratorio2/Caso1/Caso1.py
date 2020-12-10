class Persona:
    def __init__(self, nombre, cedula):
        self._nombre = nombre
        self._cedula = cedula

class Estudiante (Persona):
    def __init__(self, carrera, creditosAprobados, nombre, cedula):
        self.carrera = carrera
        self.creditosAprobados = creditosAprobados
        Persona(nombre, cedula)

class Empleados (Persona):
    def __init__(self, salario, nombre, cedula):
        self._salario = salario
        Persona(nombre, cedula)

class Maestro (Empleados):
    def __init__(self, cursosAsignados, plaza, salario, nombre, cedula):
        self.cursosAsignados = cursosAsignados
        self.plaza = plaza
        Empleados(salario, nombre, cedula)

class Administrativo (Empleados):
    def __init__(self, puesto, salario, nombre, cedula):
        self.puesto = puesto
        Empleados(salario, nombre, cedula)