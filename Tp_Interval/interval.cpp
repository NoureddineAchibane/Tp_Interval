#include "interval.h"
#include <iostream>
using namespace std;

interval::interval():m_born_inf(-1.0),m_born_sup(0.0)
{
}

interval::interval(double x)
{
	if (x <= 0) {
		m_born_inf = x;
		m_born_sup = 1.0;
	}
	else
	{
		m_born_inf = 0.0;
		m_born_sup = x;
	}
}

interval::interval(double y, double x)
{
	if (y > x) {
		cout << "L'intervalle que vous avez entrer n'est pas valide" << endl;
	}
	else
	{
		m_born_inf = y;
		m_born_sup = x;
	}
}

void interval::afficher() const
{
	cout << "L'intervalle est [" << m_born_inf << "," << m_born_sup <<"]" << endl;
}


interval operator-(interval& x, interval& y)
{
	return interval(x.m_born_inf - y.m_born_inf,x.m_born_sup - y.m_born_sup);
}
