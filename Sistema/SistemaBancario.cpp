#include "SistemaBancario.h"

SistemaBancario::SistemaBancario() {

    // Cria o cliente #1
    Cliente* cl1 = new Cliente(1);

    // Cria uma conta de teste para o cliente #1
    Conta* c1 = new Conta(cl1, 200.0);

    // Cria o cliente #2
    Cliente* cl2 = new Cliente(2);

    // Cria outra conta de teste para o cliente #2
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
    list<Conta*>::iterator it;
    for(it = contas.begin(); it != contas.end(); it++) {
        cout << "------------------" << endl;
        (*it)->print();
        cout << "------------------" << endl;
        cout << endl;
    }
}

bool SistemaBancario::deposito(int valor, string numeroConta) {
    list<Conta*>::iterator it;
    for(it = contas.begin(); it != contas.end(); it++) {
        if((*it)->getNumeroConta() == numeroConta) {
            (*it)->setSaldo(valor);
            return true;
        }
    }
    return false;
}

bool SistemaBancario::saque(int valor, string numeroConta) {
    list<Conta*>::iterator it;
    for(it = contas.begin(); it != contas.end(); it++) {
        if((*it)->getNumeroConta() == numeroConta) {
            if(((*it)->getSaldo() + ((-1)*valor)) >= 0) {
                (*it)->setSaldo((-1)*valor);
                return true;
            } else {
                return false;
            }
        }
    }
    return false;
}

int SistemaBancario::saldo(string numeroConta) {
    list<Conta*>::iterator it;
    for(it = contas.begin(); it != contas.end(); it++) {
        if((*it)->getNumeroConta() == numeroConta) {
            return (*it)->getSaldo();
        }
    }
    return -1;
}

// Método principal
int main(int argc, char** argv) {

    SistemaBancario s;
    string input;
    int valor;

    s.print();

    do {

        cout << endl;
        cout << "Entre com a operação: " << endl;
        cout << "\t\tDEPOSITO" << endl;
        cout << "\t\tSAQUE" << endl;
        cout << "\t\tSALDO" << endl;
        cout << "\t\tDESLIGAR" << endl << endl;
        cout << "\t\t\t\t: ";
        cin >> input;

        if(input == "DEPOSITO") {
            // operacao de deposito
            cout << "\t\t\t\t\tValor: ";
            cin >> valor;
            cout << "\t\t\t\t\tConta alvo: ";
            cin >> input;
            if(s.deposito(valor, input)) {
                cout << "\t\tDepósito efetuado com sucesso!!" << endl;
            } else {
                cout << "\t\tFalha ao efetuar depósito!!" << endl;
            }
        } else if(input == "SAQUE") {
            // operacao de saque
            cout << "\t\t\t\t\tValor: ";
            cin >> valor;
            cout << "\t\t\t\t\tConta alvo: ";
            cin >> input;
            if(s.saque(valor, input)) {
                cout << "\t\tSaque realizado com sucesso!!" << endl;
            } else {
                cout << "\t\tFalha ao efetuar saque!!" << endl;
            }
        } else if(input == "SALDO") {
            // operacao de saldo
            cout << "\t\t\t\t\tConta alvo: ";
            cin >> input;
            int tmp;
            if((tmp = s.saldo(input)) != -1) {
                cout << "\t\tSaldo da conta: " << tmp << endl;
            } else {
                cout << "\t\tConsulta inválida!!" << endl;
            }
        } else if(input == "DESLIGAR") {
            // encerra sistema
            cout << "***FIM DE EXECUÇÃO***" << endl << endl;
            break;
        } else {
            cout << "\t\tEntrada inválida!! Tente novamente!!" << endl;
        }

    } while(true);

    return 0;
}
