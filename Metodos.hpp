#include <iostream>
#include "Clases.hpp"
using namespace std;

/********************************FORMA********************************/
int IFigura::getX() {}
int IFigura::getY() {}
void IFigura::setTipo(int) {}
int IFigura::getTipo() {}
void IFigura::setLargo(int) {}
int IFigura::getLargo() {}
void IFigura::draw() {}

/********************************CUADRADO********************************/
void Cuadrado::setX(int x) {
    this->x = x;
}
int Cuadrado::getX() {
    if (this->x < 0)
    {
        this->x = 0;
    }
    else if(this->x >= 25)
    {
        this->x = 25;
    }
    return x;
}
void Cuadrado::setY(int y) {
    this->y = y;
}
int Cuadrado::getY() {
    if (this->y < 0)
    {
        this->y = 0;
    }
    else if(this->y >= 25)
    {
        this->y = 25;
    }
    return y;
}
void Cuadrado::setTipo(int type = 1) {
    tipo = type;
}
int Cuadrado::getTipo() {
    if (tipo != 1 && tipo != 2)
    {
        tipo = 1;
    }
    return tipo;
}
void Cuadrado::setLargo(int large = 2) {
    largo = large;
}
int Cuadrado::getLargo() {
	if (largo < 2)
	{
        largo = 2;
	}
    return largo;
}
void Cuadrado::draw() {
    char mov;
    while ((mov = cin.get()) != 'p') {
        Limpiar();
        cout << "X = " << getX() << "\t Largo = " << getLargo() << endl;
        cout << "Y = " << getY() << endl;
        if (mov == 'w') {
            y--;
        }
        else if (mov == 's') {
            y++;
        }
        else if (mov == 'a') {
            x--;
        }
        else if (mov == 'd') {
            x++;
        }

        for (int c = 0; c <= 25; c++)
        {
            if (c < 10)
            {
                cout << "  " << c;
            }
            else
            {
                cout << " " << c;
            }
        }
        cout << endl;
        int l = 0;
        while (l < getY())
        {
            cout << l << endl;
            l++;
        }
        for (int c = 0; c < getLargo(); c++)
        {
            cout << l;
            if (l < 10)
            {
                cout << " ";
            }
            for (int n = 1; n < getX(); n++)
            {
                cout << "   ";
            }
            l++;
            
            cout << " ";
            for (int i = 0; i < getLargo(); i++)
            {
                
                if (getTipo() == 1)
                {
                    cout << " *";
                }
                else
                {
                    if ((c == 0 || i == 0) || (c == (getLargo()-1)) || (i == (getLargo()-1)))
                    {
                        cout << " *";
                    }
                    else
                    {
                        cout << "  ";
                    }
                }
            }
            cout << endl;
        }
    }
}

/********************************TRIANGULO********************************/
void Triangulo::setX(int x) {
    this->x = x;
}
int Triangulo::getX() {
    if (this->x < 0)
    {
        this->x = 0;
    }
    else if(this->x >= 25)
    {
        this->x = 25;
    }
    return x;
}
void Triangulo::setY(int y) {
    this->y = y;
}
int Triangulo::getY() {
    if (this->y < 0)
    {
        this->y = 0;
    }
    else if(this->y >= 25)
    {
        this->y = 25;
    }
    return y;
}
void Triangulo::setTipo(int type = 1) {
    tipo = type;
}
int Triangulo::getTipo() {
    if (tipo != 1 && tipo != 2)
    {
        tipo = 1;
    }
    return tipo;
}
void Triangulo::setLargo(int large = 7) {
    largo = large;
}
int Triangulo::getLargo() {
    if (largo < 2)
    {
        largo = 2;
    }
    return largo;
}
void Triangulo::draw() {
    char mov;
    while ((mov = cin.get()) != 'p') {
        Limpiar();
        cout << "X = " << getX() << "\t Largo = " << getLargo() << endl;
        cout << "Y = " << getY() << endl;
        if (mov == 'w') {
            y--;
        }
        else if (mov == 's') {
            y++;
        }
        else if (mov == 'a') {
            x--;
        }
        else if (mov == 'd') {
            x++;
        }

        for (int c = 0; c <= 25; c++)
        {
            if (c < 10)
            {
                cout << "  " << c;
            }
            else
            {
                cout << " " << c;
            }
        }
        cout << endl;
        int l = 0;
        while (l < getY())
        {
            cout << l << endl;
            l++;
        }

        int aux = getLargo() - 1;
        for (int c = 1; c <= getLargo(); c++)
        {
            cout << l;
            if (l < 10)
            {
                cout << " ";
            }
            for (int n = 1; n < getX(); n++)
            {
                cout << "   ";
            }
            l++;

            cout << " ";
            for (int n = 0; n < aux; n++)
            {
                cout << " ";
            }
            aux -= 1;
            for (int i = 0; i < c; i++)
            {
                if (getTipo() == 1)
                {
                    cout << " *";
                }
                else
                {
                    if ((i == 0) || (c == getLargo()) || (i == (c-1)))
                    {
                        cout << " *";
                    }
                    else
                    {
                        cout << "  ";
                    }
                }
            }       
            cout << endl;
        }
    }
}

