/*
 * Proyecto Biblioteca
 * Alfonso Carranza Bassoco
 * A01714310
 */

/*
 * Clase Biblioteca. Clase principal, maneja y almacena en listas
 * los usuarios registrados y el material de la biblioteca
 * divido en libros y revistas.
 */

#ifndef BIBLIOTECA_H_
#define BIBLIOTECA_H_

#include "Prestamo.h"
#include "Libro.h"
#include "Usuario.h"
#include "Revista.h"
#include <iostream>
#include <vector>

using namespace std;


class Biblioteca{

    private:
        //Atrubutos. Listas que van a almacenar los objetos.
        Libro libros[100];
        int total_libros;

        Usuario usuarios[20];
        int total_usuarios;

        Revista revistas[50];
        int total_revistas;

        vector<Prestamo> historialPrestamos; // Ya vimos vectores en clase, ahora lo utilizo en vez de arrays

        string nombre;

    public:

        //Constructor por default, incializa la biblioteca.
        Biblioteca (){
            total_libros = 0;
            total_usuarios = 0;
            total_revistas = 0;
            nombre = "Biblioteca de Alfonso";
        }

        /*
         * Agrega los objetos tipo libro al arreglo de libros.
         * Si el total de libros definido por el arrgelo excede
         * no lo agrega y muestra un cout
        */
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
        
        /*
         * Agrega los objetos tipo usuario al arreglo de usuarios.
         * Si el total de usuarios definido por el arrgelo excede
         * no lo agrega y muestra un cout
        */
        void agregar_usuario(Usuario _usuario){
            if(total_usuarios < 20){
                usuarios[total_usuarios] = _usuario;
                total_usuarios ++;

                 cout << "Tu usuario fue registrado en la biblioteca!" << endl;
                 cout << "Total de Usuarios: " << total_usuarios << endl;

            } else {
                cout << "El sistema esta lleno. No se pueden agregar mas usuarios" << endl;
            }   
        }

         /*
         * Agrega los objetos tipo revista al arreglo de revistas.
         * Si el total de revistas definido por el arrgelo excede
         * no la agrega y muestra un cout
        */
        void agregar_revista(Revista _revista){
            if(total_revistas < 50){
                revistas[total_revistas] = _revista;
                total_revistas ++;

                cout << "Tu revista fue agregada en la biblioteca!" << endl;
                cout << "Total de Revistas: " << total_revistas << endl;

            } else{
                cout << "La biblioteca esta llena. No se pueden agregar mas revistas" << endl;

            }
        }

        void agregarPrestamo(){
            

        }

        /*
         *Utliza el arreglo de libros y revistas y su indice.
         *Recorre ambos arreglos e imprime la infomacion de cada 
         *objeto. Si no hay objetos en el arreglo no entra el for 
         *y se muestra un cout.
        */
        void mostrar_catalogo(){

            cout << "\n=======================================" << endl;
            cout << "         CATALOGO DE LA BIBLIOTECA        " << endl;
            cout << "\n=======================================" << endl;

            if(total_libros == 0){
                cout << "No hay libros registrados en la biblioteca" << endl;
            }

            else{
                for(int i=0; i<total_libros; i++){
                cout << "--- Libro #" << i + 1 << "---" << endl;
                libros[i].mostrar_info();
            }

            cout << "-----------------------------------------" << endl;
            cout << "Total de libros en el catalogo: "<< total_libros << endl;
            }

            if(total_revistas == 0){
                cout << "NO hay revistas registradas en la biblioteca" << endl;
            }

            else{
                for(int i=0; i<total_revistas; i++){
                    cout << "--- Revista#" << i+1 << "---" << endl;
                    revistas[i].mostrar_info_revista();
                }
            }

        }

        /*
         *Utliza el arreglo de usuarios su indice.
         *Recorre el arreglo e imprime la infomacion de cada 
         *objeto. Si no hay objetos en el arreglo no entra el for 
         *y se muestra un cout.
        */
        void mostrar_usuarios(){
            cout << "\n=======================================" << endl;
            cout << "         USUARIOS DE LA BIBLIOTECA        " << endl;
            cout << "\n=======================================" << endl;

            if (total_usuarios == 0){
                cout << "No hay suarios registrados en la biblioteca" << endl;
                return;
            }

            for (int i=0; i<total_usuarios; i++){
                cout << "---Usuario#" << i + 1 << "---" << endl;
                usuarios[i].mostrar_usuario();
            }

            cout << "-----------------------------------------" << endl;
            cout << "Total de usuarios en el catalogo: "<< total_usuarios << endl;
        }

};


#endif // BIBLIOTECA_H_
