#include "amici/symbolic_functions.h"
#include "amici/defines.h"
#include "sundials/sundials_types.h"

#include <array>

#include "p.h"
#include "k.h"
#include "w.h"
#include "h.h"
#include "x.h"
#include "dwdx.h"

namespace amici {
namespace model_MEMMAL_v1 {

void dydx_MEMMAL_v1(realtype *dydx, const realtype t, const realtype *x, const realtype *p, const realtype *k, const realtype *h, const realtype *w, const realtype *dwdx){
    dydx[6] = 1;
    dydx[566] = 1;
    dydx[2152] = 1;
}

} // namespace amici
} // namespace model_MEMMAL_v1