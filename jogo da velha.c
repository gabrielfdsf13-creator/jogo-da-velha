#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void exibir(char x[3][3]){
	printf("[ %c ] [ %c ] [ %c ]\n", x[0][0], x[0][1], x[0][2]);
	printf("[ %c ] [ %c ] [ %c ]\n", x[1][0], x[1][1], x[1][2]);
	printf("[ %c ] [ %c ] [ %c ]\n", x[2][0], x[2][1], x[2][2]);
	printf("\n");
}
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i = 0, j = 0, vitoria = 0, empate = 0, x = 1, y;
	char tabuleiro[3][3] = {{' ',' ',' '},
							{' ',' ',' '},
							{' ',' ',' '}};
	printf("=== JOGO DA VELHA ===\n");
	printf("\n");
	
	while(x == 1){
		empate = 0;
		printf("Vez do Jogador 1:\n");
		printf("\n");
		exibir(tabuleiro);
		do{
			if(tabuleiro[i][j] == 'X' || tabuleiro[i][j] == 'O'){
				printf("Posição já ocupada!\n");
			}
			printf("Digite o número da linha (0, 1 ou 2): ");
			scanf("%d", &i);
			printf("Digite o número da coluna (0, 1 ou 2): ");
			scanf("%d", &j);
	}	while(tabuleiro[i][j] == 'X' || tabuleiro[i][j] == 'O');
		tabuleiro[i][j] = 'X';
		
		// Verifica por vitória
		for(i = 0; i < 3; i++){
			if(tabuleiro[i][0] == 'X' && tabuleiro[i][1] == 'X' && tabuleiro[i][2] == 'X'){
				vitoria = 1;
			} else if(tabuleiro[0][i] == 'X' && tabuleiro[1][i] == 'X' && tabuleiro[2][i] == 'X'){
				vitoria = 1;
			} else if(tabuleiro[0][0] == 'X' && tabuleiro[1][1] == 'X' && tabuleiro[2][2] == 'X'){
				vitoria = 1;
			} else if(tabuleiro[0][2] == 'X' && tabuleiro[1][1] == 'X' && tabuleiro[2][0] == 'X'){
				vitoria = 1;
			}
			}
			
			// Verifica por empate
			for(i = 0; i < 3; i++){
				for(j = 0; j < 3; j++){
					if(tabuleiro[i][j] == 'X' || tabuleiro[i][j] == 'O'){
						empate++;
					}
				}
			}
		if(vitoria == 1){
			system("cls");
			exibir(tabuleiro);
			printf("Vitória do Jogador 1!");
			x = 0;
		} else if(empate == 9){
			system("cls");
			exibir(tabuleiro);
			printf("Empate! Fim de jogo");
			x = 0;
		}
		else{
			system("cls");
			empate = 0;
			printf("Vez do Jogador 2:\n");
			printf("\n");
			exibir(tabuleiro);
			do{
				if(tabuleiro[i][j] == 'X' || tabuleiro[i][j] == 'O'){
					printf("Posição já ocupada!\n");
				}
				printf("Digite o número da linha (0, 1 ou 2): ");
				scanf("%d", &i);
				printf("Digite o número da coluna (0, 1 ou 2): ");
				scanf("%d", &j);
		}	while(tabuleiro[i][j] == 'X' || tabuleiro[i][j] == 'O');
			tabuleiro[i][j] = 'O';
			
			// Verifica por vitória
			for(i = 0; i < 3; i++){
				if(tabuleiro[i][0] == 'O' && tabuleiro[i][1] == 'O' && tabuleiro[i][2] == 'O'){
					vitoria = 1;
				} else if(tabuleiro[0][i] == 'O' && tabuleiro[1][i] == 'O' && tabuleiro[2][i] == 'O'){
					vitoria = 1;
				} else if(tabuleiro[0][0] == 'O' && tabuleiro[1][1] == 'O' && tabuleiro[2][2] == 'O'){
					vitoria = 1;
				} else if(tabuleiro[0][2] == 'O' && tabuleiro[1][1] == 'O' && tabuleiro[2][0] == 'O'){
					vitoria = 1;
				}
				}
				
				// Verifica por empate
			for(i = 0; i < 3; i++){
				for(j = 0; j < 3; j++){
					if(tabuleiro[i][j] == 'X' || tabuleiro[i][j] == 'O'){
						empate++;
					}
				}
			}
			if(vitoria == 1){
				system("cls");
				exibir(tabuleiro);
				printf("Vitória do Jogador 2!");
				x = 0;
			} else if(empate == 9){
				system("cls");
				exibir(tabuleiro);
				printf("Empate! Fim de jogo");
				x = 0;
		}   else{
			system("cls");
			
		}
		}
			if(x == 0){
				printf("\n");
				printf("Quer jogar de novo? Digite 1 para sim e 0 para não: ");
				scanf("%d", &y);
				switch(y){
					case 1:
						x = 1;
						for(i = 0; i < 3; i++){
							for(j = 0; j < 3; j++){
								tabuleiro[i][j] = ' ';
							}
						}
						vitoria = 0;
						empate = 0;
						system("cls");
						break;
					case 0:
						x = 0;
						break;
					default:
						x = 0;
						printf("Valor inválido! Encerrando...");		
				}
			}
		}
	return 0;
}
