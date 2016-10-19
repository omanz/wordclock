#ifndef _CUSTOMLAYOUT_H
#define _CUSTOMLAYOUT_H

#include "../constants.h"
#include "abstractlayout.h"

class CustomLayout : public AbstractLayout{
public:

	CustomLayout();

	/**
	 * Get the layout
	 *
	 * @param hour not used
	 * @param min not used
	 * @param sec not used
	 * @param destination array containing the list of leds to light
	 */
  void getLayout(uint8_t hour, uint8_t min, uint8_t sec, Display*);

	/**
	 * Return a debug string containing all case in a simple string, no separator
	 * for line just keep writing (don't forget the space for empty case). The
	 * length of this string should be DISPLAY_LEDS.
	 */
  char* getDebugLayout();

};

#endif
