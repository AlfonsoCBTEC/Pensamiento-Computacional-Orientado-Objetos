/*
 * Proyecto Biblioteca
 * Alfonso Carranza Bassoco
 * A01714310
 */

/*
 * Clase Revista. Clase hija que hereda atributos y metodos 
 * de clase material. 
 */


#ifndef REVISTA_H_
#define REVISTA_H_

#include "Material.h"
#include <iostream>

using namespace std;

class Revista: public Material {

    private:

        int numedicion;
        int mes;

    public:
        //Constructor vacio
        Revista() {}
        //Constructor con parametros
        Revista(string _titulo, string _autor, int _numedicion, int _mes) : Material(_titulo, _autor){
            numedicion = _numedicion;
            mes = _mes;
        }
        //Getters
        int getNumedicion(){
            return numedicion;
        }

        int getMes(){
            return mes;
        }
        //Setters
        void setNumedicion(int _numedicion){
            numedicion = _numedicion;
        }

        void setMes(int _mes){
            mes = _mes;
        }
        // Método para mostrar información de la revista
        void mostrar_info_revista(){
            mostrar_info_basica();
            cout << "Numero de edicion: " << numedicion << endl;
            cout << "Mes: " << mes << endl;
        }

};

#endif // REVISTA_H_
