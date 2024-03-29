// --------------------------------------------------------
// Code generated by Papyrus C++
// --------------------------------------------------------

#ifndef ROBOTERSIMULATION_NAOSIMULATION_SCHIENBEINFABRIK_H
#define ROBOTERSIMULATION_NAOSIMULATION_SCHIENBEINFABRIK_H

/************************************************************
 Schienbeinfabrik class header
 ************************************************************/

#include "Robotersimulation/Naosimulation/Pkg_Naosimulation.h"

#include "AnsiCLibrary/Pkg_AnsiCLibrary.h"
#include "Robotersimulation/Naosimulation/Koerperteilfabrik.h"
#include "Robotersimulation/Naosimulation/Gemeinsames.h"
#include "Robotersimulation/Pkg_Robotersimulation.h"

namespace Robotersimulation {
namespace Naosimulation {

/************************************************************/
/**
 * 
 */
class Schienbeinfabrik: public Koerperteilfabrik {

protected:

	/**
	 * 
	 * @return  
	 * @param welt 
	 * @param seite 
	 */
	ODEKoerperteil * erzeugeKoerper(Welt * /*in*/welt, char /*in*/seite);

};
/************************************************************/
/* External declarations (package visibility)               */
/************************************************************/

/* Inline functions                                         */

} // of namespace Naosimulation
} // of namespace Robotersimulation

/************************************************************
 End of Schienbeinfabrik class header
 ************************************************************/

#endif
