/**
* A classe SistemaBancario simula um sistema
* de banco que gerencia várias contas e
* possibilita as transações.
*
* Deve lidar com as condições de disputa.
**/

#ifndef SISTEMABANCARIO_H
#define SISTEMABANCARIO_H

#include <iostream>
#include <list>
#include "Conta.h"
#include "Cliente.h"

using std::cin;
using std::cout;
using std::endl;
using std::list;
using std::string;

class SistemaBancario {

    // Lista encadeada de contas
    list<Conta*> contas;

public:

    //Construtor padrão
    SistemaBancario();

    //Destrutor
    ~SistemaBancario();

    void print(); // Corrigir depois

};

#endif // SISTEMABANCARIO_H
