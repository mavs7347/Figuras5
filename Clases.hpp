#include <iostream>
using namespace std;

void Limpiar() {
    cout << "\x1B[2J\x1B[H";
}

/********************************FORMA********************************/
class IFigura {
    public:
        virtual void draw();
};

/********************************CUADRADO********************************/
class Cuadrado : public IFigura {
    private:
        int tipo;
        int alto;
        int largo;
        int x;
        int y;
    public:
        Cuadrado(int, int);
        int getX();
        int getY();
        void setTipo(int);
        int getTipo();
        void setDimensiones(int, int);
        int getAlto();
        int getLargo();
        void draw ();
};

/********************************TRIANGULO********************************/
class Triangulo : public IFigura {
    private:
        int tipo;
        int alto;
        int x;
        int y;
    public:
        Triangulo(int, int);
        int getX();
        int getY();
        void setTipo(int);
        int getTipo();
        void setAlto(int);
        int getAlto();
        void draw();
};

/********************************CIRCULO********************************/
class Circulo : public IFigura {
    private:
        int tipo;
        int diametro;
        int x;
        int y;
    public:
        Circulo(int, int);
        int getX();
        int getY();
        void setTipo(int);
        int getTipo();
        void setDiametro(int);
        int getDiametro();
        void draw();
};

/********************************PROGRAMA********************************/
class Programa {
    private:
	    int opc;
        int x;
        int y;
	public:
	    Programa();
	    void run();
        void menu();
};
