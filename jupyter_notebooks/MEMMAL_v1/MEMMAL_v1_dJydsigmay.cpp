#include "amici/symbolic_functions.h"
#include "amici/defines.h"
#include "sundials/sundials_types.h"

#include <array>

#include "y.h"
#include "my.h"
#include "p.h"
#include "k.h"
#include "sigmay.h"

namespace amici {
namespace model_MEMMAL_v1 {

void dJydsigmay_MEMMAL_v1(realtype *dJydsigmay, const int iy, const realtype *p, const realtype *k, const realtype *y, const realtype *sigmay, const realtype *my){
    switch(iy) {
        case 0:
            dJydsigmay[0] = 1.0/sigma_actp53 - 1.0*std::pow(actp53 - mactp53, 2)/std::pow(sigma_actp53, 3);
            break;
        case 1:
            dJydsigmay[1] = 1.0/sigma_ppERK - 1.0*std::pow(-mppERK + ppERK, 2)/std::pow(sigma_ppERK, 3);
            break;
        case 2:
            dJydsigmay[2] = 1.0/sigma_egfLR - 1.0*std::pow(egfLR - megfLR, 2)/std::pow(sigma_egfLR, 3);
            break;
    }
}

} // namespace amici
} // namespace model_MEMMAL_v1