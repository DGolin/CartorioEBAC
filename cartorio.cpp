#include <stdio.h> // Biblioteca de comunicação com o usuário
#include <stdlib.h> // Biblioteca de alocação de espaço em memória
#include <locale.h> // Biblioteca de alocações de texto por região
#include <string.h> // Biblioteca responsável por cuidar das string

int registro() // Função responsável por CADASTRAR os usuários no sistema

{
	// Inicío da criação de variáveis/string
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	char endereco[100];
	char numero[10];
	char renda[40];	
	// Final da criação de variáveis/string
	
	printf("Digite o CPF a ser cadastrado: "); // Coletando informaçoes do usuário
	scanf("%s", cpf); // %s Refere-se a string
	
	strcpy(arquivo, cpf); // Responsavel por criar os valores das String
	
	FILE *file; // Procura e abre o FILE na biblioteca
	file = fopen(arquivo, "w"); // Cria o arquivo dentro do file
	fprintf(file, cpf); // Salva o valor da variável
	fclose(file); // Fechar o arquivo
	
	file = fopen(arquivo, "a"); // Altera o arquivo
	fprintf(file,"\nNome:"); // Atualiza e salva o valor da variável
	fclose(file); // Fecha o arquivo
	
	printf("Digite o nome a ser cadastrado: "); // Coleta informações
	scanf("%s", nome); // %s refere-se a string
	
	file = fopen(arquivo, "a"); // Altera o arquivo
	fprintf(file, nome); // Atualiza e salva o valor da variável
	fclose(file); // Fecha o arquivo
	
	file = fopen(arquivo, "a"); // Altera o arquivo
	fprintf(file,"\nSobrenome:"); // Atualiza e salva o valor da variável
	fclose(file); // Fecha o arquivo
	
	printf("Digite o sobrenome a ser cadastrado: "); // Coleta informações
	scanf("%s", sobrenome); // %s refere-se a string
	
	file = fopen(arquivo, "a"); // Altera o arquivo
	fprintf(file, sobrenome); // Atualiza e salva o valor da variável
	fclose(file); // Fecha o arquivo
	
	file = fopen(arquivo, "a"); // Altera o arquivo
	fprintf(file,"\nCargo:"); // Atualiza e salva o valor da variável
	fclose(file); // Fecha o arquivo
	
	printf("Digite o cargo a ser cadastrado: "); // Coleta informações
	scanf("%s", cargo); // %s refere-se a string
	
	file = fopen(arquivo, "a"); // Altera o arquivo
	fprintf(file, cargo); // Atualiza e salva o valor da variável
	fclose(file); // Fecha o arquivo
	
	file = fopen(arquivo, "a"); // Altera o arquivo
	fprintf(file,"\nRenda mensal de: R$"); // Atualiza e salva o valor da variável
	fclose(file); // Fecha o arquivo
	
	printf("Digite a renda mensal a ser cadastrado: R$ "); // Coleta informações
	scanf("%s", renda); // %s refere-se a string
	
	file = fopen(arquivo, "a"); // Altera o arquivo
	fprintf(file, renda); // Atualiza e salva o valor da variável
	fclose(file); // Fecha o arquivo
	
	system("pause");
	
}

int consultar() // Função responsável por CONSULTAR os usuários no sistema
{
	setlocale(LC_ALL, "Portuguese"); // Definindo a linguagem
	
	// Inicío da criação de variáveis/string
	char cpf[40];
	char conteudo[200];
	// Final da criação de variáveis/string
	
	printf("Digite o CPF a ser consultado: "); // Coletando informaçoes do usuário
	scanf("%s", cpf); // %s Refere-se a string
	
	FILE *file; // Abre a pasta file
	file = fopen(cpf, "r"); // Lê o arquivo cpf
	
	
if(file == NULL) // Caso não encontre o CPF informado, envia a seguinte mensagem:
    {
	printf("\nCPF não encontrado, verifique se o numero digitado esta correto!.\n\n"); // Mensagem informando na tela que o CPF está incorreto
    }
	
	
while(fgets(conteudo, 200, file) != NULL) 
// (WHILE = enquanto) (FGETS = buscar o conteudo) Salvando na variavel conteudo(string) os 200 caracteres que estao dentro do arquivo, so vai parar quando for nulo

	{
	printf("\nEssas são as informações do usuário: "); // Mostra para o 
	printf("%s", conteudo); // %s Refere-se a string
	printf("\n\n"); // \n Pula linha
	}
	
	system("pause"); // Pausa a tela ao invés de retornar automáticamente
}

int deletar() // Função responsável por DELETAR os usuários no sistema

{
	// Inicío da criação de variáveis/string
	char cpf[40];
	// Final da criação de variáveis/string
	
	printf("Digite o CPF do usuário a ser deletado: "); // Solicita o CPF a ser deletado
	scanf("%s", cpf); // %s Refere-se a string
	
	FILE *file; // Abre a pasta file
	file = fopen(cpf, "r"); // Lê o arquivo cpf
	fclose(file); // Fecha o arquivo

	if (file == NULL) // Caso não encontre o CPF informado, envia a seguinte mensagem:
	{
	printf("\nCPF de usuário não encontrado!\n\n"); // Informa que o CPF não foi encontrado
	system("pause"); // Pausa a tela ao invés de retornar automáticamente
	}
	
	else // Se nenhuma das expressões anteriores forem verdadeiras, execute estes comandos
	{
		
	if(remove(cpf) == 0) // Remove o CPF informado
	{
	printf("\nCPF de usuário deletado com sucesso!\n\n "); // Informa que o CPF foi apagado com sucesso
	system("pause"); // Pausa a tela ao invés de retornar automáticamente
	}
    
    }
    
}	



int main() // Ponto de partida para a execução do programa / Inicío da chamada das funções
{
	// Inicío da criação de variáveis/string
	int opcao=0; 
	int laco=1;
	// Final da criação de variáveis/string
	
	for(laco=1;laco=1;)
	{
	    system("cls"); // Responsável por limpar a tela
		
    	setlocale(LC_ALL, "Portuguese"); // Definindo a linguagem
	
	          // Mostra na tela o MENU
        printf(">>> Cartório da EBAC <<<\n\n"); // Início do menu
    	printf("Escolha a opçao desejada do menu:\n\n");
    	printf("\t1 - Registrar nomes\n");
    	printf("\t2 - Consultar nomes\n");
    	printf("\t3 - Deletar nomes\n\n");
    	printf("Opção:"); // Fim do menu
	
    	scanf("%d", & opcao); // Armazenando a escolha do usuário
	
    	system("cls"); // Responsável por limpar a tela
	
    switch(opcao) // Inicío da seleção do MENU
    	{
    		case 1:
    		registro(); // Chamada da função REGISTRO
    		break; 
		
    		case 2:
    		consultar(); // Chamada da função CONSULTAR
    		break;
		
    		case 3:
    		deletar(); // Chamada da função DELETAR
    		break;
		
    		default: // Opção que não existe no MENU
    		printf("Essa opção não está disponível\n\n"); // Avisa na tela do usuário que a oção nao existe
    		system("pause"); // Pausa a tela ao invés de retornar automáticamente
    		break;
    	} // Final da seleção
	
    }
    
}
