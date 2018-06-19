// =====================================================================
//
//	Exported by Cearn's excellut v1.0
//	(comments, kudos, flames to daytshen@hotmail.com)
//
// =====================================================================

#ifndef LOOKUP_H
#define LOOKUP_H
#include "stm32f30x_conf.h"

// === LUT SIZES ===
#define SIN_SIZE 512

// === LUT DECLARATIONS ===
int32_t fix14sin(uint16_t a);
int32_t fix14cos(uint16_t a);

#endif	// LOOKUP_H
