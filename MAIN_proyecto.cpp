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
#include "Biblioteca.h"
#include "Libro.h"
#include "Usuario.h"

using namespace std;

int main() {

    cout << "Bienvenido al sistema de gestion de biblioteca de Alfonso\n\n";

    // Creacion de objetos

    Biblioteca mi_Biblioteca;

    Usuario user_prueba("Alfonso", 100001, "12345678");
    Usuario user_prueba2("Admin", 100002, "000000");

    // Primer objeto libro lo cree usando el constructor vacio
    Libro libro1;
    libro1.set_autor("J.K. Rowling");
    libro1.set_titulo("Harry Potter y la piedra filosofal");
    libro1.set_paginas(223);
    libro1.set_isbn(123456);

    // Para crear este objeto use el constructor con parametros
    Libro libro2("Tiende tu cama", "Alfonso", 200, 987654);

    Revista revista1("Noticias", "Alfonso", 21, 5);
    Revista revista2("Carros", "Pepe", 2, 9);

    ////Agregando los ojetos a la biblioteca
    mi_Biblioteca.agregar_libro(libro1);
    mi_Biblioteca.agregar_libro(libro2);

    mi_Biblioteca.agregar_usuario(user_prueba);
    mi_Biblioteca.agregar_usuario(user_prueba2);

    mi_Biblioteca.agregar_revista(revista1);
    mi_Biblioteca.agregar_revista(revista2);



    ///ejemplo implementando los metodos de cada clase

    cout << "=== Libro 1 ===" << endl;
    libro1.mostrar_info();
    cout << endl;

    cout<< "=== Usuario 1 ===" << endl;
    user_prueba.mostrar_usuario();
    cout << endl;

    cout<< "=== Revista 1 ===" << endl;
    revista1.mostrar_info_revista();
    cout << endl;

    //Mostrando el catalogo/usuarios de la clase biblioteca
    //que ya muestra objetos de otras clases que almaceno

    mi_Biblioteca.mostrar_catalogo();
    mi_Biblioteca.mostrar_usuarios();


    return 0;
}
