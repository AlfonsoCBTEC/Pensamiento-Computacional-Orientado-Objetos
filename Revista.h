#ifndef REVISTA
#define REVISTA

#include "Material.h"
#include <iostream>

using namespace std;

class Revista: public Material {

    private:

        int numedicion;
        int mes;

    public:

        Revista() {}

        Revista(string _titulo, string _autor, int _numedicion, int _mes) : Material(_titulo, _autor){
            numedicion = _numedicion;
            mes = _mes;
        }

        int get_numedicion(){
            return numedicion;
        }

        int get_mes(){
            return mes;
        }

        void set_numedicion(int _numedicion){
            numedicion = _numedicion;
        }

        void set_mes(int _mes){
            mes = _mes;
        }

        void mostrar_info_revista(){
            mostrar_info_basica();
            cout << "Numero de edicion: " << numedicion << endl;
            cout << "Mes: " << mes << endl;
        }

};

#endif
