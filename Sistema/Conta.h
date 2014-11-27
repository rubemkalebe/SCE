/**
* A classe Conta modela uma conta de um
* banco.
**/

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
    int saldo;

    // Status da conta (a conta pode estar ativa ou não)
    bool status;

public:

    // Construtor padrão da classe
    Conta(Cliente* cliente, int saldo = 0);

    // Destrutor
    ~Conta();

    // Imprime informações da conta
    void print();

    // Métodos get e set para atributos privados
    Cliente* getCliente() const;
    string getNumeroConta() const;
    string getSenha() const;
    int getSaldo() const;
    bool getStatus() const;
    void setCliente(Cliente* cliente);
    void setNumeroConta(string numeroConta);
    void setSenha(string senha);
    void setSaldo(int saldo);
    void setStatus(bool status);

private:

    // Gera um número de conta aleatório
    string geraNumeroConta();

};

#endif // CONTA_H
