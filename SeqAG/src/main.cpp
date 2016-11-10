#include <iostream>
#include <chrono>
using namespace std;
#include "auxiliaries/Configuration.h"
#include "ag/MoonSlow.h"
#include "ag/Population.h"

int main(void) {
	MoonSlow ml(Ackley::ID);

	auto start = chrono::steady_clock::now();

	Population *p = ml.run();

	auto finish = chrono::steady_clock::now();
	//double elapsed = chrono::duration_cast<chrono::milliseconds>(finish - start).count();
	double elapsed = chrono::duration_cast<chrono::duration<double>>(finish - start).count();

	cout << "Time: " << elapsed << " (s)" << endl;

	int idx = p->getFittest();
	p->getChromosome(idx)->print(p->getFunctionID());

	//delete p;
	cout << "--END MOONSLOW--" << endl;
	return 0;
}


