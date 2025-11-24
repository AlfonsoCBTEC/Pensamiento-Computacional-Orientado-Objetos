#ifndef USUARIO
#define USUARIO

#include <iostream>

using namespace std;

class Usuario{

    private:
        string nombre;
        int idUsuario;
        string contraseña;
    

    public:

        Usuario() {}

        Usuario(string _nombre, int _idUsuario, string _contraseña){
            nombre = _nombre;
            idUsuario = _idUsuario;
            contraseña = _contraseña;
        }

        //Getters

        string get_nombre(){
            return nombre;
        }

        int get_idUsuario(){
            return idUsuario;
        }


        //Setters

        void set_nombre(string _nombre){
            nombre = _nombre;
        }

        
        void set_idUsuario(int _idUsuario){
            idUsuario = _idUsuario;
        }

        
        void set_contraseña(string _contraseña){
            contraseña = _contraseña;
        }

        //metodos

        void mostrar_usuario(){
            cout << "Nombre: " << nombre << endl;
            cout << "ID: " << idUsuario << endl;
        }

};

#endif