/********************************CIRCULO********************************/
void Circulo::setX(int x) {
    this->x = x;
}
int Circulo::getX() {
    if (this->x < 0)
    {
        this->x = 0;
    }
    else if(this->x >= 25)
    {
        this->x = 25;
    }
    return x;
}
void Circulo::setY(int y) {
    this->y = y;
}
int Circulo::getY() {
    if (this->y < 0)
    {
        this->y = 0;
    }
    else if(this->y >= 25)
    {
        this->y = 25;
    }
    return y;
}
void Circulo::setTipo(int type = 1) {
    tipo = type;
}
int Circulo::getTipo() {
    if (tipo != 1 && tipo != 2)
    {
        tipo = 1;
    }
    return tipo;
}
void Circulo::setLargo(int large = 7) {
    largo = large;
}
int Circulo::getLargo() {
    if (largo < 3)
    {
        largo = 7;
    }
    if (largo % 2 == 0)
    {
        largo++;
    }
    return largo;
}
void Circulo::draw() {
    char mov;
    while ((mov = cin.get()) != 'p') {
        Limpiar();
        cout << "X = " << getX() << "\t Largo = " << getLargo() << endl;
        cout << "Y = " << getY() << endl;
        if (mov == 'w') {
            y--;
        }
        else if (mov == 's') {
            y++;
        }
        else if (mov == 'a') {
            x--;
        }
        else if (mov == 'd') {
            x++;
        }

        for (int c = 0; c <= 25; c++)
        {
            if (c < 10)
            {
                cout << "  " << c;
            }
            else
            {
                cout << " " << c;
            }
        }
        cout << endl;
        int l = 0;
        while (l < getY())
        {
            cout << l << endl;
            l++;
        }

        int aux = getLargo();
        for (int c = 1; c < getLargo(); c+=2)
        {
            cout << l;
            if (l < 10)
            {
                cout << " ";
            }
            for (int n = 1; n < getX(); n++)
            {
                cout << "   ";
            }
            l++;

            for (int n = 1; n < aux; n++)
            {
                cout << " ";
            }
            aux -= 2;
            for (int i = 0; i <= (c+1); i++)
            {
                if (getTipo() == 1)
                {
                    cout << "* ";
                }
                else
                {
                    if ((c == 1) || (i == 0 || i == (c+1)))
                    {
                        cout << "* ";
                    }
                    else
                    {
                        cout << "  ";
                    }
                }
            }
            cout << endl;
        }

        aux = 2;
        for (int c = 1; c < getLargo(); c+=2)
        {
            cout << l;
            if (l < 10)
            {
                cout << " ";
            }
            for (int n = 1; n < getX(); n++)
            {
                cout << "   ";
            }
            l++;

            for (int n = 0; n < aux; n++)
            {
                cout << " ";
            }
            aux += 2;
            for (int i = getLargo(); i > (c-1); i--)
            {
                if (getTipo() == 1)
                {
                    cout << "* ";
                }
                else
                {
                    if ((i == getLargo()) || (i == c) || (c == (getLargo()-2)))
                    {
                        cout << "* ";
                    }
                    else
                    {
                        cout << "  ";
                        
                    }
                }
            }
            cout << endl;
        }
    }
}

/********************************LIENZO********************************/
void Lienzo (IFigura *forma, int x, int y, int largo, int opc) {
    forma->setX(x);
    forma->setY(y);
    forma->setLargo(largo);
    forma->setTipo(opc);
    forma->draw();
}

/********************************PROGRAMA********************************/
Programa::Programa() {
	opc = 1;
    x = 0;
    y = 0;
}
void Programa::run() {
    do {
        cout << "Elige la figura:" << endl;
        cout << "1.- Cuadrado." << endl;
        cout << "2.- Triangulo." << endl;
        cout << "3.- Circulo." << endl;
        cin >> opc;
        Limpiar();

        for (int c = 0; c <= 25; c++)
        {
            if (c < 10)
            {
                cout << "  " << c;
            }
            else
            {
                cout << " " << c;
            }
        }
        cout << endl;
        for (int i = 0; i <= 25; i++)
        {
            cout << i << endl;
        }
        cout << "Seleccione las coordenadas para la figura: ";
        cin >> x;
        cin >> y;
        Limpiar();
                
        menu();
        
        cout << "\nRepetir programa:";
        cout << "\n1.- Si"
                "\n2.- No" << endl;
        cin >> opc;
        Limpiar();
    } while (opc == 1);
}
void Programa::menu() {
    if (opc == 1)
    {
        cout << "1.- Relleno \t 2.- Hueco" << endl;
        cout << "* * * \t\t * * *" << endl;
        cout << "* * * \t\t *   *" << endl;
        cout << "* * * \t\t * * *" << endl;
        cout << endl;
        cout << "Elija el tipo de figura: ";
        cin >> opc;
        int largo = 0;
        cout << "Introduzca la medida del largo: ";
        cin >> largo;
        
        Cuadrado cuadrado;
        Lienzo(&cuadrado, x, y, largo, opc);
    }
    else if (opc == 2)
    {
        cout << "1.- Relleno \t 2.- Hueco" << endl;
        cout << "   *    \t    *   " << endl;
        cout << "  * *   \t   * *  " << endl;
        cout << " * * *  \t  *   * " << endl;
        cout << "* * * * \t * * * *" << endl;
        cout << endl;
        cout << "Elija el tipo de figura: ";
        cin >> opc;
        int largo = 0;
        cout << "Introduzca la medida del largo: ";
        cin >> largo;
        
        Triangulo triangulo;
        Lienzo(&triangulo, x, y, largo, opc);
    }
    else if (opc == 3)
    {
        cout << "1.- Relleno \t 2.- Hueco" << endl;
        cout << "  * *   \t   * * " << endl;
        cout << " * * *  \t  *   *" << endl;
        cout << "  * *   \t   * *  " << endl;
        cout << endl;
        cout << "Elija el tipo de figura: ";
        cin >> opc;
        int largo = 0;
        cout << "Introduzca la medida del largo: ";
        cin >> largo;
        
        Circulo circulo;
        Lienzo(&circulo, x, y, largo, opc);
    }
    else
    {
        cout << "Lo sentimos, la opcion no existe" << endl;
    }
}
