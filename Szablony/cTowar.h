#pragma once
#include<string>
#include<iostream>
using namespace std;

template<typename T1,typename T2,typename T3>
class cTowar
{
public:
	
	cTowar();
	cTowar(T1 _nazwaTowaru, T2 _wiekTowaru, T3 _cenaTowaru );
	T1 nazwaTowaru;
	T2 wiekTowaru;
	T3 cenaTowaru;
	static T2  iloscTv;
	virtual void wypiszTowar();
	void setNazwaTowaru(T1 n)
	{
		nazwaTowaru = n;
	}
	
	T1 getNazwaTowaru()
	{
		return nazwaTowaru;
	}
	void setwiekTowaru(T2 w)
	{
		wiekTowaru = w;
	}
	T2 getWiekTowaru()
	{
		return wiekTowaru;
	}
	void setCenaTowaru(T3 c)
	{
		cenaTowaru = c;
	}
	T3 getCenaTowaru()
	{
		return cenaTowaru;
	}
};
template<typename T1, typename T2, typename T3>
T2 cTowar<T1,T2,T3>::iloscTv = 0;

template<typename T1, typename T2, typename T3>
inline cTowar<T1, T2, T3>::cTowar()
{
	nazwaTowaru = "unknown";
	wiekTowaru = 0;
	cenaTowaru = 0.0;

}

template<typename T1, typename T2, typename T3>
inline cTowar<T1, T2, T3>::cTowar(T1 _nazwaTowaru, T2 _wiekTowaru, T3 _cenaTowaru)
{
	nazwaTowaru = _nazwaTowaru;
	wiekTowaru = _wiekTowaru;
	cenaTowaru = _cenaTowaru;
	try
	{
		if(cenaTowaru<0.0)
			throw std::out_of_range("\nNiepoprawna cena towaru!\n");
	}
	catch (std::exception& e)
	{
		std::cerr << e.what();
	}
}

template<typename T1, typename T2, typename T3>
inline void cTowar<T1, T2, T3>::wypiszTowar()
{
	
	cout << "\n\nNazwa towaru: " << nazwaTowaru;
	cout << "\nWiek Towaru: " << wiekTowaru;
	cout << "\nCena Towaru: " << cenaTowaru;
	
}

class cTelewizor :public cTowar<string,int,double>
{

public:
	double przekatna{};
	cTelewizor();
	~cTelewizor();
	cTelewizor(double _przekatna, string _nazwaTowaru, int _wiekTowaru, double _cenaTowaru);
	virtual void wypiszTelewizor();
	static void f_wypisz();
	void setPrzekatna(double p)
	{
		przekatna = p;
	}
	double getPrzekatna()
	{
		return przekatna;
	}
	
};
