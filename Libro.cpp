#include <iostream>
using namespace std;

class Libro {

private:
    string autor;
    int paginas;
    string nombre;
    int isbn;

public:
    // Constructor vacio
    Libro() {}

    // Constructor con parámetros
    Libro(string _autor, int _paginas, string _nombre, int _isbn) {
        autor = _autor;
        paginas = _paginas;
        nombre = _nombre;
        isbn = _isbn;
    }

    // Getters
    string get_autor() {
        return autor;
    }

    int get_paginas() {
        return paginas;
    }

    string get_nombre() {
        return nombre;
    }

    int get_isbn() {
        return isbn;
    }

    // Setters
    void set_autor(string _autor) {
        autor = _autor;
    }

    void set_paginas(int _paginas) {
        paginas = _paginas;
    }

    void set_nombre(string _nombre) {
        nombre = _nombre;
    }

    void set_isbn(int _isbn) {
        isbn = _isbn;
    }

    // Método para mostrar información del libro
    void mostrar_info() {
        cout << "Titulo: " << nombre << endl;
        cout << "Autor: " << autor << endl;
        cout << "Paginas: " << paginas << endl;
        cout << "ISBN: " << isbn << endl;
    }
};
