#include <iostream>
#include <string>
#include "interval.h"


int main() {
	interval x(1, 2), y(3,7);
	y.afficher();
	interval c;
	c = y - x;
	c.afficher();
	system("pause>0");
}