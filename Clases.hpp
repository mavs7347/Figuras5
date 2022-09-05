#include <iostream>
using namespace std;

void Limpiar() {
    cout << "\x1B[2J\x1B[H";
}

/********************************FORMA********************************/
class IFigura {
    public:
        virtual void setX(int) {}
        virtual int getX();
        virtual void setY(int) {}
        virtual int getY();
        virtual void setTipo(int);
        virtual int getTipo();
        virtual void setLargo(int);
        virtual int getLargo();
        virtual void draw();
};

/********************************CUADRADO********************************/
class Cuadrado : public IFigura {
    private:
        int tipo;
        int largo;
        int x;
        int y;
    public:
        void setX(int);
        int getX();
        void setY(int);
        int getY();
        void setTipo(int);
        int getTipo();
        void setLargo(int);
        int getLargo();
        void draw ();
};

/********************************TRIANGULO********************************/
class Triangulo : public IFigura {
    private:
        int tipo;
        int largo;
        int x;
        int y;
    public:
        void setX(int);
        int getX();
        void setY(int);
        int getY();
        void setTipo(int);
        int getTipo();
        void setLargo(int);
        int getLargo();
        void draw();
};

/********************************CIRCULO********************************/
class Circulo : public IFigura {
    private:
        int tipo;
        int largo;
        int x;
        int y;
    public:
        void setX(int);
        int getX();
        void setY(int);
        int getY();
        void setTipo(int);
        int getTipo();
        void setLargo(int);
        int getLargo();
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
