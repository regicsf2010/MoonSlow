/*
 * Population.cpp
 *
 *  Created on: Oct 7, 2016
 *      Author: reginaldo
 */

#include "Population.h"
#include "../auxiliaries/Configuration.h"
#include "../chromosomePool/ChromosomeAckley.h"

Population::Population(int functionID) {
	this->functionID = functionID;
	this->fitnessMean = 0;
	this->fitnessStd = 0;

	this->chomos = new Chromosome*[NCHROMOSOMES];
}

Population::~Population() {
	for (int i = 0; i < NCHROMOSOMES; ++i)
		if(chomos[i])
			delete chomos[i];
	if(chomos)
		delete [] chomos;
}

Chromosome *Population::chromosomeFactory(const int functionID) {
	switch(functionID) {
	case Ackley::ID:
		return ChromosomeAckley::createChromosome();
	default:
		return 0;
	}
}

Population *Population::createPopulation(const int functionID) {
	Population *p = new Population(functionID);
	for (int i = 0; i < NCHROMOSOMES; ++i)
		p->chomos[i] = chromosomeFactory(functionID);

	return p;
}

Chromosome *Population::getChromosome(const int &pos) const {
	return this->chomos[pos];
}

