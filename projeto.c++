#include <iostream>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main (int argc, char** argv) {
	
		    char reserva [20][10] = {
	        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
	        };
	        int fila = -1, acento = -1, op;
	        char cadeira = ' ', sim = ' ', nao = ' ', x = ' ', Jareservado =' ';
	        
	
	        while (true) {
		        std::cout <<"\tDigite uma fila entre 1 - 20: ";
		        std::cin >>fila;
		
		        std::cout <<"\tSelecione um Acento: [a][b][c][d][e][f][g][h][i][j]:  ";
		        std::cin >>cadeira;
		
		        //switch - case - break - default
		
		        switch (cadeira) {
			        case 'a': 
			            acento = 0;
			            break;
			    
			        case 'b': 
			            acento = 1;
			            break;
			    
			        case 'c': 
			            acento = 2;
			            break;
			    
			        case 'd':
				        acento = 3;
				        break;
				
			        case 'e':
				        acento = 4;
				        break;
				
			        case 'f':
				        acento = 5;
				        break;
				
			        case 'g': 
			            acento = 6;
			            break;
			    
			        case 'h':
				        acento = 7;
				        break;
				
			        case 'i': 
			            acento = 8;
			            break;
			    
			        case 'j': 
			            acento = 9;
			            break;
			    
			        default:
				        std::cout <<"O acento selecionado não existe";
		        }
					if (Jareservado = reserva[fila-1][acento]=='x'){
						std::cout << "\t\t\t\tA cadeira selecionada ja esta ocupada";
					}
		            reserva[fila-1][acento] = 'x';
		            std::cout<<"\n\t\t[a] [b] [c] [d] [e]\t[f] [g] [h] [i] [j] \n";
		            for (int x = 0; x <= 19; x++){
			            if (x!= 9) 	printf("\n\t0%d\t", x+1);
			            else    	printf("\n\t%d\t", x+1);
			
		                for (int y = 0; y <= 9; y++) {
				            printf("[%c] ", reserva[x][y]);
				
					            if (y==4) {
					            printf ("\t");
				            } 
			            }
		           }
		           printf ("\n");
		           
		            printf ("\nReservar outra poltrona?\n");
		            printf ("\n. Sim \n");
		            printf ("\n. Nao \n");
		            scanf ("%c ", &op);
		            
		            if (op == 2) 
					break;
		            else continue;
		    }
	return 0;
}