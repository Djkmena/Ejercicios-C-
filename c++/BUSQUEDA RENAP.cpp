#include <iostream>
#include <string>
using namespace std;

int main() {
    int numPersonas;

    cout << "Ingrese el numero de personas: ";
    cin >> numPersonas;

    string nameP[numPersonas];
    string lugarP[numPersonas];
    int anios[numPersonas];
    int mes[numPersonas];
    int dia[numPersonas];

    for (int i = 0; i < numPersonas; i++) {
        cout << "\nIngrese el nombre " << i + 1 << ": ";
        cin >> nameP[i];
        cout << "Ingrese la vecindad: ";
        cin >> lugarP[i];
         cout << "Ingrese dia de nacimiento: ";
        cin >> dia[i];
        cout << "Ingrese mes de nacimiento : ";
        cin >> mes[i];
        cout << "Ingrese anio de nacimiento:  ";
        cin >> anios[i];
        
       
    }

    cout << "\n-------------- Personas ingresadas --------------" << endl;

    for (int i = 0; i < numPersonas; i++) {
        cout << "\n-------------Persona " << i + 1 << "------------------" << endl;
        cout << "Nombre: " << nameP[i] << endl;
        cout << "Vecindad: " << lugarP[i] << endl;
        cout << "Fecha de nacimiento: " << anios[i] << "  " << mes[i] << "  " << dia[i] << endl;

        if (anios[i] <= 2006 && (mes[i] < 3 || (mes[i] == 3 && dia[i] < 30))) {
            cout << "La persona es mayor de edad";
        } else {
            cout << "La persona es menor de edad";
        }
        cout << endl;
    }

    
    string nombreBusqueda;
    cout << "\nIngrese el nombre de la persona a buscar: ";
    cin >> nombreBusqueda;

    
    for (int i = 0; i < numPersonas; i++) {
        if (nameP[i] == nombreBusqueda) {
            cout << "\n----------- Resultado de la busqueda ------------" << endl;
            cout << "Nombre: " << nameP[i] << endl;
            cout << "Vecindad: " << lugarP[i] << endl;
            cout << "Fecha de nacimiento: " << anios[i] << "  " << mes[i] << "  " << dia[i] << endl;
            return 0;  
        }
    }

    cout << "\nLa persona no fue encontrada." << endl;

    return 0;
}

