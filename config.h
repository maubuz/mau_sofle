#pragma once


// Custom settings by Mau
#define IGNORE_MOD_TAP_INTERRUPT    // to help with home roll modifiers

#ifdef TAPPING_TERM
    #undef TAPPING_TERM
#endif
#define TAPPING_TERM 160            // optimizing for home row modifiers

#define TAPPING_TOGGLE 2

#define ENCODER_DIRECTION_FLIP

#ifdef ENCODER_RESOLUTION
    #undef ENCODER_RESOLUTION
#endif
#define ENCODER_RESOLUTION 4            // optimizing for home row modifiers
