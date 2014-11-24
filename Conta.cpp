#include "Conta.h"

Conta::Conta(Cliente* cliente, double saldo) {
    this->cliente = cliente;
    numeroConta = geraNumeroConta();
    // Leitura da senha
    cout << "Digite a senha: ";
    cin >> senha;
    this->saldo = saldo;
    status = true;
}

Conta::~Conta() {
    delete cliente;
}

void Conta::print() {
    cliente->print();
}

string Conta::geraNumeroConta() {
    string str = "";
    srand(time(NULL));
    int digito = rand() % 10;
    str += (digito + 48);
    for(int i = 1; i < 5; i++) {
        str += (((digito + i) % 10) + 48);
    }
    return str;
}
