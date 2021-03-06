#include "funkcje.h"
#include <ctime>

using namespace std;
Funkcje F;

//Creating new fille if not exist, and check if fille open
bool Funkcje::Check_file(){
	fstream plik;
	plik.open("ToDo.txt", ios::app);
	if(plik.good()==false){
		plik.close();
		return false;
	}
	else 
	{
		plik.close();
		return true;
	}
}

//Adding a string of text to ToDo file
void Funkcje::Add_File(){
	string Header; // In short what task is
	string description; // Full description of tash
	time_t s_date; // When you add task
	int f_date; // When Tash should be finished
	if(F.Check_file()==true)
	{
		fstream file;
		file.open("ToDo.txt",ios::out | ios::app);
		cout<<"Podaj nag³ówek zadania";
		cin>>Header;
		cout<<"Podaj opis zadania";
		cin>>description;
		s_date=0;
		cout<<"Podaj liczbê dni na ukoñczenie zadania";
		cin>>f_date;
		cout<<"Do tej pory dziala";
		file<<Header;
		file<<endl;
		file<<description;
		file<<endl;
		file<<s_date;
		file<<endl;
		file<<f_date;
		file<<endl;
	}
}
