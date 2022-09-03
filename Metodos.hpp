#include <iostream>
#include "Clases.hpp"
using namespace std;

/********************************FORMA********************************/
void IFigura::draw() {
    cout << "Metodo dibujar" << endl;
}

/********************************CUADRADO********************************/
Cuadrado::Cuadrado(int x = 0, int y = 0) {
    this->x = x;
    this->y = y;
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
void Cuadrado::setTipo(int type) {
    tipo = type;
}
int Cuadrado::getTipo() {
    if (tipo != 1 && tipo != 2)
    {
        tipo = 1;
    }
    return tipo;
}
void Cuadrado::setDimensiones(int height = 2, int large = 2) {
	alto = height;
    largo = large;
}
int Cuadrado::getAlto() {
	if (alto < 2)
	{
        alto = 2;
	}
    return alto;
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
        cout << "X = " << getX() << "\t Alto = " << getAlto() << endl;
        cout << "Y = " << getY() << "\t Largo = " << getLargo() << endl;
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
        for (int c = 0; c < getAlto(); c++)
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
                    if ((c == 0 || i == 0) || (c == (getAlto()-1)) || (i == (getLargo()-1)))
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
Triangulo::Triangulo(int x = 0, int y = 0) {
    this->x = x;
    this->y = y;
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
void Triangulo::setTipo(int type) {
    tipo = type;
}
int Triangulo::getTipo() {
    if (tipo != 1 && tipo != 2)
    {
        tipo = 1;
    }
    return tipo;
}
void Triangulo::setAlto(int height = 7) {
    alto = height;
}
int Triangulo::getAlto() {
    if (alto < 2)
    {
        alto = 2;
    }
    return alto;
}
void Triangulo::draw() {
    char mov;
    while ((mov = cin.get()) != 'p') {
        Limpiar();
        cout << "X = " << getX() << "\t Alto = " << getAlto() << endl;
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

        int aux = getAlto() - 1;
        for (int c = 1; c <= getAlto(); c++)
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
                    if ((i == 0) || (c == getAlto()) || (i == (c-1)))
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
Circulo::Circulo(int x = 0, int y = 0) {
    this->x = x;
    this->y = y;
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
void Circulo::setTipo(int type) {
    tipo = type;
}
int Circulo::getTipo() {
    if (tipo != 1 && tipo != 2)
    {
        tipo = 1;
    }
    return tipo;
}
void Circulo::setDiametro(int diameter = 7) {
    diametro = diameter;
}
int Circulo::getDiametro() {
    if (diametro < 3)
    {
        diametro = 7;
    }
    if (diametro % 2 == 0)
    {
        diametro++;
    }
    return diametro;
}
void Circulo::draw() {
    char mov;
    while ((mov = cin.get()) != 'p') {
        Limpiar();
        cout << "X = " << getX() << "\t Diametro = " << getDiametro() << endl;
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

        int aux = getDiametro();
        for (int c = 1; c < getDiametro(); c+=2)
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
        for (int c = 1; c < getDiametro(); c+=2)
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
            for (int i = getDiametro(); i > (c-1); i--)
            {
                if (getTipo() == 1)
                {
                    cout << "* ";
                }
                else
                {
                    if ((i == getDiametro()) || (i == c) || (c == (getDiametro()-2)))
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
void Lienzo (IFigura *forma) {
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
        cout << "1.- Cuadrado/Rectangulo." << endl;
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
        int alto = 0, largo = 0;
        cout << "Introduzca la medida del alto: ";
        cin >> alto;
        cout << "Introduzca la medida del largo: ";
        cin >> largo;
        
        Cuadrado c = Cuadrado(x, y);
        c.setDimensiones(alto, largo);
        c.setTipo(opc);
        Lienzo(&c);
    }
    else if (opc == 2)
    {
        cout << "1.- Relleno \t 2.- Hueco" << endl;
        cout << "   *    \t    *  " << endl;
        cout << "  * *   \t   * * " << endl;
        cout << " * * *  \t  *   *" << endl;
        cout << "* * * * \t * * * *" << endl;
        cout << endl;
        cout << "Elija el tipo de figura: ";
        cin >> opc;
        int alto;
        cout << "Introduzca la medida del alto: ";
        cin >> alto;
        
        Triangulo t = Triangulo(x, y);
        t.setAlto(alto);
        t.setTipo(opc);
        Lienzo(&t);
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
        int diametro;
        cout << "Introduzca la medida del alto: ";
        cin >> diametro;
        
        Circulo z = Circulo (x, y);
        z.setDiametro(diametro);
        z.setTipo(opc);
        Lienzo(&z);
    }
    else
    {
        cout << "Lo sentimos, la opcion no existe" << endl;
    }
}
