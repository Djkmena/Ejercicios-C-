// Algoritmo para hallar el mayor de 3 números y ver si el numero es impar/ par 

#include <iostream>
using namespace std;
int main() {
   
    int a;
    int b;
    int c;
    
cout << "Ingrese el primer numero: ";
cin >> a;
cout << "Ingrese el segundo numero: ";
cin >> b;
cout << "Ingrese el tercer numero: ";
cin >> c;

   
    int mayor = a;
    if (b > mayor) {
        mayor = b;
    }
    if (c > mayor) {
        mayor = c;
    }

   
    if (mayor % 2 == 0) {
        cout << "El mayor numero ingresado es " <<mayor<<" y es par"<<endl;
    } else {
        cout << "El mayor numero ingresado es " <<mayor<<" y es impar"<<endl;
    }

    return 0;
}
