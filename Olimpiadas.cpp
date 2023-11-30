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
	
	cout << "\nQual a nova categoria apresentada nessas Olimpiadas?\n1) Canoagem\n2) Breaking\n3) Esgrima\n4) Motocross\n\n";
	cin >> f;
	
	if(f == 2){
		
		cout << "Resposta Correta!\n\n";
	}
	
	else if (f != 2){
	 	
	    cout << "Resposta Errada, Numero 2)\n\n";
	}
	
	cout << "Quantas vezes Paris ja sediou as Olimpiadas?\n1) 0\n2) 1\n3) 2\n4) 3\n\n";
	cin >> z;
	
	if(z == 3){	
		
		cout << "Resposta Correta!\n\n";
	}
	
	else if(z != 3){
		
		cout << "Resposta Errada, Numero 3)\n\n";
	}
	
	cout << "Qual modalidade saiu das Olimpiadas?\n1) Handebol\n2) Esgrima\n3) Karate\n4) Tenis de mesa\n\n";
	cin >> h;
	
	if(h == 3){
		
		cout << "Resposta Correta!\n\n";
	}
	
	else if(h != 3){
		
		cout << "Resposta Errada, Numero 3)\n\n";
	}
	
	cout << "Espero que tenha gostado e nao esqueca de visitar nossas outras exposicoes!\n";

	FILE *ava;
	ava = fopen("Olimpiadas_2024.csv","a");
	fprintf(ava, "Respostas corretas respectivamente:\n1) 2\n2) 3\n3) 3\n");
	fprintf(ava, "\nRespostas do participante respectivamente:\n1) %d\n2) %d\n3) %d\n\n", f, z, h);

	system("pause");                                             
  return 0;                          
}