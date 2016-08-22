//
// MATLAB Compiler: 6.0 (R2015a)
// Date: Mon Aug 22 18:26:48 2016
// Arguments: "-B" "macro_default" "-W" "cpplib:covarep_cpp" "-T" "link:lib"
// "-d"
// "/home/guilk/Documents/covarep/distribution/linux/C++/covarep_cpp/for_testing
// " "-v"
// "/home/guilk/Documents/covarep/glottalsource/creaky_voice_detection/detect_cr
// eaky_voice.m" "/home/guilk/Documents/covarep/envelope/env_te.m"
// "/home/guilk/Documents/covarep/glottalsource/gci_sedreams.m"
// "/home/guilk/Documents/covarep/glottalsource/get_vq_params.m"
// "/home/guilk/Documents/covarep/vocoder/hmpd/hmpd_analysis.m"
// "/home/guilk/Documents/covarep/vocoder/hmpd/hmpd_analysis_features.m"
// "/home/guilk/Documents/covarep/envelope/hspec2fwcep.m"
// "/home/guilk/Documents/covarep/glottalsource/iaif_gci.m"
// "/home/guilk/Documents/covarep/glottalsource/lpcresidual.m"
// "/home/guilk/Documents/covarep/glottalsource/mdq.m"
// "/home/guilk/Documents/covarep/glottalsource/peakslope.m"
// "/home/guilk/Documents/covarep/glottalsource/pitch_srh.m"
// "/home/guilk/Documents/covarep/glottalsource/polarity_reskew.m"
// "/home/guilk/Documents/covarep/glottalsource/rd_msp.m"
// "/home/guilk/Documents/covarep/sinusoidal/sin_analysis.m" 
//

#ifndef __covarep_cpp_h
#define __covarep_cpp_h 1

