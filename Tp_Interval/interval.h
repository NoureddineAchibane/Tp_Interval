#pragma once

class interval {
private :
	double m_born_inf = 0.0, m_born_sup = 0.0;
public:
	interval();
	interval(double x);
	interval(double y, double x);
	void afficher()const;
	friend interval operator-(interval& x, interval& y);
};

