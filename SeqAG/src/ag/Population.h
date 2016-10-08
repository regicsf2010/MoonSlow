/*
 * Population.h
 *
 *  Created on: Oct 7, 2016
 *      Author: reginaldo
 */

#ifndef AG_POPULATION_H_
#define AG_POPULATION_H_

#include "../abstract/Chromosome.h"

class Population {
private:
	Chromosome **chomos;
	double fitnessMean;
	double fitnessStd;
	int functionID;

public:
	Population(int functionID);
	virtual ~Population();

	static Chromosome *chromosomeFactory(const int);
	static Population *createPopulation(const int);

	Chromosome *getChromosome(const int &) const;

};

#endif /* AG_POPULATION_H_ */
