// --------------------------------------------------------
// Code generated by Papyrus C++
// --------------------------------------------------------

#ifndef ROBOTERSIMULATION_NAOSIMULATION_GELENKFABRIK_H
#define ROBOTERSIMULATION_NAOSIMULATION_GELENKFABRIK_H

/************************************************************
 Gelenkfabrik class header
 ************************************************************/

#include "Robotersimulation/Naosimulation/Pkg_Naosimulation.h"

#include "AnsiCLibrary/Pkg_AnsiCLibrary.h"
#include "Robotersimulation/Naosimulation/ODEGelenk.h"
#include "Robotersimulation/Naosimulation/Gemeinsames.h"
#include "Robotersimulation/Pkg_Robotersimulation.h"

namespace Robotersimulation {
namespace Naosimulation {
class Koerperteil;
}
}
namespace Robotersimulation {
namespace Naosimulation {
class Welt;
}
}

namespace Robotersimulation {
namespace Naosimulation {

/************************************************************/
/**
 * 
 */
class Gelenkfabrik {
public:

	/**
	 * 
	 * @param *koerper1 
	 * @param *koerper2 
	 * @param *welt 
	 * @param seite 
	 * @return  
	 */
	ODEGelenk * erzeugeGelenk(Koerperteil /*in*/*koerper1,
			Koerperteil /*in*/*koerper2, Welt /*in*/*welt, char /*in*/seite);

	/**
	 * 
	 * @param *koerper1 
	 * @param *koerper2 
	 * @param *welt 
	 * @param seite 
	 * @return  
	 */
	virtual ODEGelenk * getGelenk(Koerperteil /*in*/*koerper1,
			Koerperteil /*in*/*koerper2, Welt /*in*/*welt,
			char /*in*/seite) = 0;

};
/************************************************************/
/* External declarations (package visibility)               */
/************************************************************/

/* Inline functions                                         */

} // of namespace Naosimulation
} // of namespace Robotersimulation

/************************************************************
 End of Gelenkfabrik class header
 ************************************************************/

#endif