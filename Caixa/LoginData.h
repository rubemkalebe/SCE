/**
* A classe LoginData é responsável por armazenar
* dados de um login e auxiliar essa ação.
**/

#ifndef LOGINDATA_H
#define LOGINDATA_H

#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class LoginData {

    // Número da conta digitado pelo usuário
    string contaIn;

    // Senha digitada pelo usuário
    string senhaIn;

public:

    // Construtor
    LoginData();

    // Faz login; compara dados com o sistema bancário
    bool login();

    // Métodos get e set para atributos privados
    string getContaIn() const;
    string getSenhaIn() const;
    void setContaIn(string contaIn);
    void setSenhaIn(string senhaIn);

};

#endif // LOGINDATA_H
