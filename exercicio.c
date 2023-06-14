#include <stdio.h>
#include <locale.h> //regras pt-br
#include <string.h> //dado tipo string
#include <stdlib.h> //para usar vetores com struct
#include <unistd.h> //adicionar a função pause no case 4
#define TAM 5
//define o número do vetor para 5 alunos que podem ser cadastrados
struct aluno_cad { //struct para guardar as variáveis relacionadas aos alunos cadastradas
    char nome [50];
    char plano [10];
    double peso;
    double altura;
    int idade;
};
typedef struct aluno_cad aluno_cad;
//redefine a struct para apenas o nome "aluno_cad"
int main() {
    int opcao2;
    opcao2 = 1;
    while(opcao2 == 1){
      setlocale(LC_ALL, "Portuguese");
      //definindo a linguagem como português para que funcione as
      //acentuações e regras ao decorrer do código
      aluno_cad aluno;
      int i; //contagem e incremento
      int opcao; // opção selecinada com o comando switch
      double total; //total no caixa (soma dos planos)
      total = 0;
      int adolescente, adulto, idoso; //média de idade dos alunos
      adolescente = 0;
      adulto = 0;
      idoso = 0;
      system("clear");
      printf("===================================\n");
      printf("____________ACADEMIA 42___________\n");
      printf("===================================\n");
      printf("===========SEJA BEM VINDO==========\n");
      printf("selecione abaixo oque deseja fazer:\n");
      printf("\n [1] - conferir planos\n");
      printf("\n [2] - cadastro de alunos\n");
      printf("\n [3] - checar os alunos cadastrados\n");
      printf("\n [4] - consultar caixa\n");
      printf("\n [5] - consultar faixa etária dos alunos\n");
      printf("\n");
      scanf("%d", &opcao);
      //lê a opção desejada
      switch(opcao) {
          case 1:
              system("clear");
              printf("\n=========PLANOS DISPONÍVEIS=========\n");
              printf("Plano Basic----------------------59,90\n");
              printf("Garante acesso à academia 2x na semana\n");
              printf("Plano Plus-----------------------79,90\n");
              printf("Garante acesso à academia 5x na semana\n");
              printf("Plano Extreme-------------------129,90\n");
              printf("Garante acesso à academia 7x na semana\n");
              printf("Além de cadeira de massagem e nutricionista\n");
              break;
        
          case 2:
              system("clear");
              printf("===================================\n");
              printf("____________ACADEMIA 42____________\n");
              printf("===================================\n");
              printf("===========ÁREA DE CADASTRO========\n");
              printf("\n Cadastre aqui 5 alunos para Academia 42:\n");
              printf("\n Serão cadastrados:\nNome, plano, peso, altura e idade\n");
              printf("\n Atenção ao escrever a opção de plano:\nOpções disponíveis: ([basic, plus e extreme]):\n");
              printf("\n Para mais informações sobre os planos,\nvolte ao menu e consulte a opção [1]\n");

              aluno_cad lista[TAM];
              for (i=0; i<TAM; i++) {
                  printf("\n(%dº aluno cadastrado)", i+1);
                  puts ("\nNOME:");
                  scanf ("%50s", &lista[i].nome); 
                  puts ("\nPLANO:");
                  scanf ("%10s", &lista[i].plano);
                  puts ("\nPESO:");
                  scanf ("%lf", &lista[i].peso);
                  puts ("\nALTURA:");
                  scanf ("%lf", &lista[i].altura);
                  puts ("\nIDADE:");
                  scanf ("%d", &lista[i].idade);
              }
              break;  
        
          case 3:
              system("clear");
              printf("==================================\n");
              printf("____________ACADEMIA 42___________\n");
              printf("===================================\n");
              printf("======LISTA ALUNOS CADASTRADOS=====\n");
              //aluno_cad lista[TAM]; 
              for (i=0; i<TAM; i++) {
                  printf("----------- ALUNO %d ------------\n", i+1);
                  printf ("NOME: %s\n", lista[i].nome);
                  printf ("PLANO: %s\n", lista[i].plano);
                  if (!strcmp(lista[i].plano,"basic")){
                    total = total + 59.90;
                  } else if (!strcmp(lista[i].plano, "plus")){
                     total = total + 79.90;
                  } else {
                    total = total + 129.90;
                  }
                   if (lista[i].idade > 18 && lista[i].idade < 60) 
                      adulto = adulto + 1;
                  else if (lista[i].idade < 18)
                      adolescente = adolescente + 1;
                  else idoso = idoso + 1;
                  printf ("PESO: %.0lf\n", lista[i].peso);
                  printf ("ALTURA: %.2lf\n", lista[i].altura);
                  printf ("IDADE: %d\n", lista[i].idade);
              }
              break;
        
          case 4: 
              system("clear");
              printf("\n");
              printf("===================================\n");
              printf("____________ACADEMIA  42___________\n");
              printf("===================================\n");
              printf("=======CONSULTA FAIXA ETÁRIA=======\n");
              printf(" Nº DE ADOLESCENTES: %d\n", adolescente);
              printf(" Nº DE ADULTOS: %d\n",adulto);
              printf(" Nº DE IDOSOS: %d\n",idoso);
              break;
      
          case 5:
              system("clear");
              printf("===================================\n");
              printf("____________ACADEMIA  42___________\n");
              printf("===================================\n");
              printf("=========CONSULTA DO CAIXA=========\n");
              printf(" Total em caixa: %.2lf\n", total);
              break;
      }
      printf("\n Pressione [1] p/ voltar ao menu incial ou [0] para encerrar:\n");
      printf("\n");
      scanf("%d", &opcao2);
    }
    return 0;
  }