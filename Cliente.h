/**
* A classe Cliente modela um cliente de
* um banco.
**/

#ifndef CLIENTE_H
#define CLIENTE_H

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class Cliente {

    // Identificador para cliente
    unsigned int id;

    // Nome do cliente
    string nome;

    // CPF do cliente
    string cpf;

public:

    // Construtor da classe; Recebe um identificador para o cliente.
    Cliente(unsigned int id);

    // Imprime as informações do cliente.
    void print();

    // Métodos get e set para atributos privados.
    unsigned int getID() const;
    string getNome() const;
    string getCPF() const;
    void setID(unsigned int id);
    void setNome(string nome);
    void setCPF(string cpf);

};

#endif // CLIENTE_H
