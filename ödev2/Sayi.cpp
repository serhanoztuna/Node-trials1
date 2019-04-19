#include <iostream>
#include <string>
#include "sayi.h"
#include "bagilListe.h"
using namespace std;
BagilListe *list = new BagilListe();
BagilListe *list2 = new BagilListe();
void Sayi::sayiekle(string sayi1) {
	for (int i = 0; i<sayi1.length(); i++)
		{
			char chr = sayi1[i];
			int rakam = chr - 48;
			list->elemanekle(rakam);
		}
	list->listele();
}void Sayi::sayiekle2(string sayi2) {
	for (int i = 0; i<sayi2.length(); i++)
		{
			char chr = sayi2[i];
			int rakam = chr - 48;
			list2->elemanekle(rakam);
		}
	list2->listele();
}
