#include <string>
#include<string.h>
#include <sstream>
#include <iostream>
#include "sayi.h"
#include "islem.h"
#include "bagilListe.h"
int main() {
	Ýslem *tpl = new Ýslem();
	Sayi *sayi1 = new Sayi();
	Sayi *sayi2 = new Sayi();
	
	cout << "x:";
	string x;
	string y;
	cin >> x;
	cout << "y:";
	cin >> y;
	sayi1->sayiekle(x);
	cout << endl;
	sayi2->sayiekle2(y);
	stringstream s(x);
	stringstream ss(y);
	int x2, y2;
	s >> x2;
	ss >> y2;
	tpl = x2 + y2;
	cout << endl << "toplam:" << tpl << endl;
	int a;
	cin >> a;
	return 0;
}