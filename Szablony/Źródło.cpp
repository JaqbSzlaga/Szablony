#include <iostream>
#include<string>
#include "cTowar.h"


using namespace std;
int main()
{

    cTowar<string, int, double>* T1 = new cTowar<string, int, double>("Lg", 10, 4000);
    T1->wypiszTowar();
    cTelewizor T4(65,"Panasonic",5,3499.99);
    T4.wypiszTelewizor();
    cTelewizor T5;
    T5.setNazwaTowaru("Sony");
    T5.getNazwaTowaru();
    T5.setCenaTowaru(2500);
    T5.getCenaTowaru();
    T5.setwiekTowaru(4);
    T5.getWiekTowaru();
    T5.setPrzekatna(85);
    T5.getPrzekatna();
    cTelewizor T6;
    T6.wypiszTelewizor();
   


    cTowar<string,int,double>** Tab = new cTowar< string, int, double>*[2];
    for (int i = 0; i <=1; i++)
        try {
        Tab[i] = new cTowar< string, int, double>;
    }
    catch (bad_alloc)
    {
        cout << "\n\n Blad przy utworzeniu tablicy";
        cin.ignore();
        exit(0);
    }
    Tab[0] = T1;
    Tab[1] = new cTowar< string, int, double>("Panasonic",7,4500);
    for (int i = 0; i <= 1; i++)
    {
        Tab[i]->wypiszTowar();
      
    }
    

    cTelewizor::f_wypisz();


    return 0;
}