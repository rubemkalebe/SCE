#ifndef CONTA_H
#define CONTA_H

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

#include <iostream>
#include "Cliente.h"

class Conta {

    // Cliente responsável pela conta
    Cliente* cliente;

    // Numero da conta
    string numeroConta;

    // Senha da conta
    string senha;

    // Saldo da conta
    double saldo;

    // Status da conta (a conta pode estar ativa ou não)
    bool status;

public:

    // Construtor padrão da classe
    Conta(Cliente* cliente, double saldo = 0);

    // Destruturo
    ~Conta();

    void print();

private:

    // Gera um número de conta aleatório
    string geraNumeroConta();

};

#endif // CONTA_H
