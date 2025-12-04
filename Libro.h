/*
 * Proyecto Biblioteca
 * Alfonso Carranza Bassoco
 * A01714310
 */

/*
 * Clase Libro. Clase hija que hereda atributos y metodos 
 * de clase material. 
 */

#ifndef LIBRO_H_
#define LIBRO_H_

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

    int getPaginas() {
        return paginas;
    }

    int getIsbn() {
        return isbn;
    }

    // Setters
  
    void setPaginas(int _paginas) {
        paginas = _paginas;
    }

    void setIsbn(int _isbn) {
        isbn = _isbn;
    }

    // Método para mostrar información del libro
    void mostrar_info() {
        mostrar_info_basica();
        cout << "Paginas: " << paginas << endl;
        cout << "ISBN: " << isbn << endl;
    }
};


#endif // LIBRO_H_
