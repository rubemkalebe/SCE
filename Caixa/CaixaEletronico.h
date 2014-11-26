/**
* A classe CaixaEletronico simula a máquina homônima
* que realiza transações bancárias.
**/

#ifndef CAIXAELETRONICO_H
#define CAIXAELETRONICO_H

#include <iostream>
#include "LoginData.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

class CaixaEletronico {

    // Quantidade de dinheiro disponível no caixa
    int qntdDisponivel;

public:

    CaixaEletronico();

    // Métodos get e set para atributos privados
    int getQntdDisponivel() const;
    void setQntdDisponivel(int qntdDisponivel);

};

#endif // CAIXAELETRONICO_H
