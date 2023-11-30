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
	
	cout << "\nQual o nome do primeiro computador?\n1) Macintosh\n2) ENIAC\n3) IBM 7090\n4) ENIGMA\n\n";
	cin >> f;
	
	if(f == 2){
		
		cout << "Resposta Correta!\n\n";
	}
	
	else if (f != 2){
	 	
	    cout << "Resposta Errada, Numero 2)!\n\n";
	}
	
	cout << "Qual foi a primeira empresa de computadores a ser criada?\n1) IBM\n2) Acer\n3) Apple\n4) Lenovo\n\n";
	cin >> z;
	
	if(z == 1){	
		
		cout << "Resposta Correta!\n\n";
	}
	
	else if(z != 1){
		
		cout << "Resposta Errada, Numero 1)\n\n";
	}
	
	cout << "Qual foi o primeiro processador da Intel?\n1) Celeron\n2) 4004\n3) 8080\n4) Xeon\n\n";
	cin >> h;
	
	if(h == 2){
		
		cout << "Resposta Correta!\n\n";
	}
	
	else if(h != 2){
		
		cout << "Resposta Errada, Numero 2)\n\n";
	}
	
	cout << "Espero que tenha gostado e nao esqueca de visitar nossas outras exposicoes!\n";

	FILE *ava;
	ava = fopen("Evolucao Tecnologica.csv","a");
	fprintf(ava, "Respostas corretas respectivamente:\n1) 2\n2) 1\n3) 2\n");
	fprintf(ava, "\nRespostas do participante respectivamente:\n1) %d\n2) %d\n3) %d\n\n", f, z, h);

	system("pause");                                             
  return 0;                          
}