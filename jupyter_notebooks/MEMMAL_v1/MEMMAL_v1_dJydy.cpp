#include "amici/symbolic_functions.h"
#include "amici/defines.h"
#include "sundials/sundials_types.h"

#include <array>

#include "y.h"
#include "my.h"
#include "p.h"
#include "k.h"
#include "sigmay.h"
#include "dJydy.h"

namespace amici {
namespace model_MEMMAL_v1 {

void dJydy_MEMMAL_v1(realtype *dJydy, const int iy, const realtype *p, const realtype *k, const realtype *y, const realtype *sigmay, const realtype *my){
    switch(iy) {
        case 0:
            dJydy[0] = (1.0*actp53 - 1.0*mactp53)/std::pow(sigma_actp53, 2);
            break;
        case 1:
            dJydy[0] = (-1.0*mppERK + 1.0*ppERK)/std::pow(sigma_ppERK, 2);
            break;
        case 2:
            dJydy[0] = (1.0*egfLR - 1.0*megfLR)/std::pow(sigma_egfLR, 2);
            break;
    }
}

} // namespace amici
} // namespace model_MEMMAL_v1