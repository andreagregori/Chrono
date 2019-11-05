// Chrono.cpp : Questo file contiene la funzione 'main', in cui inizia e termina l'esecuzione del programma.
//

#include <iostream>
#include <ostream>
#include <istream>
#include "Chrono.h"

namespace Chrono {

	Date::Date(int d, Mese mm, int y)
	{
		if (!isData(d, mm, y))
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
				else if (isData(1, Mese(int(m) + 1), a))
				{
					g = 1;
					m = Mese(int(m) + 1);
				}
				else if (isData(1, Mese(1), a + 1))
				{
					g = 1;
					m = Mese(1);
					a = a + 1;
				}
					
			}
		}
	}

	void Date::addMese(int mm)
	{
		if (isData(g, Mese(int(m) + mm), a))
		{
			m = Mese(int(m) + mm);
		}
		else {
			for (int i = 0; i < mm; i++)
			{
				if (isData(g, Mese(int(m) + 1), a))
					m = Mese(int(m) + 1);
				else
				{
					m = Mese(1);
					a = a + 1;
				}
					

			}
		}
		
	}

	void Date::addAnno(int n)
	{
		if (isData(g, m, a + n))
			a = a + n;
		else
			throw Invalid{};
	}

	Date Date::operator++(Date& d)				//Post-incremento (d++)
	{
		Date d1 = d;
		d.addGiorno(1);
		return d;
	}

	bool operator==(const Date& d1, const Date& d2)
	{
		if (d1.getGiorno() == d2.getGiorno() && d1.getMese() == d2.getMese() && d1.getAnno() == d2.getAnno())
			return true;
		else
			return false;
	}

	bool operator!=(const Date& d1, const Date& d2)
	{
		if (d1.getGiorno() == d2.getGiorno() && d1.getMese() == d2.getMese() && d1.getAnno() == d2.getAnno())
			return false;
		else
			return true;
	}

	ostream& operator<<(ostream& os, Date& d)
	{
		Chrono::prova
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
		if ((m == Mese::gen || m == Mese::mar || m == Mese::mag || m == Mese::lug || m == Mese::ago || m == Mese::ott || m == Mese::dic) && g >= 1 && g <= 31)
			return true;
		else if ((m ==Mese::apr || m == Mese::giu || m == Mese::set || m == Mese::nov) && g >= 1 && g <= 30)
			return true;
		else if (m == Mese::feb && g >= 1 && g <= 29 && isAnnoBisestile(a))
			return true;
		else if (m == Mese::feb && g >= 1 && g <= 28 && !isAnnoBisestile(a))
			return true;
		else
			return false;
	}

}

int main()
{
    std::cout << "Hello World!\n";
	std::cout << 
}