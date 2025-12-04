/*
 * Proyecto Biblioteca
 * Alfonso Carranza Bassoco
 * A01714310
 */

/*
 * Clase Material, clase padre de la cual derivan Libro y Revista.
 */


#ifndef MATERIAL_H_
#define MATERIAL_H_

#include <iostream>

using namespace std;

class Material{

    
    protected:
        //Declara atributos que van a tener el comun los materiales de la biblioteca
        string titulo;
        string autor;

    public:
        //Constructor por default
        Material() {}
        //Constructor con parametros
        Material(string _titulo, string _autor){
            titulo = _titulo;
            autor = _autor;
        }

        //Getters
        string getTitulo(){
            return titulo;
        }

        string getAutor(){
            return autor;
        }
        
        //Setters
        void setTitulo(string _titulo){
            titulo = _titulo;
        }

        void setAutor(string _autor){
            autor = _autor;
        }

        //Metodos
        void mostrar_info_basica(){
            cout << "Titulo: " << titulo << ", Autor: " << autor << endl;
        }

};

#endif // MATERIAL_H_
