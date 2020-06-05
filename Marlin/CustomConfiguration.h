//
// PID tuning
//

// Set hotend PID params
// Tune with M303 E0 C8 S240
#undef DEFAULT_Kp
#undef DEFAULT_Ki
#undef DEFAULT_Kd
#define DEFAULT_Kp 21.30
#define DEFAULT_Ki 1.44
#define DEFAULT_Kd 78.91

// Set bed PID params
// Tune with M303 E-1 C8 S90
#undef DEFAULT_bedKp
#undef DEFAULT_bedKi
#undef DEFAULT_bedKd
#define DEFAULT_bedKp 125.47
#define DEFAULT_bedKi 24.69
#define DEFAULT_bedKd 425.05


//
// Phisical dimensions
//

// Adjust nozzle offset using Y_MIN/MAX
#undef Y_MIN_POS
#undef Y_MAX_POS
#define Y_MIN_POS -18
#define Y_MAX_POS Y_BED_SIZE - 18

// Adjust probe offset
#undef NOZZLE_TO_PROBE_OFFSET
#define NOZZLE_TO_PROBE_OFFSET { -28, -6, 0 }
