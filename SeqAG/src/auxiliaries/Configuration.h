/*
 * Configuration.h
 *
 *  Created on: Oct 7, 2016
 *      Author: reginaldo
 */

#ifndef AUXILIARIES_CONFIGURATION_H_
#define AUXILIARIES_CONFIGURATION_H_

const int NCHROMOSOMES = 50; // must be even ('cause of crossover)
const int NGENERATIONS = 100;
const double CROSSOVERRATE = 0.8;
const double MUTATERATE = 0.01;
const double SD = 0.2;
const int RANK = 3;


class Ackley {
public:
	static const int ID = 0;
	static const int NGENES = 2;
	static const int INFIMUM = -40;
	static const int MAXIMUM = 40;
};


#endif /* AUXILIARIES_CONFIGURATION_H_ */
