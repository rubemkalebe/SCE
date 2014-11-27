#include "Conta.h"

Conta::Conta(Cliente* cliente, int saldo) {
    this->cliente = cliente;
    numeroConta = geraNumeroConta();
    // Leitura da senha
    cout << "Digite a senha do cliente #" << cliente->getID() << ": ";
    std::getline(cin, senha);
    this->saldo = saldo;
    status = true;
}

Conta::~Conta() {
    delete cliente;
}

void Conta::print() {
    if(status) {
        cliente->print(); // Imprime info de cliente
        cout << "Número da conta: " << numeroConta << endl;
        cout << "Saldo da conta: " << saldo << endl;
    } else {
        cout << "A conta " << numeroConta << " está desativada!" << endl;
    }

}

Cliente* Conta::getCliente() const {
    return cliente;
}

string Conta::getNumeroConta() const {
    return numeroConta;
}

string Conta::getSenha() const {
    return senha;
}

int Conta::getSaldo() const {
    return saldo;
}

bool Conta::getStatus() const {
    return status;
}

void Conta::setCliente(Cliente* cliente) {
    if(cliente != NULL) {
        this->cliente = cliente;
    }
}

void Conta::setNumeroConta(string numeroConta) {
    if(numeroConta != "") {
        this->numeroConta = numeroConta;
    }
}

void Conta::setSenha(string senha) {
    if(senha != "") {
        this->senha = senha;
    }
}

void Conta::setSaldo(int saldo) {
    (this->saldo) += saldo;
}

void Conta::setStatus(bool status) {
    this->status = status;
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
