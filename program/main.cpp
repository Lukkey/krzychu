#include <iostream>
#include <fstream>
#include <conio.h>
#include <cstdlib> //deklaracja potrzebnych bibliotek

using namespace std;

struct pacjenci{ //utworzenie struktury pacjentów
	string imie, nazwisko, telefon; //deklaracja zmiennych
	int wiek;};
int main(){ //utworzenie funkcji main
	int a;      //deklaracja zmiennych
	int liczbapacjentow;
	ofstream plik;  			//zmienna plikowa
	plik.open("plik1.csv"); 		//utworzenie pliku
	do{
		system("CLS"); //czyszczenie ekranu
		cout << "****************MENU****************" << endl; //wypisanie menu
		cout << "1. Zdefiniowanie danych pacjentow i zapisanie do pliku" << endl;
		cout << "2. Odczyt danych z pliku" << endl;
		cout << "3. Usuniecie pliku\n" << endl;
		cout << "0. Wyjscie" << endl;
		cout << "************************************" << endl;
		cin>>a;
		switch(a){ //wybor opcji
		case 1:	{
		system("CLS");{
		pacjenci pacjent;
		cout<<"Wybrales opcje numer 1 czyli zdefiniowanie danych pacjentow."<<endl; //wypisanie na ekranie
		cout<<"Dane ilu pacjentow chcesz wprowadzic? : ";
		cin>>liczbapacjentow; //wpisanie liczby pacjentow do zmiennej liczbapacjentow
		plik<<"imie;nazwisko;wiek;telefon\n"; 		//zapisanie do pliku nag³ówków
				for (int i=0;i<liczbapacjentow;i++)  //pêtla iloœci pacjentów
				{
					cout<<"Imie: "; //wypisanie na ekranie
					cin>>pacjent.imie;  //wpisanie do zmiennej
					cout<<"Nazwisko: ";
					cin>>pacjent.nazwisko;
					cout<<"Telefon: ";
					cin>>pacjent.telefon;
					cout<<"Wiek: ";
					cin>>pacjent.wiek;
					plik<<pacjent.imie<<";";   //wpisywanie do pliku zmiennych
					plik<<pacjent.nazwisko<<";"; //które wype³nialiœmy rêcznie
					plik<<pacjent.telefon<<";";
					plik<<pacjent.wiek<<"\n";
					system("CLS");}
				cout<<"Zapisano pomyslnie"<<endl;
				plik.close(); //zamkniecie pliku
				getch();}
			break;	}
		case 2:{
			system("CLS");
			fstream plik; //utworzenie pliku
			plik.open( "plik1.csv", ios::in ); //ustawienie plikowi praw
			if( plik.good() == true ){ //warunek
	string dane;
	do{
	getline(plik, dane);
	cout<<dane<<endl;}
	while(!plik.eof()); 			//wypisywanie tekstu do koñca pliku
	getch();
	plik.close();     //koniec pêtli, która wypisuje dane po uprzednim sprawdzeniu, czy plik istnieje
	}
	else cout<<"Niestety nie udalo sie otworzyc pliku.";
	getch();
	break;}
	case 3:{
	if( remove( "plik1.csv" ) == 0 ) //warunek
	printf( "Plik zostal usuniety." );   //usuniêcie pliku
	else
	printf( "Niestety plik nie zostal usuniety." );
	plik.close();  		//zamkniêcie pliku
	getch();
	break;}
	}
	}
while(a!= 0); //powtarzanie petli dopoki a bedzie rozne od 0
}
