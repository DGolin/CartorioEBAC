#include <stdio.h> // Biblioteca de comunica��o com o usu�rio
#include <stdlib.h> // Biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> // Biblioteca de aloca��es de texto por regi�o
#include <string.h> // Biblioteca respons�vel por cuidar das string

int registro() // Fun��o respons�vel por CADASTRAR os usu�rios no sistema

{
	// Inic�o da cria��o de vari�veis/string
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	char endereco[100];
	char numero[10];
	char renda[40];	
	// Final da cria��o de vari�veis/string
	
	printf("Digite o CPF a ser cadastrado: "); // Coletando informa�oes do usu�rio
	scanf("%s", cpf); // %s Refere-se a string
	
	strcpy(arquivo, cpf); // Responsavel por criar os valores das String
	
	FILE *file; // Procura e abre o FILE na biblioteca
	file = fopen(arquivo, "w"); // Cria o arquivo dentro do file
	fprintf(file, cpf); // Salva o valor da vari�vel
	fclose(file); // Fechar o arquivo
	
	file = fopen(arquivo, "a"); // Altera o arquivo
	fprintf(file,"\nNome:"); // Atualiza e salva o valor da vari�vel
	fclose(file); // Fecha o arquivo
	
	printf("Digite o nome a ser cadastrado: "); // Coleta informa��es
	scanf("%s", nome); // %s refere-se a string
	
	file = fopen(arquivo, "a"); // Altera o arquivo
	fprintf(file, nome); // Atualiza e salva o valor da vari�vel
	fclose(file); // Fecha o arquivo
	
	file = fopen(arquivo, "a"); // Altera o arquivo
	fprintf(file,"\nSobrenome:"); // Atualiza e salva o valor da vari�vel
	fclose(file); // Fecha o arquivo
	
	printf("Digite o sobrenome a ser cadastrado: "); // Coleta informa��es
	scanf("%s", sobrenome); // %s refere-se a string
	
	file = fopen(arquivo, "a"); // Altera o arquivo
	fprintf(file, sobrenome); // Atualiza e salva o valor da vari�vel
	fclose(file); // Fecha o arquivo
	
	file = fopen(arquivo, "a"); // Altera o arquivo
	fprintf(file,"\nCargo:"); // Atualiza e salva o valor da vari�vel
	fclose(file); // Fecha o arquivo
	
	printf("Digite o cargo a ser cadastrado: "); // Coleta informa��es
	scanf("%s", cargo); // %s refere-se a string
	
	file = fopen(arquivo, "a"); // Altera o arquivo
	fprintf(file, cargo); // Atualiza e salva o valor da vari�vel
	fclose(file); // Fecha o arquivo
	
	file = fopen(arquivo, "a"); // Altera o arquivo
	fprintf(file,"\nRenda mensal de: R$"); // Atualiza e salva o valor da vari�vel
	fclose(file); // Fecha o arquivo
	
	printf("Digite a renda mensal a ser cadastrado: R$ "); // Coleta informa��es
	scanf("%s", renda); // %s refere-se a string
	
	file = fopen(arquivo, "a"); // Altera o arquivo
	fprintf(file, renda); // Atualiza e salva o valor da vari�vel
	fclose(file); // Fecha o arquivo
	
	system("pause");
	
}

int consultar() // Fun��o respons�vel por CONSULTAR os usu�rios no sistema
{
	setlocale(LC_ALL, "Portuguese"); // Definindo a linguagem
	
	// Inic�o da cria��o de vari�veis/string
	char cpf[40];
	char conteudo[200];
	// Final da cria��o de vari�veis/string
	
	printf("Digite o CPF a ser consultado: "); // Coletando informa�oes do usu�rio
	scanf("%s", cpf); // %s Refere-se a string
	
	FILE *file; // Abre a pasta file
	file = fopen(cpf, "r"); // L� o arquivo cpf
	
	
if(file == NULL) // Caso n�o encontre o CPF informado, envia a seguinte mensagem:
    {
	printf("\nCPF n�o encontrado, verifique se o numero digitado esta correto!.\n\n"); // Mensagem informando na tela que o CPF est� incorreto
    }
	
	
while(fgets(conteudo, 200, file) != NULL) 
// (WHILE = enquanto) (FGETS = buscar o conteudo) Salvando na variavel conteudo(string) os 200 caracteres que estao dentro do arquivo, so vai parar quando for nulo

	{
	printf("\nEssas s�o as informa��es do usu�rio: "); // Mostra para o 
	printf("%s", conteudo); // %s Refere-se a string
	printf("\n\n"); // \n Pula linha
	}
	
	system("pause"); // Pausa a tela ao inv�s de retornar autom�ticamente
}

int deletar() // Fun��o respons�vel por DELETAR os usu�rios no sistema

{
	// Inic�o da cria��o de vari�veis/string
	char cpf[40];
	// Final da cria��o de vari�veis/string
	
	printf("Digite o CPF do usu�rio a ser deletado: "); // Solicita o CPF a ser deletado
	scanf("%s", cpf); // %s Refere-se a string
	
	FILE *file; // Abre a pasta file
	file = fopen(cpf, "r"); // L� o arquivo cpf
	fclose(file); // Fecha o arquivo

	if (file == NULL) // Caso n�o encontre o CPF informado, envia a seguinte mensagem:
	{
	printf("\nCPF de usu�rio n�o encontrado!\n\n"); // Informa que o CPF n�o foi encontrado
	system("pause"); // Pausa a tela ao inv�s de retornar autom�ticamente
	}
	
	else // Se nenhuma das express�es anteriores forem verdadeiras, execute estes comandos
	{
		
	if(remove(cpf) == 0) // Remove o CPF informado
	{
	printf("\nCPF de usu�rio deletado com sucesso!\n\n "); // Informa que o CPF foi apagado com sucesso
	system("pause"); // Pausa a tela ao inv�s de retornar autom�ticamente
	}
    
    }
    
}	



int main() // Ponto de partida para a execu��o do programa / Inic�o da chamada das fun��es
{
	// Inic�o da cria��o de vari�veis/string
	int opcao=0; 
	int laco=1;
	// Final da cria��o de vari�veis/string
	
	for(laco=1;laco=1;)
	{
	    system("cls"); // Respons�vel por limpar a tela
		
    	setlocale(LC_ALL, "Portuguese"); // Definindo a linguagem
	
	          // Mostra na tela o MENU
        printf(">>> Cart�rio da EBAC <<<\n\n"); // In�cio do menu
    	printf("Escolha a op�ao desejada do menu:\n\n");
    	printf("\t1 - Registrar nomes\n");
    	printf("\t2 - Consultar nomes\n");
    	printf("\t3 - Deletar nomes\n\n");
    	printf("Op��o:"); // Fim do menu
	
    	scanf("%d", & opcao); // Armazenando a escolha do usu�rio
	
    	system("cls"); // Respons�vel por limpar a tela
	
    switch(opcao) // Inic�o da sele��o do MENU
    	{
    		case 1:
    		registro(); // Chamada da fun��o REGISTRO
    		break; 
		
    		case 2:
    		consultar(); // Chamada da fun��o CONSULTAR
    		break;
		
    		case 3:
    		deletar(); // Chamada da fun��o DELETAR
    		break;
		
    		default: // Op��o que n�o existe no MENU
    		printf("Essa op��o n�o est� dispon�vel\n\n"); // Avisa na tela do usu�rio que a o��o nao existe
    		system("pause"); // Pausa a tela ao inv�s de retornar autom�ticamente
    		break;
    	} // Final da sele��o
	
    }
    
}
