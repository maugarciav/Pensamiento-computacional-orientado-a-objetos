#include <iostream>
using namespace std;

class Rectangulo{
public:
    double calcArea();
    void setLargo(double la);
    void setAncho(double an);

private:
    double largo, ancho;
};

double Rectangulo :: calcArea() {
    return largo * ancho;
}
void Rectangulo :: setLargo(double la) {
    largo = la;
}
void Rectangulo :: setAncho(double an) {
    ancho = an;
}


int main(){
    Rectangulo rect;
    double area, l, a;

    cin >> l;
    cin >> a;

    rect.setLargo(l);
    rect.setAncho(a);
    area = rect.calcArea();
    cout << "El area es: " << area << endl;

    return 0;
}





