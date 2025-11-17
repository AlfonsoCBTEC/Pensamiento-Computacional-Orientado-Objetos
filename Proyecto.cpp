/*
Proyecto por Alfonso Carranza Bassoco - A01714310
Este proyecto es un sistema de gestión de biblioteca 
desarrollado en C++ con enfoque en programación orientada a objetos. 
El objetivo es modelar y administrar elementos como libros, usuarios 
y préstamos, integrando conceptos fundamentales de POO: clases, atributos,
métodos, herencia, composición y diagramas UML.

El sistema permite registrar libros, gestionar usuarios y controlar préstamos
activos, además de servir como práctica para representar y analizar relaciones
entre objetos mediante diagramas de clase y de secuencia
*/

#include <iostream>
#include "Libro.cpp"

using namespace std;

int main() {

    cout << "Bienvenido al sistema de gestión de biblioteca de Alfonso\n\n";

    // Primer objeto lo cree usando el constructor vacio
    Libro libro1;
    libro1.set_autor("J.K. Rowling");
    libro1.set_nombre("Harry Potter y la piedra filosofal");
    libro1.set_paginas(223);
    libro1.set_isbn(123456);

    // Para crear este objeto use el constructor con parametros
    Libro libro2("George Orwell", 328, "1984", 987654);

    cout << "=== Libro 1 ===" << endl;
    libro1.mostrar_info();
    cout << endl;

    cout << "=== Libro 2 ===" << endl;
    libro2.mostrar_info();
    cout << endl;

    return 0;
}
