/*
 * Proyecto Biblioteca
 * Alfonso Carranza Bassoco
 * A01714310
 */

/*
 * Clase Prestamo. Muestra el estado de algun material dentro de la biblioteca.
 */

 #ifndef PRESTAMO_H_
 #define PRESTAMO_H_

 #include <iostream>

 using namespace std;

 class Prestamo {
    private:
        //Declaracion de atributos
        int idPrestamo;
        int idUsuario;
        int identificador;
        string fechaInicio;
        string tipoMaterial;
        bool estado;


    public:
        
        //Constructor
         Prestamo() {}
        
         Prestamo(int _idPrestamo, int _idUsuario, int _identificador , string _fechaInicio, string _tm){
            idPrestamo = _idPrestamo;
            idUsuario = _idUsuario;
            identificador = _identificador;
            fechaInicio = _fechaInicio;
            tipoMaterial = _tm;
            estado = true;
         }

         //getters

         int getIdPrestamo(){
            return idPrestamo;
         }
         int getIdUsuario() { 
            return idUsuario; 
        }
         int getIdentificador() { 
            return identificador; 
         }
        string getTipoMaterial(){
            return tipoMaterial;
        }
         bool getEstado() { 
            return estado; 
        }

         //Metodos
         void devolver_material(){
            //Cambia el estado del prestamo como inactivo
            estado = false;
            cout << "El material fue devuelto. El prestamo #" << idPrestamo << "ha finalizado." << endl;
         }

        /*
         * Muestra en pantalla la informacion del prestamo y si esta activo o no
        */
         void mostrar_prestamo(){
            cout << "Prestamo #" << idPrestamo << " | ";
            cout << "Usuario ID: " << idUsuario << " | ";
            cout << "Material: " << tipoMaterial << " | ";
            cout << "Identificador: " << identificador << " | ";
            cout << "Fecha: " << fechaInicio << " | ";

            if(estado == true){
                cout << "Estado: [ACTIVO / NO DEVUELTO]" << endl;
            } else {
                cout << "Estado: [CERRADO / DEVUELTO]" << endl;
            }
        }   

 };

 #endif // PRESTAMO_H_
