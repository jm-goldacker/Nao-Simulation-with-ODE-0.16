// --------------------------------------------------------
// Code generated by Papyrus C++
// --------------------------------------------------------

#ifndef ROBOTERSIMULATION_NAOSIMULATION_ROBOTER_H
#define ROBOTERSIMULATION_NAOSIMULATION_ROBOTER_H

/************************************************************
 Roboter class header
 ************************************************************/

#include "Robotersimulation/Naosimulation/Pkg_Naosimulation.h"

#include "Robotersimulation/Naosimulation/Anklepitchfabrik.h"
#include "Robotersimulation/Naosimulation/Anklerollfabrik.h"
#include "Robotersimulation/Naosimulation/Kneepitchfabrik.h"
#include "Robotersimulation/Naosimulation/Fussfabrik.h"
#include "Robotersimulation/Naosimulation/Gelenk.h"
#include "Robotersimulation/Naosimulation/Knoechelfabrik.h"
#include "Robotersimulation/Naosimulation/Koerperteil.h"
#include "Robotersimulation/Naosimulation/Schienbeinfabrik.h"
#include "Robotersimulation/Naosimulation/Oberschenkelfabrik.h"

#include <string>

namespace Robotersimulation {
namespace Naosimulation {

/************************************************************/
/**
 * 
 */
class Roboter {
public:

	/**
	 * 
	 */
	void erzeugeRoboter(Welt * welt);

	/**
	 * 
	 */
	void setAngles(std::string name, double grad);

	/**
	 * 
	 */
	double getAngles(std::string name);

	/**
	 *
	 */
	void zeichne();

	/**
	 * 
	 */
	void update();

private:

	/**
	 * 
	 */
	Koerperteil *koerperteil[8];

	/**
	 * 
	 */
	Schienbeinfabrik schienbeinfabrik;

	/**
	 *
	 */
	Oberschenkelfabrik oberschenkelfabrik;

	/**
	 * 
	 */
	Knoechelfabrik knoechelfabrik;

	/**
	 *
	 */
	Fussfabrik fussfabrik;

	/**
	 * 
	 */
	Anklerollfabrik anklerollfabrik;

	/**
	 * 
	 */
	Anklepitchfabrik anklepitchfabrik;

	/**
	 * 
	 */
	Kneepitchfabrik kneepitchfabrik;

	/**
	 *
	 */
	Gelenk *gelenk[6];
};
/************************************************************/
/* External declarations (package visibility)               */
/************************************************************/

/* Inline functions                                         */

} // of namespace Naosimulation
} // of namespace Robotersimulation

/************************************************************
 End of Roboter class header
 ************************************************************/

#endif
