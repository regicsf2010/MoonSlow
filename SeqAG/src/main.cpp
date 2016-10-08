#include <iostream>
using namespace std;
#include "ag/Population.h"
#include "auxiliaries/Configuration.h"


int main(void) {
	Population *p = Population::createPopulation(Ackley::ID);
	cout << p->getChromosome(2)->getGene(0) << endl;
	p->getChromosome(2)->evaluate();
	cout << p->getChromosome(2)->getFitness() << endl;

	delete p;

	cout << "FIM" << endl;

	return 0;
}
