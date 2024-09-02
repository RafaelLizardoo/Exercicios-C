#include <stdio.h>
#include <string.h>

// Função para verificar se um número é par ou ímpar
void verificarParOuImpar() {
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("%d é par.\n", num);
    } else {
        printf("%d é ímpar.\n", num);
    }
}

// Função para calcular a soma de 1 a N
void calcularSoma() {
    int N, soma = 0;
    printf("Digite um número N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        soma += i;
    }

    printf("A soma de 1 a %d é %d.\n", N, soma);
}

// Função para verificar se um número é primo
void verificarPrimo() {
    int num, isPrime = 1;
    printf("Digite um número: ");
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = 0;
    } else {
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime) {
        printf("%d é um número primo.\n", num);
    } else {
        printf("%d não é um número primo.\n", num);
    }
}

// Função para imprimir a tabela de multiplicação
void imprimirTabelaMultiplicacao() {
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}

// Função para inverter uma string
void inverterString() {
    char str[100];
    printf("Digite uma string: ");
    scanf("%s", str);

    int len = strlen(str);

    printf("String invertida: ");
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
}

// Função para calcular o fatorial de um número
int fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}

void calcularFatorial() {
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);

    printf("Fatorial de %d é %d\n", num, fatorial(num));
}

// Função para encontrar o maior e menor elemento de um array
void encontrarMaiorMenor() {
    int arr[10], maior, menor;

    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    maior = menor = arr[0];

    for (int i = 1; i < 10; i++) {
        if (arr[i] > maior) {
            maior = arr[i];
        }
        if (arr[i] < menor) {
            menor = arr[i];
        }
    }

    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
}

// Função para ordenar um array de números em ordem crescente
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void ordenarArray() {
    int arr[10];

    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, 10);

    printf("Array ordenado:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Função para converter temperatura de Celsius para Fahrenheit
void converterTemperatura() {
    float celsius, fahrenheit;
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;
    printf("%.2f graus Celsius é igual a %.2f graus Fahrenheit.\n", celsius, fahrenheit);
}

// Função para contar o número de vogais em uma string
void contarVogais() {
    char str[100];
    int count = 0;
    printf("Digite uma string: ");
    scanf("%s", str);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            count++;
        }
    }

    printf("Número de vogais na string: %d\n", count);
}

// Função main
int main() {
    int escolha;

    do {
        printf("\nEscolha uma opção:\n");
        printf("1. Verificar se um número é par ou ímpar\n");
        printf("2. Calcular a soma de números de 1 a N\n");
        printf("3. Verificar se um número é primo\n");
        printf("4. Imprimir a tabela de multiplicação\n");
        printf("5. Inverter uma string\n");
        printf("6. Calcular o fatorial de um número\n");
        printf("7. Encontrar o maior e o menor elemento de um array\n");
        printf("8. Ordenar um array de números em ordem crescente\n");
        printf("9. Converter temperatura de Celsius para Fahrenheit\n");
        printf("10. Contar o número de vogais em uma string\n");
        printf("0. Sair\n");
        printf("Opção: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1: verificarParOuImpar(); break;
            case 2: calcularSoma(); break;
            case 3: verificarPrimo(); break;
            case 4: imprimirTabelaMultiplicacao(); break;
            case 5: inverterString(); break;
            case 6: calcularFatorial(); break;
            case 7: encontrarMaiorMenor(); break;
            case 8: ordenarArray(); break;
            case 9: converterTemperatura(); break;
            case 10: contarVogais(); break;
            case 0: printf("Saindo...\n"); break;
            default: printf("Opção inválida!\n");
        }

    } while (escolha != 0);

    return 0;
}
