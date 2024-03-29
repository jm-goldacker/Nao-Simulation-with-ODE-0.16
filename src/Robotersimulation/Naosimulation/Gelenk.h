// --------------------------------------------------------
// Code generated by Papyrus C++
// --------------------------------------------------------

#ifndef ROBOTERSIMULATION_NAOSIMULATION_GELENK_H
#define ROBOTERSIMULATION_NAOSIMULATION_GELENK_H

/************************************************************
 Gelenk class header
 ************************************************************/

#include "Robotersimulation/Naosimulation/Pkg_Naosimulation.h"
#include "Robotersimulation/Naosimulation/Koerperteil.h"
#include "AnsiCLibrary/Pkg_AnsiCLibrary.h"
#include "Robotersimulation/Pkg_Robotersimulation.h"

namespace Robotersimulation {
namespace Naosimulation {

/************************************************************/
/**
 * 
 */
class Gelenk {
	friend class ODEGelenk;
public:

	/**
	 * 
	 * @param koerper1 
	 * @param koerper2 
	 * @param welt 
	 */
	virtual void erzeugeGelenk(Koerperteil * /*in*/koerper1,
			Koerperteil * /*in*/koerper2, Welt * /*in*/welt) = 0;

	/**
	 * 
	 */
	virtual void update() = 0;

	/**
	 * 
	 * @param x 
	 * @param y 
	 * @param z 
	 */
	virtual void setAnker(double /*in*/x, double /*in*/y, double /*in*/z) = 0;

	/**
	 * 
	 * @param x 
	 * @param y 
	 * @param z 
	 */
	virtual void setAchse(double /*in*/x, double /*in*/y, double /*in*/z) = 0;

	/**
	 * 
	 * @param grad 
	 */
	void setWinkelUm(double /*in*/grad);

	/**
	 * 
	 * @param grad 
	 */
	void setMinWinkel(double /*in*/grad);

	/**
	 * 
	 * @param grad 
	 */
	void setMaxWinkel(double /*in*/grad);

	/**
	 * 
	 * @return  
	 */
	double getWinkel();

private:

	/**
	 * 
	 */
	double minWinkel;

	/**
	 * 
	 */
	double maxWinkel;

	/**
	 * 
	 */
	double theta;

	/**
	 * 
	 */
	double anstieg = 5;

	/**
	 * 
	 */
	double fMax = 10;
};
/************************************************************/
/* External declarations (package visibility)               */
/************************************************************/

/* Inline functions                                         */

} // of namespace Naosimulation
} // of namespace Robotersimulation

/************************************************************
 End of Gelenk class header
 ************************************************************/

#endif
