//
// Hi-Tech Lite include file for DB038 board with 16F887:
// using an (external) RFM70 transciever
//
// Loosely based on the example application provided by HopeRF
//
//
// $Id: rfm73-config.h,v 1.1 2013/06/12 06:45:52 Staples Exp $
//
// (c) Wouter van Ooijen - wouter@voti.nl
//
// Copying and distribution of this file, with or without modification,
// are permitted in any medium without royalty provided the copyright
// notice and this notice are preserved.  This file is offered as-is,
// without any warranty.
//

#ifndef _DB038_RFM70_H_
#define _DB038_RFM70_H_

#include "db038.h"

#define RFM70_SCK( x )   PIN_COPY( PORTC, 0, (x) ) 
#define RFM70_MOSI( x )  PIN_COPY( PORTC, 1, (x) )
#define RFM70_MISO       ( RC2 )
#define RFM70_CSN( x )   PIN_COPY( PORTC, 3, (x) )
#define RFM70_CE( x )    PIN_COPY( PORTC, 4, (x) )

#define RFM70_PIN_DIRECTION { \
   TRISC0 = 0; \
   TRISC1 = 0; \
   TRISC2 = 1; \
   TRISC3 = 0; \
   TRISC4 = 0; \
}

#define RFM70_WAIT_US( x ) WAIT_US( x )
#define RFM70_WAIT_MS( x ) wait_ms( x )

#include "rfm70.h"

#endif