//typedef float data_type;
 #include "ap_fixed.h"

//#define float_type

#ifdef float_type
	typedef float data_type;
	typedef float long_data_type;
	typedef float long_long_data_type;
#else
	typedef ap_fixed<16,8> data_type;
	typedef ap_fixed<32,16> long_data_type;
	typedef ap_fixed<48,24> long_long_data_type;
#endif
data_type PID (data_type set_point, data_type KP, data_type KI, data_type KD, data_type sample, data_type ts, data_type pmax);
