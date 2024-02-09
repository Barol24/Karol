/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

class Transporte {
private:
    float velocidad;
    int capacidad;

public:
    Transporte(float velocidad, int capacidad) {
        this->velocidad = velocidad;
        this->capacidad = capacidad;
    }
    void mostrarTransporte() {
        cout << "Velocidad: " << velocidad << "km/h" << endl;
        cout << "Capacidad: " << capacidad << " personas" << endl;
    }
};

class Terrestre : public Transporte {
private:
    string marca;
    int ruedas; 

public:
    Terrestre(float velocidad, int capacidad, string marca, int ruedas) : Transporte(velocidad, capacidad), marca(marca), ruedas(ruedas) {
    }
    void mostrarTerrestre() {
        mostrarTransporte(); 
        cout << "Marca: " << marca << endl;
        cout << "Ruedas: " << ruedas << endl;
    }
};

class Aereo : public Transporte {
private:
    float altitud ;

public:
    Aereo(float velocidad, int capacidad, float altitud) : Transporte(velocidad, capacidad), altitud(altitud) {
    }
    void mostrarAereo() {
        mostrarTransporte(); 
        cout << "Altitud: " << altitud << endl;
        
    }
};

class Acuatico : public Transporte {
private:
    string carga;
     

public:
    Aereo(float velocidad, int capacidad, string carga) : Transporte(velocidad, capacidad), carga(carga) {
    }
    void mostrarAcuatico() {
        mostrarTransporte(); 
        cout << "Carga: " << carga << endl;
        
    }
};

int main() {
    
    Terrestre carro1(30.0, 5, "Nissan", 4);
    carro1.mostrarTerrestre();
    
    Aereo avion1(933, 70, 12.800);
    carro1.mostrarTerrestre();
    
    Acuatico barco11(37.04, 40, "24000 contenedores");
    carro1.mostrarTerrestre();
    
    
    return 0;
}