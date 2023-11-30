#include <iostream>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main ()
{
	int z, f, h;
	char g;
	
	cout << "Ola! Nesse questionario sera realizado perguntas sobre o que foi apresentado na exposicao, podemos prosseguir (S/N)?\n";
	cin >> g;
	
	if(g == 'n' || g == 'N'){
	
	   system("pause");
	   return 0;
	}
	
	cout << "\nQual o nome do aviao que foi feito o voo por Santos Dumont?\n1) Flyer\n2) 14 Bis\n3) Numero 6\n4) Deimoiselle\n\n";
	cin >> f;
	
	if(f == 2){
		
		cout << "Resposta Correta!\n\n";
	}
	
	else if (f != 2){
	 	
	    cout << "Resposta Errada, Numero 2)\n\n";
	}
	
	cout << "Em qual ano Santos Dumont voou pela primeira vez?\n1) 1901\n2) 1909\n3) 1907\n4) 1906\n\n";
	cin >> z;
	
	if(z == 4){	
		
		cout << "Resposta Correta!\n\n";
	}
	
	else if(z != 4){
		
		cout << "Resposta Errada, Numero 4)\n\n";
	}
	
	cout << "Alem dos aeromodelos e dos dirigiveis, qual foi sua outra invencao?\n1) Relogio de pulso\n2) Oculos de aviador\n3) Relogio de bolso\n4) Caneta Esferografica\n\n";
	cin >> h;
	
	if(h == 3){
		
		cout << "Resposta Correta!\n\n";
	}
	
	else if(h != 3){
		
		cout << "Resposta Errada, Numero 3)\n\n";
	}
	
	cout << "Espero que tenha gostado e nao esqueca de visitar nossas outras exposicoes!\n";

	FILE *ava;
	ava = fopen("Santos_Dumont.txt","a");
	fprintf(ava, "Respostas corretas respectivamente:\n1) 2\n2) 4\n3) 3\n");
	fprintf(ava, "\nRespostas do participante respectivamente:\n1) %d\n2) %d\n3) %d\n\n", f, z, h);

	system("pause");                                             
  return 0;                          
}