#include <iostream>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main ()
{
	int x, f, y, w, v, j, l;
	float h;
	char z [20000], g, q;
	
	cout << "Ola, infelizmente nosso passeio chegou ao fim... Gostaria de deixar uma avaliacao para futuras melhorias? (S/N)\n";
	cin >> g;
	
	if(g == 'n' || g == 'N'){
	
	   cout << "\nNos do Museu Multitematico de Sao Paulo desejamos a todos, uma boa tarde!\n\n";
	   
	   system("pause");
	   return 0;
	}
	
	cout << "\nQual foi a exposicao escolhida?\nEvolucao Tecnologica(1)\n150 anos de Santos Dumont(2)\n100 anos da Semana da Arte Moderna(3)\nOlimpiadas de Paris(4)\n";
	cin >> j;
	
	cout << "\nQual foi o horario no inicio de sua visita?\n09:00(1)\n10:10(2)\n11:20(3)\n12:30(4)\n";
	cin >> f;
	
	cout << "\nNos conte sua opiniao, ela e muito importante para nos!\n";
	cout << "Em uma escala de 0 a 5, sendo 0 pessimo e 5 excelente, o que achou da nossa experiencia no Museu?\n";
	cin >> x;
	
	cout << "Em uma escala de 0 a 5, sendo 0 pessimo e 5 excelente, o que achou de nossas esculturas no Museu?\n";
	cin >> y;
	
	cout << "Em uma escala de 0 a 5, sendo 0 pessimo e 5 excelente, o que achou dos temas escolhidos para o Museu?\n";
	cin >> w;
	
	cout << "Em uma escala de 0 a 5, sendo 0 pessimo e 5 excelente, o que achou do tema que lhe foi apresentado a voce?\n";
	cin >> l;
	
	cout << "Em uma escala de 0 a 5, sendo 0 pessimo e 5 excelente, o que achou ambiente do Museu?\n";
	cin >> v;
	
	h = (x + y + w + v + l) / 5;
	
	cout << "\nMuito Obrigado pelo seu feedback! Nos do Museu Multitematico de Sao Paulo desejamos a todos, uma boa tarde!";
	cout << "\n\nGostaria de deixar algum comentario adicional (S/N)?\n";
	cin >> q;
	
	if(q == 'n' || q == 'N'){
		
		system("pause");
		return 0;
	}
	
	else if(q != 'n' || q != 'N'){
		
		cout << "\nIsso sera otimo para sempre podermos melhorar!\nResuma em uma palavra onde podemos melhorar!\n\n";
		cin >> z;
	}
	
	FILE *ava;
	ava = fopen("Avaliacoes.csv","a");
	fprintf(ava, "Horario Inicial da Visita:\n09:00(1)\n10:10(2)\n11:20(3)\n12:30(4)");
	fprintf(ava, "\n\nHorário da Visita: %d", f);
	fprintf(ava, "\nExposicoes para serem escolhidas:\nEvolucao Tecnologica(1)\n150 anos de Santos Dumont(2)\n100 anos da Semana da Arte Moderna(3)\nOlimpiadas de Paris(4)");
	fprintf(ava, "\n\nExposicao Escolhida: %d", j);
	fprintf(ava, "\nNota da Experiência: %d", x);
	fprintf(ava, "\nNota das Esculturas: %d", y);
	fprintf(ava, "\nNota dos Temas: %d", w);
	fprintf(ava, "\nNota do Ambeinte: %d", v);
	fprintf(ava, "\nMédia: %.2f", h);
	fprintf(ava, "\nComentário Do Visitante: %s\n\n", z);

	system("pause");
  return 0;
}