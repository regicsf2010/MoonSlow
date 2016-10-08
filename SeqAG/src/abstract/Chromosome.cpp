/*
 * Chromosome.cpp
 *
 *  Created on: Oct 7, 2016
 *      Author: reginaldo
 */

#include "Chromosome.h"

Chromosome::Chromosome(double genes[], double objectives[]) {
	this->genes = genes;
	this->objectives = objectives;
	this->busy = false;
	this->fitness = 0;
}

Chromosome::~Chromosome() {

}

void Chromosome::setFitness(double fitness) {
	this->fitness = fitness;
}

double Chromosome::getFitness() const {
	return this->fitness;
}

void Chromosome::setGene(double value, int pos) {
	this->genes[pos] = value;
}

double Chromosome::getGene(int pos) const {
	return this->genes[pos];
}

void Chromosome::setObjective(double value, int pos) {
	this->objectives[pos] = value;
}

double Chromosome::getObjective(int pos) const {
	return this->objectives[pos];
}

void Chromosome::setBusy(bool busy) {
	this->busy = busy;
}

bool Chromosome::isBusy() {
	return this->busy;
}
