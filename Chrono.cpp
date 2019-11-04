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
		if (isData(g + n, m, a))
			g = g + n;
		else
		{
			for (int i = 0; i < n; i++)
			{
				if (isData(g + 1, m, a))
					g = g + 1;
				else if
					{
						m=
					}
					
			}
		}
	}

	void Date::addMese(int m)
	{

	}

	bool isAnnoBisestile(int y)
	{
		if (y % 400 == 0)
			return true;
		else if (y % 4 == 0 && y % 100 != 0)
			return true;
		else
			return false;
	}


	bool isData(int g, Mese m, int a)
	{

		if (m ==Mese::gen || m == Mese::mar || m == ::mag || m == Mese::lug || m == Mese::ago || m == Mese::ott || m == Mese::dic) && g >= 1 && g <= 31)
			return true;
		else if (m ==Mese::apr || m == Mese::giu || m == Mese::set || m == Mese::nov) && g >= 1 && g <= 30)
			return true;
		else if (m == Mese::feb && g >= 1 && g <= 29 && isAnnoBisestile())
			return true;
		else if (m == Mese::feb && g >= 1 && g <= 28 && !isAnnoBisestile())
			return true;
		else
			return false;
	}

}

int main()
{
    std::cout << "Hello World!\n";
}