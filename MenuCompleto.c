#include<stdio.h>
#include<math.h>

int main(){
	
	//espaço para o numero do comando
	char comando;
	
	do
	{
		//Parte visual do menu
		printf("Digiteo o numero do comando");
		printf("\n1-Ver numero  par ou impar");
		printf("\n2-Potencia do numero");
		printf("\n3-Raiz do numero");
		printf("\n4-Informar ano bissexto");
		printf("\n5-Media ponderada de 3 notas");
		printf("\n6-Media e verificacao de 2 notas");
		printf("\n7-Calcular a fatorial de um numero");
		printf("\n8-verificar o numero sendo primo ou nao ");
		printf("\n9-");
		printf("\n10-Imprimir o nome e matricula sendo a matricula em hexadecimal");
		printf("\n0-Sair do menu");
		printf("\nComando:  ");
		
		//Para digitar o comando
		scanf("%d",&comando);
		
		//Comandos do menu
		switch(comando){
			//Sair do menu
			case 0:
				
				printf("Adeus, obrigado por usar esse menu\n\n\n\n");
				
				break;
			//Ver se um numero é par ou impar
			case 1:{
				int PI;
				
				printf("\n\nDigite um numero inteiro para descobrir se é par ou impar:  ");
				scanf("%d", &PI);
				
				if(PI %2 == 0){
					printf("\n%d Numero Par\n\n", PI);
				}
				
				else{
					printf("\n%d Numero Impar\n\n", PI);
				}
				
				break;}
				//Calcular a potencia
			case 2:{
				float a;
				int b;
				float potencia = 1;
				int i=0;
				
				printf("\n\nDigite um numero para calcular sua potencia:  ");
				scanf("%f", &a);
				
				printf("\nDigite a potencia inteira do numero:  ");
				scanf("%d", &b);
				
				for( i=0; i < b; i++){
					potencia *= a;
				}
				printf("\nO resultado da potencia tem um valor de: %f\n\n", potencia);
				
				break;}
				//Tirar raiz
			case 3:{
				float x;
				float y;
				float raiz;
				
				printf("Digite um numero para se tirar a raiz:  ");
				scanf("%f", &x);
				
				printf("Digite o numero que vai ser o indice:  ");
				scanf("%f", &y);
				
				raiz = pow(x,1.0/y);
				
				printf("Raiz do numero:  %f\n\n", raiz); 
				break;}
				//Verificar se é bissexto
			case 4:{
				int ano;
				
				printf("\n\nDigite o ano para verificar se é bissexto:  ");
				scanf("%d", &ano);
				
				if(ano %4 == 0){
					printf("\n%d tem um dia extra, sendo ano bissexto\n\n", ano);
				}
				else{
					printf("\n%d possui nenhum dia extra, por não ser bissexto\n\n", ano);
				}
				break;}
				//Media ponderada de 3 notas
			case 5:{
				float Nota1;
				float Nota2;
				float Nota3;
				float Media;
				
				printf("\n\nDigite a nota da sua Avaliacao 1, de 0 a 100 pontos:  \n");
				scanf("%f", &Nota1);
				
				printf("\n\nDigite a nota da sua Avaliacao 2, de 0 a 100 pontos:  \n");
				scanf("%f", &Nota2);
				
				printf("\n\nDigite a nota da sua Avaliacao 3, de 0 a 100 pontos:  \n");
				scanf("%f", &Nota3);
				
				Media = (Nota1 + Nota2 + Nota3) / 3;
				
				if(Media < 0 || Media > 100){
					printf("\n%f Media invalida, inicie o comando novamente\n\n", Media);
				}
				else if(Media < 60){
					printf("\nMedia de %f abaixo de 60 pontos, voce foi reprovado\n\n", Media);
				}
				else if(Media < 101){
					printf("\nMedia de %f superior a 60 pontos, voce foi aprovado\n\n", Media);
				}
				break;}
				//Media e verificacao de 2 notas
			case 6:{
				float Nota1;
				float Nota2;
				float Media;
				
				printf("\n\nDigite a nota da sua Avaliacao 1, de 0 a 10 pontos:  \n");
				scanf("%f", &Nota1);
				
				if(Nota1 < 0 || Nota1 > 10){
					printf("\n%f Nota invalida, inicie o comando novamente\n\n", Nota1);
				}
				else{
					printf("\n\nDigite a nota da sua Avaliacao 2, de 0 a 10 pontos:  \n");
					scanf("%f", &Nota2);
					
					if(Nota2 <0 || Nota2 > 10){
						printf("\n%f Nota invalida, inicie o comando novamente\n\n", Nota2);
					}
					else{
						Media = (Nota1 + Nota2) / 2;
						
						printf("\nVoce tem uma media de: %f\n\n", Media);
					}
				}
				break;}
				//Calcular a fatorial
			case 7:{
				int numero;
				int fatorial = 1;
				int menos = 0;
				int i=0;
				
				printf("\n\nDigite um numero para calcular sua fatorial:  ");
				scanf("%d", &numero);
				
				int limite = numero;
				
				for( i=1; i < limite; i++){
					
					menos = i - 1;
					fatorial *= (numero - menos);
				}
				printf("\nA fracional do numero tem um valor de: %d\n\n", fatorial);
				
				break;}
				//verificar o numero sendo primo ou nao 
			case 8:{
				int numero;
				int resultado;
				int i;
				
				printf("\n\nDigite um numero para verificar o mesmo sendo primo ou nao:  ");
				scanf("%d", &numero);
				
				for( i=1; i <= numero; i++){
					
					if(numero % i == 0){
						resultado++;
					}
				}
				if(resultado < 3){
					printf("\nNumero: %d\nResultado: primo\n\n", numero);
				}
				else{
					printf("\nNumero: %d\nResultado: nao primo\n\n", numero);
				}
				break;}
			case 9:{
				
				break;}
				//Imprimir o nome e matricula sendo a matricula em hexadecimal
			case 10:{
				long int Matricula;
				char Nome[100];
				
				printf("\n\nDigite seu nome:  \n");
				scanf("%s", Nome);
				
				printf("Digite o numero da sua matricula: \n");
				scanf("%d",&Matricula);
				
				printf("Sua matricula e nome sao %X e %s\n\n", Matricula, Nome);
				
				break;}
			//Caso um comando invalido seja digitado
			default:
				printf("\n\nDigite um numero de comando valido\n\n");
				break;
		}
	//Repetir menu até ser digitado o comando 0	
	}while(comando != 0);
}
