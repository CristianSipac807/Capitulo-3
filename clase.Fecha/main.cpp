#include <iostream>
#include <string>

using namespace std;

class Fecha {
private:
    int Dia;
    int Mes;
    int Anio;

public:
    Fecha(int Dia, int Mes, int Anio) {
        DefDia(Dia);
        DefMes(Mes);
        DefAnio(Anio);
    }
    void DefDia(int Dia1) {
         if (Dia1 > 31) {
            Dia = 1;
        } else {
            Dia = Dia1;
        }
    }
    void DefMes(int resul) {
         if (resul > 12) {
            Mes = 1;
        } else {
            Mes = resul;
        }
    }
    void DefAnio(int precio) {
        if (precio > 2025) {
            Anio = 2024;
        } else {
            Anio = precio;
        }
    }
    int obtenerDia() {
        return Dia;
    }
    int obtenerMes() {
        return Mes;
    }
    int obtenerAnio() {
        return Anio;
    }
    /*
    int obtenerMontoFactura() {
        return Mes * Anio;
    }
    */
};
int main() {
    Fecha factura1(8,7, 2004 );
    cout << "Dia: " << factura1.obtenerDia() << endl;
    cout << "Mes: " << factura1.obtenerMes() << endl;
    cout << "Anio: " << factura1.obtenerAnio() << endl;
    //cout << "Monto de la factura: " << factura1.obtenerMontoFactura() << endl;

    return 0;
}
