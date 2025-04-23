#include <stdio.h> //biblioteca de comunicação com o usuário
#include <stdlib.h> //biblioteca de alocação de espaço em memória
#include <locale.h> //biblioteca de alocações de texto por região
#include <string.h> //biblioteca responsável por cuidar dos string

void registro() //Função responsável por cadastrar os usuários no sistema
{
    //início da criação de veriáveis/string
    char arquivo[40];
    char cpf[40];
    char nome[40];
    char sobrenome[40];
    char cargo[40];
    //final da criação de variáveis/string
    
    printf("Digite o cpf  a ser cadastrado: "); //coletando indormações do usuário
    scanf("%s",cpf); //%s refere-se a string
    
    strcpy(arquivo, cpf); //Responsável por copiar os valores das strings
    
    FILE *file; //cria o arquivo
    file = fopen(arquivo, "w"); //cria o arquivo e o "w"significa escrever
    fprintf(file,cpf); //salva o valor da variável
    fclose(file); //fecha o arquivo
    
    file = fopen(arquivo, "a");
    
    fprintf(file,",");
    fclose(file);
    
    printf("Digite o nome a ser cadastrado: ");
    scanf("%s", nome);
    
    file = fopen(arquivo,"a");
    fprintf(file,nome);
    fclose(file);
    
    file = fopen(arquivo, "a");
    fprintf(file,",");
    fclose(file);
    
    printf("Digite o sobrenome a ser cadastrado: ");
    scanf("%s", cargo);
    
    file = fopen(arquivo, "a");
    fprintf(file,sobrenome);
    fclose(file);
    
    file = fopen(arquivo, "a");
    fprintf(file,",");
    fclose(file);
    
    printf("Digite o cargo a ser cadastrado: ");
    scanf("%s", cargo);
    
    file = fopen(arquivo, "a");
    fprintf(file,cargo);
    fclose(file);
    
    file = fopen(arquivo, "a");
    fprintf(file,",");
    fclose(file);
    
    system("pause");
}

void consulta()
{
    printf("Você escolheu consultar os nomes!");
    system("pause");
}

void deletar()
{
    char cpf[40];
    
    printf("Digite o CPF a ser deletado: ");
    scanf("%s", cpf);
    
    remove(cpf);
    
    FILE *file;
    file = fopen(cpf, "r");
    
    if(file == NULL)
    {
        printf("O usuário não se encontra no sistema!.\n");
        system("pause");
    }
}



int main ()
{
    int opcao=0; //Definindo as variáveis
    int laco=1;
    
    for(laco=1;laco=1;)
    {
        
        system("cls");
        
        setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
        
        printf("### Cartório da EBAC ###\n\n"); //início do menu
        printf("Escolha a opção desejada do menu:\n\n");
        printf("\t1 - Registrar nomes\n");
        printf("\t2 - Consultar nomes\n");
        printf("\t3 - Deletar nomes\n\n"); //final do menu
        
        scanf("%d", &opcao); //armazenando a escolha do usuário
        
        
        system("cls"); //responsável por limpar a tela
        
        
        switch(opcao) //início da seleçõ de menu
        {
                case 1:
                registro(); //chamada de funções
                break;
                
                case 2:
                consulta();
                break;
                
                case 3:
                deletar();
                break;
                
                default:
                printf("Essa opção não está disponível!\n");
                system("pause");
                break;
        }//fim da seleção
    }
}
