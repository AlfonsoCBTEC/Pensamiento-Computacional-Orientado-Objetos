#include<iostream>

using namespace std;

class Libro{

    private:

      string autor;
      int paginas;
      string nombre;
      int isbn;

    public:

      string get_autor(){
        return autor;
      }

      int get_paginas(){
        return paginas;
      }

      string get_nombre(){
        return nombre;
      }

      int get_ibsn(){
        return isbn;
      }
};

