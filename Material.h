#ifndef MATERIAL
#define MATERIAL

#include <iostream>

using namespace std;

class Material{
    
    protected:
        string titulo;
        string autor;

    public:

        Material() {}

        Material(string _titulo, string _autor){
            titulo = _titulo;
            autor = _autor;
        }

        string get_titulo(){
            return titulo;
        }

        string get_autor(){
            return autor;
        }

        void set_titulo(string _titulo){
            titulo = _titulo;
        }

        void set_autor(string _autor){
            autor = _autor;
        }

        void mostrar_info_basica(){
            cout << "Titulo: " << titulo << ", Autor: " << autor << endl;
        }

};

#endif
