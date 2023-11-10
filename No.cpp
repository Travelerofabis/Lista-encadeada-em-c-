///////Jos� Viecili///////
#include <iostream>
using namespace std;

struct No {
    int conteudo;
    No* vizinho;
};

void mostrarListaEncadeada(No* cabeca);

int main() {
    // Criando os n�s
    No* no500 = new No;
    No* no1000 = new No;
    No* no2000 = new No;

    // Preenchendo os conte�dos dos n�s
    no500->conteudo = 500;
    no1000->conteudo = 1000;
    no2000->conteudo = 2000;

    // Ligando os n�s para formar a lista encadeada
    no500->vizinho = no1000;
    no1000->vizinho = no2000;
    no2000->vizinho = NULL; // O �ltimo n� aponta para NULL

    // Mostrar informa��es da lista encadeada
    mostrarListaEncadeada(no500);

    // Lembre-se de liberar a mem�ria alocada para evitar vazamentos de mem�ria
    delete no500;
    delete no1000;
    delete no2000;
}

void mostrarListaEncadeada(No* cabeca) {
    No* atual = cabeca;

    while (atual != NULL) {
        cout << "Conte�do: " << atual->conteudo << endl;
        cout << "Endere�o do n�: " << atual << endl;
        cout << "Endere�o do vizinho: " << atual->vizinho << endl;
        cout << endl;

        atual = atual->vizinho;
    }
}

