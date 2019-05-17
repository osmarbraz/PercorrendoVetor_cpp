//Declaração de bibliotecas
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
    //Declara o vetor
    int vet[5];
    
    //Inicializa o vetor
    vet[0] = 10;
    vet[1] = 20;
    vet[2] = 30;
    vet[3] = 40;
    vet[4] = 50;

    //Exibe os dados do vetor da forma tradicional
    cout << ">> Acesso ao Conteudo 1\n";
    for (int i = 0; i < 5; i++) {
        cout << "Vetor=" << vet[i] << "\n";
    }

    //Exibe os dados do vetor somando um valor inteiro ao ponteiro do vetor
    cout << ">> Acesso ao Conteudo 2\n";
    cout << "===================\n";
    for (int i = 0; i < 5; i++) {
        cout << "Vetor=" << *(vet + i) << "\n";
    }

    //Exibe os endereços do vetor acessando a referência do vetor
    cout << ">> Acesso aos Enderecos 1\n";
    for (int i = 0; i < 5; i++) {
        cout << "Vetor=" << &vet[i] << "\n";
    }

    //Exibe os endereços do vetor somando um valor inteiro a referência ao vetor
    cout << ">> Acesso aos Enderecos 2\n";
    cout << "vet=" << &vet << "\n";
    for (int i = 0; i < 5; i++) {
        cout << "Vetor=" << (vet + i) << "\n";
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}