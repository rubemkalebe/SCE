#ifndef SISTEMABANCARIO_H
#define SISTEMABANCARIO_H

#include <list>
#include "Conta.h"
#include "Cliente.h"

using std::list;

class SistemaBancario {

    // Lista encadeada de contas
    list<Conta*> contas;

public:

    //Construtor padrão
    SistemaBancario();

    //Destrutor
    ~SistemaBancario();

    void print();

};

#endif // SISTEMABANCARIO_H
