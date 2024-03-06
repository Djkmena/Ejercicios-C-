#include <iostream>
#include <string>
#include <ctime>

using namespace std;

struct Fecha {
    int dia;
    int mes;
    int anio;
};

void calcularEdad(Fecha fechaNacimiento) {
    time_t now = time(0);
    tm *ltm = localtime(&now);
    int edad = ltm->tm_year + 1900 - fechaNacimiento.anio;
    if ((ltm->tm_mon + 1 < fechaNacimiento.mes) ||
        (ltm->tm_mon + 1 == fechaNacimiento.mes && ltm->tm_mday < fechaNacimiento.dia)) {
        edad--;
    }
    cout << "La persona tiene " << edad << " anios de edad." << endl;
    if (edad >= 18) {
        cout << "Es mayor de edad." << endl;
    } else {
        cout << "Es menor de edad." << endl;
    }
}

int main() {
    int contadorUsuarios = 0;-
    
    while (contadorUsuarios < 50) {
        string nombre;
        string vecindad;
        Fecha fechaNacimiento;

        cout << "Ingrese el nombre de la persona: ";
        getline(cin, nombre);

        cout << "Ingrese la vecindad de la persona: ";
        getline(cin, vecindad);

        cout << "Ingrese la fecha de nacimiento de la persona : ";
        char slash;
        cin >> fechaNacimiento.dia >> slash >> fechaNacimiento.mes >> slash >> fechaNacimiento.anio;

        cin.ignore(); 

        cout << "Persona registrada:" << endl;
        cout << "Nombre: " << nombre << endl;
        cout << "Vecindad: " << vecindad << endl;
        cout << "Fecha de nacimiento: " << fechaNacimiento.dia << "/" << fechaNacimiento.mes << "/" << fechaNacimiento.anio << endl;

        calcularEdad(fechaNacimiento);

        contadorUsuarios++;
        cout << "Personas  registradas hasta ahora: " << contadorUsuarios << endl;
    }

    cout << "Se han registrado más de 50 Personas. ¡Programa finalizado!" << endl;

}
