#include <iostream>
#include "funkcje.h"
using namespace std;
int main()
{
	int Odp; //var that choose with one case choose
	setlocale( LC_ALL, "" ); //This allow me to use polich characters;
	
	//Looping a main function in order to keep aplication working until a user choose to exit;
	do {
	cout<<"Witaj, jak� akcj� chcesz wykona�?: "<<endl;
	cout<<"1. Wy�wietl zadania"<<endl;
	cout<<"2. Edytuj zadanie"<<endl;
	cout<<"3. Dodaj zadanie"<<endl;
	cout<<"4. Zako�cz zadanie"<<endl;
	cout<<"5. Usu� zadanie"<<endl;
	cout<<"6. Zako�cz dzia�anie programu"<<endl;

	cin>> Odp;
	
	switch(Odp){
		case 1: {cout<<"Wyswietlanie"; break;}
		case 2: {cout<<"Edytowanie"; break;}
		case 3: {cout<<"Dodawanie"; break;}
		case 4: {cout<<"Zaka�czanie"; break;}
		case 5: {cout<<"Usuwanie"; break;}
		case 6: {cout<<"Wychodzenie"; break;}
	}
	getchar();
	} while(Odp!=6);
	return 0;
}
