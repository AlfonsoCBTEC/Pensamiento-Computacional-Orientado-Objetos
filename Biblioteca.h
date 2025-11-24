#ifndef BIBLIOTECA
#define BIBLIOTECA

#include "Libro.h"
#include "Usuario.h"
#include <iostream>


using namespace std;


class Biblioteca{

    private:
        Libro libros[100];
        int total_libros;

        Usuario usuarios[20];
        int total_usuarios;

        string nombre;

    public:

        //incicializar biblioteca
        Biblioteca (){
            total_libros = 0;
            total_usuarios = 0;
            nombre = "Biblioteca de Alfonso";
        }
        

        void agregar_libro(Libro _libro){
            if (total_libros < 100){
                libros[total_libros] = _libro;
                total_libros ++;

                cout << "Tu libro fue agregado a la biblioteca!" << endl;
                cout << "Total de libros: " << total_libros << endl;

            } else {
                cout << "La biblioteca esta llena. No se pueden agregar mas libros" << endl;
            }

        }




};





#endif
