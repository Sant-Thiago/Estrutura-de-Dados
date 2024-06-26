#include <iostream>
#include "stack.h"

using namespace std;

int main() {
    stack pilha1;
    StackType item;
    int opcao;
    
    cout << "Programa gerador de pilha:\n";

    do {
        cout << "Digite 0 para parar o programa!\n";
        cout << "Digite 1 para inserir um elemento!\n";
        cout << "Digite 2 para remover um elemento!\n";
        cout << "Digite 3 para imprimir a pilha!\n";
        cout << "Digite 4 para ver o tamanho da pilha!\n";
        cout << "Digite 5 para verificar se a pilha está vazia!\n";
        cout << "Digite 6 para verificar se a pilha está cheia!\n";
        cin >> opcao;

        if (opcao == 1 )
        {
            cout << "Digite o elemento a ser inserido:\n";
            cin >> item;
            pilha1.push(item);
        }
    } while (opcao != 0);
}
