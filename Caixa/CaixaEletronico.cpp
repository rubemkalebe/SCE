#include "CaixaEletronico.h"

CaixaEletronico::CaixaEletronico() {
    qntdDisponivel = 10000;
}

int CaixaEletronico::getQntdDisponivel() const {
    return qntdDisponivel;
}

void CaixaEletronico::setQntdDisponivel(int qntdDisponivel){
    (this->qntdDisponivel) += qntdDisponivel;
}


// Método principal
int main(int argc, char** argv) {

    char option;

    // Objeto para tratar login
    LoginData login;

    while(true) {

        cout << "Deseja logar-se? Pressione [S] ou [s]...";
        cin >> option;
        if((option == 'S') || (option == 's')) {
            if(login.login()) {
                // Menu e talz
            } else {
                continue;
            }
        } else {
            cout << "Opção inválida!!" << endl;
            continue;
        }

    }

    return 0;
}
