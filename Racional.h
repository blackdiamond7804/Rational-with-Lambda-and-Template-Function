//////////////////////////////////////////////////////////////
//       UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE            //
//                                                          //
// DESCRIPCION DEL PROBLEMA: Expresion Lambda y template    //
// AUTOR: Pablo Antonio Campoverde Jimenez                  //
// FECHA DE CREACION: 15/05/2024                            //
//                                                          //
//////////////////////////////////////////////////////////////


#pragma once
#include <iostream>
using namespace std;

template <typename T>
class Racional {
public:
    Racional(T numerador, T denominador);
    T getNumerador(void);
    void setNumerador(T newNumerador);
    T getDenominador(void);
    void setDenominador(T newDenominador);
    Racional();
    ~Racional();
    void imprimirObj(void);
    Racional suma(Racional r);
    Racional resta(Racional r);
    Racional multiplicacion(Racional r);
    Racional division(Racional r);
    void imprimirMensaje(void);

private:
    T Numerador;
    T Denominador;
};