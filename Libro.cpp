#ifndef LIBRO
#define LIBRO

#include <iostream>
using namespace std;

class Libro {

private:
    string titulo;
    string autor;
    int paginas;
    int isbn;

public:
    // Constructor vacio
    Libro() {}

    // Constructor con parámetros
    Libro(string _titulo,  string _autor, int _paginas, int _isbn) {
        titulo = _titulo;
        autor = _autor;
        paginas = _paginas;
        isbn = _isbn;
    }

    // Getters
    string get_titulo() {
        return titulo;
    }

    string get_autor() {
        return autor;
    }

    int get_paginas() {
        return paginas;
    }

    int get_isbn() {
        return isbn;
    }

    // Setters
      void set_titulo(string _titulo) {
        titulo = _titulo;
    }

    void set_autor(string _autor) {
        autor = _autor;
    }

    void set_paginas(int _paginas) {
        paginas = _paginas;
    }

    void set_isbn(int _isbn) {
        isbn = _isbn;
    }

    // Método para mostrar información del libro
    void mostrar_info() {
        cout << "Titulo: " << titulo << endl;
        cout << "Autor: " << autor << endl;
        cout << "Paginas: " << paginas << endl;
        cout << "ISBN: " << isbn << endl;
    }
};


#endif
