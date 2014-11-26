#include "SistemaBancario.h"

SistemaBancario::SistemaBancario() {

    // Cria o cliente #1
    Cliente* cl1 = new Cliente(1);

    // Cria o cliente #2
    Cliente* cl2 = new Cliente(2);

    // Cria uma conta de teste
    Conta* c1 = new Conta(cl1, 200.0);

    // Cria outra conta de teste
    Conta* c2 = new Conta(cl2, 150.0);

    contas.push_back(c1);
    contas.push_back(c2);

}

SistemaBancario::~SistemaBancario() {
    while(!contas.empty()) {
        Conta* tmp = contas.front();
        contas.pop_front();
        delete tmp;
    }
}

void SistemaBancario::print() {
    Conta* tmp = contas.front();
    tmp->print();
}

int main(int argc, char** argv) {

    SistemaBancario s;

    s.print();

    std::cout << "Eiiii\n";

    return 0;
}
