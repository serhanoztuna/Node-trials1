#include <iostream>
#include <string>
#include "bagilListe.h"
using namespace std;
BagilListe::BagilListe() {
	esas = NULL;
	boyut = 0;
}
bool BagilListe::bosmu() {
	return esas;
}
int BagilListe::Uzunluk()
{
	return boyut;
}
void BagilListe::elemanekle(int eleman) {
	dugum *ydugum = new dugum();
	ydugum->veri = eleman;
	ydugum->o1 = NULL;
	ydugum->s1 = NULL;
	if (boyut == 0) {
		esas = ydugum;
		boyut++;
	}
	else {
			dugum  *gecici = esas;
				while (gecici->s1 != NULL)
					gecici = gecici->s1;
				gecici->s1 = ydugum;
		ydugum->o1 = gecici;
		boyut++;
	}
}
void BagilListe::listele() {
	dugum *gecici = esas;
		do
		{
			cout << gecici->veri << "-";
			gecici = gecici->s1;
			
		} while (gecici != NULL);
}
BagilListe::~BagilListe() { delete esas; boyut = 0; }
