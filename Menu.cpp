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
		printf("\n5-");
		printf("\n6-");
		printf("\n7-");
		printf("\n8-");
		printf("\n9-");
		printf("\n10-");
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
				
				printf("\n\nDigite um numero para calcular sua potencia:  ");
				scanf("%f", &a);
				
				printf("\nDigite a potencia inteira do numero:  ");
				scanf("%d", &b);
				
				for(int i=0; i < b; i++){
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
			case 5:
				
				break;
			case 6:
				
				break;
			case 7:
				
				break;
			case 8:
				
				break;
			case 9:
				
				break;
			case 10:
				
				break;
			//Caso um comando invalido seja digitado
			default:
				printf("\n\nDigite um numero de comando valido\n\n");
				break;
		}
	//Repetir menu até ser digitado o comando 0	
	}while(comando != 0);
}
