#include "Cliente.h"

Cliente::Cliente(unsigned int id) {
    this->id = id;
    cout << "Nome do cliente #" << id << ": ";
    std::getline(cin, nome);
    cout << "CPF do cliente: ";
    std::getline(cin, cpf);
}

void Cliente::print() {
    cout << "ClientID: " << id << endl;
    cout << "Nome do cliente: " << nome << endl;
    cout << "CPF do cliente: " << cpf << endl;
}

unsigned int Cliente::getID() {
    return id;
}

string Cliente::getNome() {
    return nome;
}

string Cliente::getCPF() {
    return cpf;
}

void Cliente::setID(unsigned int id) {
    if(id > 0) {
        this->id = id;
    }
}

void Cliente::setNome(string nome) {
    if(nome != "") {
        this->nome = nome;
    }
}

void Cliente::setCPF(string cpf) {
    if(cpf != "") {
        this->cpf = cpf;
    }
}
