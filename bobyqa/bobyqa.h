#ifndef BOBYQA_H
#define BOBYQA_H 1

#include "nlopt-util.h"
#include "nlopt.h"

#if defined(__cplusplus)
extern "C" 
{
#else
  extern
#endif
nlopt_result bobyqa(int n, int npt, double *x, 
                        const double *lb, const double *ub,
                        const double *dx, 
                        nlopt_stopping *stop, double *minf,
                        nlopt_func f, void *f_data);
#if defined(__cplusplus)  
}
#endif
#endif /* BOBYQA_H */