#if defined(__cplusplus) && !defined(mclmcrrt_h) && defined(__linux__)
#  pragma implementation "mclmcrrt.h"
#endif
#include "mclmcrrt.h"
#include "mclcppclass.h"
#ifdef __cplusplus
extern "C" {
#endif

#if defined(__SUNPRO_CC)
/* Solaris shared libraries use __global, rather than mapfiles
 * to define the API exported from a shared library. __global is
 * only necessary when building the library -- files including
 * this header file to use the library do not need the __global
 * declaration; hence the EXPORTING_<library> logic.
 */

#ifdef EXPORTING_covarep_cpp
#define PUBLIC_covarep_cpp_C_API __global
#else
#define PUBLIC_covarep_cpp_C_API /* No import statement needed. */
#endif

#define LIB_covarep_cpp_C_API PUBLIC_covarep_cpp_C_API

#elif defined(_HPUX_SOURCE)

#ifdef EXPORTING_covarep_cpp
#define PUBLIC_covarep_cpp_C_API __declspec(dllexport)
#else
#define PUBLIC_covarep_cpp_C_API __declspec(dllimport)
#endif

#define LIB_covarep_cpp_C_API PUBLIC_covarep_cpp_C_API


#else

#define LIB_covarep_cpp_C_API

#endif

/* This symbol is defined in shared libraries. Define it here
 * (to nothing) in case this isn't a shared library. 
 */
#ifndef LIB_covarep_cpp_C_API 
#define LIB_covarep_cpp_C_API /* No special import/export declaration */
#endif

extern LIB_covarep_cpp_C_API 
bool MW_CALL_CONV covarep_cppInitializeWithHandlers(
       mclOutputHandlerFcn error_handler, 
       mclOutputHandlerFcn print_handler);

extern LIB_covarep_cpp_C_API 
bool MW_CALL_CONV covarep_cppInitialize(void);

extern LIB_covarep_cpp_C_API 
void MW_CALL_CONV covarep_cppTerminate(void);



extern LIB_covarep_cpp_C_API 
void MW_CALL_CONV covarep_cppPrintStackTrace(void);

extern LIB_covarep_cpp_C_API 
bool MW_CALL_CONV mlxDetect_creaky_voice(int nlhs, mxArray *plhs[], int nrhs, mxArray 
                                         *prhs[]);

extern LIB_covarep_cpp_C_API 
bool MW_CALL_CONV mlxEnv_te(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);

extern LIB_covarep_cpp_C_API 
bool MW_CALL_CONV mlxGci_sedreams(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);

extern LIB_covarep_cpp_C_API 
bool MW_CALL_CONV mlxGet_vq_params(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);

extern LIB_covarep_cpp_C_API 
bool MW_CALL_CONV mlxHmpd_analysis(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);

extern LIB_covarep_cpp_C_API 
bool MW_CALL_CONV mlxHmpd_analysis_features(int nlhs, mxArray *plhs[], int nrhs, mxArray 
                                            *prhs[]);

extern LIB_covarep_cpp_C_API 
bool MW_CALL_CONV mlxHspec2fwcep(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);

extern LIB_covarep_cpp_C_API 
bool MW_CALL_CONV mlxIaif_gci(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);

extern LIB_covarep_cpp_C_API 
bool MW_CALL_CONV mlxLpcresidual(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);

extern LIB_covarep_cpp_C_API 
bool MW_CALL_CONV mlxMdq(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);

extern LIB_covarep_cpp_C_API 
bool MW_CALL_CONV mlxPeakslope(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);

extern LIB_covarep_cpp_C_API 
bool MW_CALL_CONV mlxPitch_srh(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);

extern LIB_covarep_cpp_C_API 
bool MW_CALL_CONV mlxPolarity_reskew(int nlhs, mxArray *plhs[], int nrhs, mxArray 
                                     *prhs[]);

extern LIB_covarep_cpp_C_API 
bool MW_CALL_CONV mlxRd_msp(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);

extern LIB_covarep_cpp_C_API 
bool MW_CALL_CONV mlxSin_analysis(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus

/* On Windows, use __declspec to control the exported API */
#if defined(_MSC_VER) || defined(__BORLANDC__)

#ifdef EXPORTING_covarep_cpp
#define PUBLIC_covarep_cpp_CPP_API __declspec(dllexport)
#else
#define PUBLIC_covarep_cpp_CPP_API __declspec(dllimport)
#endif

#define LIB_covarep_cpp_CPP_API PUBLIC_covarep_cpp_CPP_API

#else

#if !defined(LIB_covarep_cpp_CPP_API)
#if defined(LIB_covarep_cpp_C_API)
#define LIB_covarep_cpp_CPP_API LIB_covarep_cpp_C_API
#else
#define LIB_covarep_cpp_CPP_API /* empty! */ 
#endif
#endif

#endif

extern LIB_covarep_cpp_CPP_API void MW_CALL_CONV detect_creaky_voice(int nargout, mwArray& creak_pp, mwArray& creak_bin, const mwArray& x, const mwArray& fs);

extern LIB_covarep_cpp_CPP_API void MW_CALL_CONV env_te(int nargout, mwArray& E, mwArray& cc, mwArray& n, const mwArray& S, const mwArray& order, const mwArray& winlen, const mwArray& mode, const mwArray& maxit, const mwArray& prec, const mwArray& presmooth_factor, const mwArray& gamma);

extern LIB_covarep_cpp_CPP_API void MW_CALL_CONV gci_sedreams(int nargout, mwArray& gci, mwArray& MeanBasedSignal, mwArray& res, const mwArray& wave, const mwArray& fs, const mwArray& f0mean, const mwArray& polarity, const mwArray& opt);

extern LIB_covarep_cpp_CPP_API void MW_CALL_CONV get_vq_params(int nargout, mwArray& NAQ, mwArray& QOQ, mwArray& H1H2, mwArray& HRF, mwArray& PSP, const mwArray& gf, const mwArray& gfd, const mwArray& fs, const mwArray& GCI);

extern LIB_covarep_cpp_CPP_API void MW_CALL_CONV hmpd_analysis(int nargout, mwArray& f0s, mwArray& AE, mwArray& PDM, mwArray& PDD, mwArray& opt, const mwArray& wav, const mwArray& fs, const mwArray& f0s_in1, const mwArray& opt_in1);

extern LIB_covarep_cpp_CPP_API void MW_CALL_CONV hmpd_analysis_features(int nargout, mwArray& f0s, mwArray& AE, mwArray& PDM, mwArray& PDD, mwArray& opt, const mwArray& frames, const mwArray& fs, const mwArray& opt_in1);

extern LIB_covarep_cpp_CPP_API void MW_CALL_CONV hspec2fwcep(int nargout, mwArray& fwcep, const mwArray& C, const mwArray& fs, const mwArray& order, const mwArray& warpfn, const mwArray& varargin);

extern LIB_covarep_cpp_CPP_API void MW_CALL_CONV iaif_gci(int nargout, mwArray& g, mwArray& gd, mwArray& a, mwArray& ag, const mwArray& x, const mwArray& fs, const mwArray& GCI, const mwArray& p_vt, const mwArray& p_gl, const mwArray& d, const mwArray& hpfilt);

extern LIB_covarep_cpp_CPP_API void MW_CALL_CONV lpcresidual(int nargout, mwArray& res, mwArray& LPCcoeff, const mwArray& x, const mwArray& L, const mwArray& shift, const mwArray& order);

extern LIB_covarep_cpp_CPP_API void MW_CALL_CONV mdq(int nargout, mwArray& m, const mwArray& res, const mwArray& fs, const mwArray& GCI);

extern LIB_covarep_cpp_CPP_API void MW_CALL_CONV peakslope(int nargout, mwArray& PS, const mwArray& s, const mwArray& fs);

extern LIB_covarep_cpp_CPP_API void MW_CALL_CONV pitch_srh(int nargout, mwArray& F0s, mwArray& VUVDecisions, mwArray& SRHVal, mwArray& time, const mwArray& wave, const mwArray& fs, const mwArray& f0min, const mwArray& f0max, const mwArray& hopsize);

extern LIB_covarep_cpp_CPP_API void MW_CALL_CONV polarity_reskew(int nargout, mwArray& polarity, const mwArray& s, const mwArray& fs, const mwArray& opt);

extern LIB_covarep_cpp_CPP_API void MW_CALL_CONV rd_msp(int nargout, mwArray& rds, const mwArray& frames, const mwArray& fs, const mwArray& opt);

extern LIB_covarep_cpp_CPP_API void MW_CALL_CONV sin_analysis(int nargout, mwArray& frames, mwArray& syn, mwArray& opt, const mwArray& wav, const mwArray& fs, const mwArray& f0s, const mwArray& opt_in1);

#endif
#endif
