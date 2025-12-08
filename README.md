TC1033 Proyecto
--------------

Sistema de Gestión de Biblioteca 
Autor: Alfonso Carranza Bassoco Matrícula: A01714310 Asignatura: Programación Orientada a Objetos (TC1033)

Este proyecto es un sistema de consola desarrollado en C++ que simula las operaciones fundamentales de una biblioteca. 
El objetivo principal es aplicar y demostrar conceptos de Programación Orientada a Objetos (POO) como encapsulamiento, 
composición/adición, herencia y relaciones entre clases.

CONTEXTO
-----------------------------------------------------------------------------------------------------------------------------------------------------
Una biblioteca necesita administrar eficientemente su inventario y el flujo de préstamos a sus usuarios, por lo que se genera una estructura de clases para modelar las relaciones entre los materiales y las personas. Los materiales están separados en 2 tipos: Libros y Revistas, los cuales heredan de una clase base Material. El sistema permite que la Biblioteca (clase administradora) gestione el inventario y registre los préstamos realizados a los Usuarios.

FUNCIONALIDAD
------------------------------------------------------------------------------------------------------------------------------------------------------
 - ¿Para qué sirve este proyecto? (Alcance)
El programa funciona a través de un menú en consola que permite las siguientes operaciones:

Altas de Materiales: Registro de nuevos Libros y Revistas en el catálogo.

Gestión de Usuarios: Registro de nuevos usuarios.

Préstamos: Creación de un registro de préstamo que vincula a un Usuario con un Material específico.

Consultas: Visualización del catálogo completo y estado de los materiales.

- ¿Para qué NO sirve? (Limitaciones)
Es importante notar que este sistema NO está diseñado para:

Persistencia de Datos: El sistema no utiliza bases de datos ni archivos de texto externos. Toda la información se pierde al cerrar el programa

Uso en Producción Real: No cuenta con mecanismos de seguridad avanzados (como encriptación de contraseñas) ni manejo de concurrencia (varios usuarios a la vez).

CONSIDERACIONES
----------------------------------------------------------------------------------------------------------------------------------------------------
No tiene botones ni ventanas; funciona exclusivamente a través de la línea de comandos (terminal).

Tener instalado un compilador de C++ (como g++) y ejecutar:

g++ main.cpp -o sistema_biblioteca

- Ejecutar en Windows
sistema_biblioteca.exe

- Ejecutar en Mac/Linux
./sistema_biblioteca

CORRECCIONES
---------------------------------------------------------------------------------------------------------------------------------------------------------
1. Se agrego la clase Prestamo y su relacion de composicion con la clase biblioteca en el Diagrama UML
