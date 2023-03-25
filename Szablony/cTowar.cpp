#include "cTowar.h"

cTelewizor::cTelewizor()
{
	przekatna = 0.0;
	nazwaTowaru = "unknown";
	wiekTowaru = 0;
	cenaTowaru = 0.0;
	iloscTv++;
}

cTelewizor::~cTelewizor()
{
	iloscTv--;
}

cTelewizor::cTelewizor(double _przekatna, string _nazwaTowaru, int _wiekTowaru, double _cenaTowaru)
{
	przekatna = _przekatna;
	nazwaTowaru = _nazwaTowaru;
	wiekTowaru = _wiekTowaru;
	cenaTowaru = _cenaTowaru;
	iloscTv++;
}

void cTelewizor::wypiszTelewizor()
{
	cTowar::wypiszTowar();
	cout << "\nPrzekatna: " << przekatna;

}

void cTelewizor::f_wypisz()
{
	cout << "\n\nLiczba telewizorow: " << iloscTv;
}

