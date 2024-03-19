#include <iostream>
#include <string>

using namespace std;

class Factura {
private:
    string NumeroPieza;
    string DescripcionPieza;
    int Cantidad;
    int PrecioPorArticulo;

public:
    Factura(string NumeroPieza, string DescripcionPieza, int Cantidad, int PrecioPorArticulo) {
        DefNumeroPieza(NumeroPieza);
        DefDescripcionPieza(DescripcionPieza);
        DefCantidad(Cantidad);
        DefPrecioPorArticulo(PrecioPorArticulo);
    }
    void DefNumeroPieza(string NumPieza) {
        NumeroPieza = NumPieza;
    }

    void DefDescripcionPieza(string DescPieza) {
        DescripcionPieza = DescPieza;
    }
    void DefCantidad(int resul) {
         if (resul < 0) {
            Cantidad = 0;
        } else {
            Cantidad = resul;
        }
    }
    void DefPrecioPorArticulo(int precio) {
        if (precio < 0) {
            PrecioPorArticulo = 0;
        } else {
            PrecioPorArticulo = precio;
        }
    }
    string obtenerNumeroPieza() {
        return NumeroPieza;
    }
    string obtenerDescripcionPieza() {
        return DescripcionPieza;
    }
    int obtenerCantidad() {
        return Cantidad;
    }
    int obtenerPrecioPorArticulo() {
        return PrecioPorArticulo;
    }
    int obtenerMontoFactura() {
        return Cantidad * PrecioPorArticulo;
    }
};
int main() {
    Factura factura1("014", "Desarmador", 6, 40);
    cout << "Numero de pieza: " << factura1.obtenerNumeroPieza() << endl;
    cout << "Descripcion de la pieza: " << factura1.obtenerDescripcionPieza() << endl;
    cout << "Cantidad: " << factura1.obtenerCantidad() << endl;
    cout << "Precio por articulo: " << factura1.obtenerPrecioPorArticulo() << endl;
    cout << "Monto de la factura: " << factura1.obtenerMontoFactura() << endl;

    return 0;
}
