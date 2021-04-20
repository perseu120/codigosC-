/*Fastminton
A Comiss~ao RegionaL de Fastminton (CRLF) organiza torneiros anuais deste novo e inusitado esporte
derivado do badminton. Neste ano, ocorrera a terceira edic~ao do grande torneio.
O antigo programador da comiss~ao (sobrinho da diretora) desenvolveu um sistema para capturar
e armazenar o resultado de cada ponto de uma partida, cujo resultado e salvo para um arquivo. Com
a sada do antigo programador, que deixou para tras algumas vers~oes defeituosas de seus programas,
a CRLF precisa de voc^e para garantir que os registros das emocionantes jogadas n~ao sejam perdidos,
conando-lhe a tarefa de escrever um programa para ler os resultados dos arquivos de registro.
Para auxilia-lo, a CRLF disponibilizou um resumo com as regras relevantes do Fastminton, que e,
basicamente, uma vers~ao mais curta (menor numero de games) do badminton:
 As partidas de Fastminton s~ao jogadas sempre com dois jogadores (oponentes) em uma quadra
separada ao meio por uma rede;
 Os jogadores s~ao identicados pela sua posic~ao no placar (jogador da esquerda, jogador da
direita);
 Uma partida e composta por tr^es games. Ganha quem alcancar dois games;
 Ganha o game quem alcancar ao menos 5 pontos e tiver uma diferenca de ao menos 2 pontos do
oponente, ou o primeiro a chegar em 10 pontos;
 O jogador da esquerda inicia sacando no primeiro game da partida; nos demais, o jogador que
inicia sacando e o que ganhou o ultimo game;
 Cada jogada resulta em um ponto, de quem sacou ou de quem recebeu o saque. Quem ganhou
o ponto ira sacar na proxima jogada.
Entrada
A entrada e composta por uma unica linha contendo uma sequ^encia de caracteres representando
a sequ^encia completa dos eventos de uma partida, podendo conter os caracteres S (ponto de quem
sacou), R (ponto de quem recebeu o saque) ou Q (anuncio de placar). A entrada n~ao contem anuncios
de placar consecutivos.
Sada
O programa devera imprimir uma linha contendo o placar atual para cada anuncio de placar (Q)
encontrado.
Caso a partida esteja em andamento, o anuncio devera ser na forma \GL (PL) - GR (PR)", onde
GL e GR representam o numero de games ganhos pelos jogadores da esquerda e da direita, e PL e PR
s~ao os pontos atuais dos jogadores da esquerda e da direita. Um asterisco (*) devera ser adicionado
no nal do marcador de pontos do jogador que ira sacar na proxima jogada.
Caso a partida ja esteja concluda, o anuncio sera na forma \GL - GR" com a palavra \(winner)"
adicionada no nal do marcador de games do jogador ganhador da partida.*/

#include <iostream>
#include<string>

using namespace std;

int main()
{
	int jg1=0, jg2=0, g1=0, g2=0;
	string x;
	bool saca=true, winner=false;

	cin >> x;
	
	for(int i=0; i<x.size(); i++)
	{
		if(x[i]=='S')
		{
			if(saca)
				jg1++;
			else
				jg2++;
		}
		else if(x[i]=='R')
		{
			if(saca){
				jg2++;
				saca=false;
			}
			else{
				jg1++;
				saca=true;
			}
		}
		else
		{		
			if(winner){
				if(g1==2)
					cout << g1 << " (winner) - " << g2 << endl;
				else
					cout << g1 << " - " << g2 << " (winner)" << endl;
			}
			else{
				if(saca)
					cout << g1 << " (" << jg1 << "*) - " << g2 << " (" << jg2 << ")\n";
				else
					cout << g1 << " (" << jg1 << ") - " << g2 << " (" << jg2 << "*)\n";
			}
		}
		
		
		if((jg1>=5 && jg1-jg2>=2) || jg1==10){
			g1++;
			jg1=0;
			jg2=0;
			
			if(g1==2){
				winner=true;
				saca=true;
			}
		}
		else if((jg2>=5 && jg2-jg1>=2) || jg2==10){
			g2++;
			jg1=0;
			jg2=0;
			
			if(g2==2){
				winner=true;
				saca=false;
			}
		}
	}
	
	return 0;
}
