// Chrono.cpp : Questo file contiene la funzione 'main', in cui inizia e termina l'esecuzione del programma.
//

#include <iostream>
#include "Chrono.h"

namespace Chrono {

	Date::Date(int d, Mese mm, int y)
	{
		if (!= isData(d, mm, y))
			throw Invalid{};
		else
		{
			g = d;
			m = mm;
			a = y;
		}

	}

	void Date::addGiorno(int n)
	{

	}

	void Date::addMese(int m)
	{

	}



	bool isData(int g, Mese m, int a)
	{

		if (m == (Mese::gen || Mese::mar || Mese::mag || Mese::lug || Mese::ago || Mese::ott || Mese::dic) && g >= 1 && g <= 31)
			return true;
		else if (m == (Mese::apr || Mese::giu || Mese::set || Mese::nov) && g >= 1 && g <= 30)
			return true;
		else if (m == Mese::feb && g >= 1 && g <= 29 && isAnnoBisestile())
			return true;
		else if (m == Mese::feb && g >= 1 && g <= 28 && isAnnoBisestile())
			return true;
		else
			return false;
	}

}

int main() {

	std::cout << "CIao";
	return 0;
}

int main()
{
    std::cout << "Hello World!\n";
}