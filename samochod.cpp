#include "samochod.h"

void samochod::setDrzwi(int liczba_drzwi)
{
	this->liczba_drzwi = liczba_drzwi;
}

void samochod::setCena(int cena)
{
	this->cena = cena;
}

int samochod::getDrzwi()
{
	return liczba_drzwi;
}

int samochod::getCena()
{
	return cena;
}

void samochod::imieNazwisko(string imie, string nazwisko)
{
	this->imie = imie;
	this->nazwisko = nazwisko;
}

samochod::samochod(string imie, string nazwisko, int cena)
{
	this->imie = imie;
	this->nazwisko = nazwisko;
	this->cena = cena;
	this->liczba_drzwi = 4;
}

samochod::samochod(int cena)
{
	this->imie = " ";
	this->nazwisko = " ";
	this->cena = cena;
	this->liczba_drzwi = 4;
}

samochod::~samochod()
{
}

double samochod::podatek(double procent, double wartosc_rynkowa)
{
	return wartosc_rynkowa * (procent / 100);
}