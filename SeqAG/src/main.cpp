#include <iostream>
using namespace std;
#include "auxiliaries/Configuration.h"
#include "ag/MoonSlow.h"
#include "ag/Population.h"

int main(void) {
	MoonSlow ml(Ackley::ID);
	Population *p = ml.run();
	int idx = p->getFittest();

	p->getChromosome(idx)->print(p->getFunctionID());

	delete p;
	cout << "END" << endl;
	return 0;
}
