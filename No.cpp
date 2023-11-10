///////José Viecili///////
#include <iostream>
using namespace std;

struct No {
    int conteudo;
    No* vizinho;
};

void mostrarListaEncadeada(No* cabeca);

int main() {
    // Criando os nós
    No* no500 = new No;
    No* no1000 = new No;
    No* no2000 = new No;

    // Preenchendo os conteúdos dos nós
    no500->conteudo = 500;
    no1000->conteudo = 1000;
    no2000->conteudo = 2000;

    // Ligando os nós para formar a lista encadeada
    no500->vizinho = no1000;
    no1000->vizinho = no2000;
    no2000->vizinho = NULL; // O último nó aponta para NULL

    // Mostrar informações da lista encadeada
    mostrarListaEncadeada(no500);

    // Lembre-se de liberar a memória alocada para evitar vazamentos de memória
    delete no500;
    delete no1000;
    delete no2000;
}

void mostrarListaEncadeada(No* cabeca) {
    No* atual = cabeca;

    while (atual != NULL) {
        cout << "Conteúdo: " << atual->conteudo << endl;
        cout << "Endereço do nó: " << atual << endl;
        cout << "Endereço do vizinho: " << atual->vizinho << endl;
        cout << endl;

        atual = atual->vizinho;
    }
}

