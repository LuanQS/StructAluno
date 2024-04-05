#include <stdio.h>
#include <string.h>

// Definição da struct Aluno
struct Aluno
{
    char nome[50];
    int matricula;
    float nota1, nota2, nota3;
};


float calcularMedia(struct Aluno aluno)
{
    return (aluno.nota1 + aluno.nota2 + aluno.nota3) / 3.0;
}


void adicionarAluno(struct Aluno aluno[], int *mediaAluno)
{
    printf("Adicione o nome do Aluno: ");
    scanf("%s", aluno[*mediaAluno].nome);
    printf("Adicione o número de matrícula do aluno: ");
    scanf("%d", &aluno[*mediaAluno].matricula);
    printf("Adicione a primeira nota do aluno: ");
    scanf("%f", &aluno[*mediaAluno].nota1);
    printf("Adicione a segunda nota do aluno: ");
    scanf("%f", &aluno[*mediaAluno].nota2);
    printf("Adicione a terceira nota do aluno: ");
    scanf("%f", &aluno[*mediaAluno].nota3);
    (*mediaAluno)++;
}


void imprimirAlunos(struct Aluno aluno[], int mediaAluno)
{
    printf("Informações dos Alunos:\n");
    for (int i = 0; i < mediaAluno; i++)
    {
        printf("Nome: %s\n", aluno[i].nome);
        printf("Matrícula: %d\n", aluno[i].matricula);
        printf("Nota 1: %.2f\n", aluno[i].nota1);
        printf("Nota 2: %.2f\n", aluno[i].nota2);
        printf("Nota 3: %.2f\n", aluno[i].nota3);
        printf("Média: %.2f\n", calcularMedia(aluno[i]));
        
    }
}

int main()
{
    struct Aluno alunos[100];
    int quantidadeAlunos = 0;
    char continuar = 's';

    while (continuar == 's' || continuar == 'S')
    {
        adicionarAluno(alunos, &quantidadeAlunos);
        printf("Deseja adicionar outro aluno? (s/n): ");
        scanf(" %c", &continuar);
    }

    imprimirAlunos(alunos, quantidadeAlunos);

    return 0;
}
