/*
 * Proyecto Biblioteca
 * Alfonso Carranza Bassoco
 * A01714310
 */

/*
 * Clase Usuario, contiene metodo para mostrar
 *la informacion del usuario a execpcion de su contrasena
 */

#ifndef USUARIO_H_
#define USUARIO_H_

#include <iostream>

using namespace std;

class Usuario{

    private:
        //Declaracion de atributos
        string nombre;
        int idUsuario;
        string contraseña;
    

    public:
        //Constructor vacio
        Usuario() {}
        //Constructor con parametros
        Usuario(string _nombre, int _idUsuario, string _contraseña){
            nombre = _nombre;
            idUsuario = _idUsuario;
            contraseña = _contraseña;
        }

        //Getters
        string getNombre(){
            return nombre;
        }

        int getIdUsuario(){
            return idUsuario;
        }

        //Setters
        void setNombre(string _nombre){
            nombre = _nombre;
        }

        
        void setIdUsuario(int _idUsuario){
            idUsuario = _idUsuario;
        }

        
        void setContraseña(string _contraseña){
            contraseña = _contraseña;
        }

        //Metodos

        void mostrar_usuario(){
            cout << "Nombre: " << nombre << endl;
            cout << "ID: " << idUsuario << endl;
        }

};
#endif // USUARIO_H_
