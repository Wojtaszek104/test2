#include <iostream>
#include "samochod.h"

using namespace std;

int main()
{
	samochod s1("Maciej", "Opielowski", 5000), s2(10000);
	s1.setDrzwi(10);
	s1.setCena(5800);
	cout << s1.getDrzwi() << endl;
	cout << s1.getCena() << endl;
	cout << s1.podatek(15, 10000) << endl;
}
