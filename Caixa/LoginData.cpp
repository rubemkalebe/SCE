#include "LoginData.h"

LoginData::LoginData() {
    contaIn = "";
    senhaIn = "";
}

bool LoginData::login() {
    // Verifica dados com o sistema
    // Se os dados baterem, retorna true... Senão, retorna false
    cout << "Digite o número da conta: ";
    cin >> contaIn;
    // Verifica se conta existe
    cout << "Digite a senha: ";
    cin >> senhaIn;
    // Verifica senha
}

string LoginData::getContaIn() const {
    return contaIn;
}

string LoginData::getSenhaIn() const {
    return senhaIn;
}

void LoginData::setContaIn(string contaIn) {
    if(contaIn != "") {
        this->contaIn = contaIn;
    }
}

void LoginData::setSenhaIn(string senhaIn) {
    if(senhaIn != "") {
        this->senhaIn = senhaIn;
    }
}
