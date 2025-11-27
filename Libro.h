#ifndef LIBRO
#define LIBRO

#include <iostream>
#include "Material.h"

using namespace std;

class Libro : public Material {

private:
    int paginas;
    int isbn;

public:
    // Constructor vacio
    Libro() {}

    // Constructor con parámetros
    Libro(string _titulo,  string _autor, int _paginas, int _isbn) : Material(_titulo, _autor) {
        paginas = _paginas;
        isbn = _isbn;
    }

    // Getters (los demas los hereda de material)

    int get_paginas() {
        return paginas;
    }

    int get_isbn() {
        return isbn;
    }

    // Setters
  
    void set_paginas(int _paginas) {
        paginas = _paginas;
    }

    void set_isbn(int _isbn) {
        isbn = _isbn;
    }

    // Método para mostrar información del libro
    void mostrar_info() {
        mostrar_info_basica();
        cout << "Paginas: " << paginas << endl;
        cout << "ISBN: " << isbn << endl;
    }
};


#endif
