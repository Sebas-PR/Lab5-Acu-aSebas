#include <iostream>
#include "Shape.h"
#include "Square.h"
#include "Circle.h"


int main()
{

    Shape* soyUnaFigura = new Square(2.0);
    Shape* soyotraFigura = new Circle(2.0);


	double resultadocuadro = soyUnaFigura->calculateArea();
    double resultacircle= soyotraFigura->calculateArea();


    std::cout << "Hola, el area de un cuadrado de base 2 es!\n";
    std::cout << resultadocuadro;

    std::cout << "El area de un circulo con radio 2 es \n";
    std::cout << resultacircle;
}

