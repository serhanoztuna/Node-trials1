
#ifndef BagilListe_h
#define BagilListe_h
#include <iostream>
#include "dugum.h"
#include <string>
using namespace std;
class BagilListe {
private:
	dugum *esas;
	int boyut;
public:
	BagilListe();
	bool bosmu();
	int Uzunluk();
	void listele();
	void elemanekle(int eleman);
	~BagilListe();
};

#endif