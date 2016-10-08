/*
 * Chromosome.h
 *
 *  Created on: Oct 7, 2016
 *      Author: reginaldo
 */

#ifndef CHROMOSOME_H_
#define CHROMOSOME_H_

class Chromosome {
private:
	double fitness;
	double *genes;
	double *objectives;
	bool busy;

public:
	Chromosome(double genes[], double objectives[]);
	virtual ~Chromosome();

	void setFitness(double);
	double getFitness() const;

	void setGene(double, int);
	double getGene(int) const;

	void setObjective(double, int);
	double getObjective(int) const;

	void setBusy(bool);
	bool isBusy();
};

#endif /* CHROMOSOME_H_ */
