#include "amici/symbolic_functions.h"
#include "amici/defines.h"
#include "sundials/sundials_types.h"

#include <array>

#include "p.h"
#include "k.h"
#include "w.h"
#include "h.h"
#include "x.h"

namespace amici {
namespace model_MEMMAL_v1 {

void y_MEMMAL_v1(realtype *y, const realtype t, const realtype *x, const realtype *p, const realtype *k, const realtype *h, const realtype *w){
    y[0] = p53ac;
    y[1] = ppERK;
    y[2] = EE1;
}

} // namespace amici
} // namespace model_MEMMAL_v1