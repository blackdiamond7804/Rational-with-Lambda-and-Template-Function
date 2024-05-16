#include "Racional.h"

template <typename T>
Racional<T>::Racional(T numerador, T denominador) : Numerador(numerador), Denominador(denominador) {}

template <typename T>
T Racional<T>::getNumerador(void) {
    return Numerador;
}

template <typename T>
void Racional<T>::setNumerador(T newNumerador) {
    Numerador = newNumerador;
}

template <typename T>
T Racional<T>::getDenominador(void) {
    return Denominador;
}

template <typename T>
void Racional<T>::setDenominador(T newDenominador) {
    Denominador = newDenominador;
}

template <typename T>
Racional<T>::Racional() : Numerador(0), Denominador(1) {}

template <typename T>
Racional<T>::~Racional() {}

template <typename T>
void Racional<T>::imprimirObj(void) {
    cout << Numerador << "/" << Denominador << endl;
}

template <typename T>
Racional<T> Racional<T>::suma( Racional r) {
    auto lambdaSuma = [](Racional r1, Racional r2) {
        T numeradorSuma = Numerador * r.getDenominador() + Denominador * r.getNumerador();
        T denominadorSuma = Denominador * r.getDenominador();
        return Racional(numeradorSuma, denominadorSuma);
        };
    return lambdaSuma(*this, r);
}

template <typename T>
Racional<T> Racional<T>::resta(Racional r) {
    auto lambdaResta = [](Racional r1, Racional r2) {
        T numeradorResta = Numerador * r.getDenominador() - Denominador * r.getNumerador();
        T denominadorResta = Denominador * r.getDenominador();
        return Racional(numeradorResta, denominadorResta);
        };
    return lambdaResta(*this, r);
}

template <typename T>
Racional<T> Racional<T>::multiplicacion(Racional r) {
    auto lambdaMultiplicacion = [](Racional r1, Racional r2) {
        T numeradorMultiplicacion = Numerador * r.getNumerador();
        T denominadorMultiplicacion = Denominador * r.getDenominador();
        return Racional(numeradorMultiplicacion, denominadorMultiplicacion);
        };
    return lambdaMultiplicacion(*this, r);
}

template <typename T>
Racional<T> Racional<T>::division(Racional r) {
    auto lambdaDivision = [](Racional r1, Racional r2) {
        T numeradorDivision = Numerador * r.getDenominador();
        T denominadorDivision = Denominador * r.getNumerador();
        return Racional(numeradorDivision, denominadorDivision);
        };
    return lambdaDivision(*this, r)
}

template <typename T>
void Racional<T>::imprimirMensaje(void) {
    cout << "Este es un mensaje de la función void." << endl;
}

// Es necesario especificar los tipos para los templates al final del archivo .cpp
template class Racional<int>;
template class Racional<float>;
template class Racional<double>;