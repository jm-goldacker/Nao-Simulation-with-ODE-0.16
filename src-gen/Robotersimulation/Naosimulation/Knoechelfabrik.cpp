// --------------------------------------------------------
// Code generated by Papyrus C++
// --------------------------------------------------------

#define Robotersimulation_Naosimulation_Knoechelfabrik_BODY

/************************************************************
 Knoechelfabrik class body
 ************************************************************/

// include associated header file
#include "Robotersimulation/Naosimulation/Knoechelfabrik.h"

// Derived includes directives

namespace Robotersimulation {
namespace Naosimulation {

// static attributes (if any)

/**
 * 
 * @return  
 * @param welt 
 * @param seite 
 */
ODEKoerperteil * Knoechelfabrik::erzeugeKoerper(Welt * /*in*/welt,
		char /*in*/seite) {
	ODEKoerperteil *knoechel = new ODEKoerperteil();

	if (seite == 'l') { knoechel->setPosition(bein_x, 0, knoechel_y); }
	else { knoechel->setPosition(-bein_x, 0, knoechel_y); }

	return knoechel;
}

} // of namespace Naosimulation
} // of namespace Robotersimulation

/************************************************************
 End of Knoechelfabrik class body
 ************************************************************/