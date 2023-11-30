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
	
	cout << "\nQual pintor(a) foi responsavel pela obra Abapuru?\n1)Anita Malfati\n2)Oswaldo de Andrade\n3)Tarsila do Amaral\n4)Di Cavalcanti\n\n";
	cin >> f;
	
	if(f == 3){
		
		cout << "Resposta Correta!\n\n";
	}
	
	else if (f != 3){
	 	
	    cout << "Resposta Errada, Numero 3)\n\n";
	}
	
	cout << "Quem foi responsavel pela escultura Ascencao?\n1) Victor Brecheret\n2) Ribeiro Couto\n3) Guilherme de Almeida\n4) Wilhelm Haarberg\n\n";
	cin >> z;
	
	if(z == 1){	
		
		cout << "Resposta Correta!\n\n";
	}
	
	else if(z != 1){
		
		cout << "Resposta Errada, Numero 1)\n\n";
	}
	
	cout << "Qual escritor, presente na Semana de Arte Moderna, tambem era politico?\n1) Georg Przyrembe\n2) Plinio Salgado\n3) John Graz\n4) Guiomar Novais\n\n";
	cin >> h;
	
	if(h == 2){
		
		cout << "Resposta Correta!\n\n";
	}
	
	else if(h != 2){
		
		cout << "Resposta Errada, Numero 2)\n\n";
	}
	
	cout << "Espero que tenha gostado e nao esqueca de visitar nossas outras exposicoes!\n";

	FILE *ava;
	ava = fopen("Semana da Arte Moderna.txt","a");
	fprintf(ava, "Respostas corretas respectivamente:\n1) 3\n2) 1\n3) 2\n");
	fprintf(ava, "\nRespostas do participante respectivamente:\n1) %d\n2) %d\n3) %d\n\n", f, z, h);

	system("pause");                                             
  return 0;                          
}