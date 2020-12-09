class Persona:
    def __init__(self, nombre, cedula, edad):
        self._nombre = nombre
        self._cedula = cedula
        self._edad = edad

class Estudiante (Persona):
    def __init__(self, carnet, carrera, creditosAprobados):
        self.carnet = carnet
        self.carrera = carrera
        self.creditosAprobados = creditosAprobados

class Empleados (Persona):
    def __init__(self, salario, departamento):
        self._salario = salario
        self._departamento = departamento

class Maestro (Empleados):
    def __init__(self, cursosAsignados, plaza):
        self.cursosAsignados = cursosAsignados
        self.plaza = plaza

class Administrativo (Empleados):
    def __init__(self, puesto):
        self.puesto = puesto