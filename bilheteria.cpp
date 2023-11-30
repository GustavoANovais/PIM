#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <conio.h>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

#define PA 29.90
#define PJ 29.90
#define PM 0
#define PPA 14.90
#define PI 14.90

int main ()
{
	srand(static_cast < unsigned int > (time(nullptr)));
	
	char x, r, h;
	int y, a, b, c, d, e, l, w;
	float z;
	int s = rand();
	
	do{
	
	system("Color 4");
	printf("\t\t\t888b     d888     888b     d888      .d8888b.      8888888b.\n");
	printf("\t\t\t8888b   d8888     8888b   d8888     d88P  Y88b     888   Y88b\n");
	printf("\t\t\t88888b.d88888     88888b.d88888     Y88b.          888    888\n");
	printf("\t\t\t888Y88888P888     888Y88888P888      Y888b.        888   d88P\n");
	printf("\t\t\t888 Y888P 888     888 Y888P 888        Y88b.       8888888P\n");
	printf("\t\t\t888  Y8P  888     888  Y8P  888          888       888\n");
	printf("\t\t\t888       888     888       888    Y88b  d88P      888\n");
	printf("\t\t\t888       888     888       888      Y8888PY       888\n\n");
	getch();
	system("Color F");
	
	cout << "\nBom dia, seja bem vindo a bilheteria do Museu Multitematico de Sao Paulo, selecione o horario para o passeio.\nPara pagamentos em DINHEIRO, somente nos caixas da Bilheteria!";
    cout << "\nPara qual exposicao seria?\n\n(1) Evolucao Tecnologica\n(2) Olimpiadas de Paris\n(3) 100 anos da Semana da Arte Moderna\n(4) 150 anos de Santos Dumont\n\n";
    cin >> w;
    
    cout << "\nTemos horarios disponiveis para:\n09:00(1)\n10:10(2)\n11:20(3)\n12:30(4)\n\n";
	cin >> l;
   
	cout << "\nQuantas entradas serao?:\n\n";
	cout << "Temos entradas para:\nAdultos\nJovens\nIdosos\nMenores de 6 anos\nProfessores e/ou Estudantes\n";
	
	do{	
	    cout << "\nQuantas entradas para Adultos?[R$29,90]\n";
	    cin >> y;
		
        cout << "\nQuantas entradas para Jovens[R$29,90]?\n";
        cin >> a;
        
        cout << "\nQuantas entradas para Idosos?[R$14,90]\n";
        cin >> d;

    	cout << "\nQuantas entradas para Menores de 6 anos?[Isencao de taxa]\n";
    	cin >> b;

    	cout << "\nQuantas entradas para Professores e/ou Estudantes?[R$14,90]\n";
    	cin >> c;
    	
    	e = y + b + a + c + d;
    	
    	cout << "\nDeram o total de " << e << " entradas, confere? (S/N)\n";
    	cin >> x;
    	
      }while (x == 'n' || x == 'N');
      
      z = (PA * y) + (PJ * a) + (PI * d) + (PPA * c) + (PM * b);
	  
      cout << "\nTotal de R$" << z << " e o total de " << e << " entradas.\n\nQual seria a forma de pagamento?\n\nAceitamos:\nDebito(D)\nCredito(C)\n";
	  cin >> r; 
  
      if(r == 'c' || r == 'd' || r == 'C' || r == 'D'){
      	
      	cout << "\nInsira, Aproxime ou Passe o seu cartao e coloque sua senha.\n\n";
      	
      	srand(s);
        cout << "Sua nota fiscal: " << s << "MMSP" << endl;
     }

        cout << "\n\nGostaria de mais ingressos para outra ou a mesma exposicao? (S/N)\n";
        cin >> h;
        
      }while (h == 'S' || h == 's');

      	cout << "\nTenha um bom passeio!\n\n";
	  
    
	FILE *ava;
	ava = fopen("Bilheteria.csv","a");
	fprintf(ava, "Exposicoes Disponiveis:\nEvolucao Tecnologica(1)\nOlimpiadas de Paris 2024(2)\n100 anos da Semana da Arte Moderna(3)\n150 anos de Santos Dumont(4)\n");
	fprintf(ava, "\nExposicao Escolhida: %d", w);
    fprintf(ava, "\n\nHorários Disponíveis:\n09:00(1)\n10:10(2)\n11:20(3)\n12:30(4)\n");
	fprintf(ava, "\nHorário da Visita: %d", l);
    fprintf(ava, "\nQuantidade de ingressos: %d", e);
	fprintf(ava, "\nValor total: %.2f", z);
	fprintf(ava, "\nForma de Pagamento (Débito(d) ou Crédito(c)?): %c\n", r);
	fprintf(ava, "Nota fiscal: %dMMSP\n\n", s);
	  
	  system("pause");
	return 0;
}