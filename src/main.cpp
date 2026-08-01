/* 
   ====================================================================
   Materia: Laboratorio de Programación (LPR)
   E.E.S.T. N° 1 "Eduardo Ader" — Vicente López
   Curso: 5° Año
   Profesor: Prof. York
   Estudiantes: Lopilato Luisana
   Archivo: main.cpp
   Objetivo: Calcular el area de un circulo mediante funciones modulares
             y simular una diana de tiro en ASCII.
   ====================================================================
*/

#include <iostream>

using namespace std;

// 1. Prototipo de la función
double calcularAreaCirculo(double radio);

int main() {
    double radioEstudiante;

    cout << "=====================================================" << endl;
    cout << "  CALCULADORA DE AREA MODULAR - ESTUDIANTE: Lopilato Luisana " << endl;
    cout << "=====================================================" << endl;

    cout << "=> Ingrese el radio del circulo/diana (en cm): ";
    cin >> radioEstudiante;

    // Filtro de consistencia
    if (radioEstudiante <= 0) {
        cout << "[ERROR] El radio debe ser un valor positivo y mayor a cero." << endl;
        return 1;
    }

    // 2. Invocación de la función (Resuelta)
    double areaFinal = calcularAreaCirculo(radioEstudiante);
    
    // 3. Salida de datos (Resuelta)
    cout << "=> El area total calculada es: " << areaFinal << " cm2." << endl;

    // Gamificación: Render ASCII
    cout << "\n[SISTEMA] Dibujando escala de la Diana en la RAM..." << endl;
    if (radioEstudiante <= 5.0) {
        cout << "       .---.       " << endl;
        cout << "      /  X  \\     -> [DIANA MINI / COMPACTA]" << endl;
        cout << "      \\  *  /     " << endl;
        cout << "       '---'       " << endl;
    } else if (radioEstudiante <= 12.0) {
        cout << "       .---.       " << endl;
        cout << "     / .---. \\     " << endl;
        cout << "    | /  O  \\ |   -> [DIANA ESTANDAR DE TIRO]" << endl;
        cout << "    | \\  *  / |    " << endl;
        cout << "     \\ '---' /     " << endl;
        cout << "       '---'       " << endl;
    } else {
        cout << "       .---.       " << endl;
        cout << "     / .---. \\     " << endl;
        cout << "    | / .-. \\ |    " << endl;
        cout << "    | |  X  | |   -> [DIANA GIGANTE DE COBERTURA]" << endl;
        cout << "    | \\ '-' / |    " << endl;
        cout << "     \\ '---' /     " << endl;
        cout << "       '---'       " << endl;
    }

    cout << "=====================================================" << endl;
    return 0;
}

// 4. Definición de la función (Resuelta)
double calcularAreaCirculo(double r) {
    const double PI = 3.1415926535;
    double resultado = PI * r * r;
    return resultado;
}