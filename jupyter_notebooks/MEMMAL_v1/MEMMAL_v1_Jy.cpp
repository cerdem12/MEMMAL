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

void Jy_MEMMAL_v1(realtype *Jy, const int iy, const realtype *p, const realtype *k, const realtype *y, const realtype *sigmay, const realtype *my){
    switch(iy) {
        case 0:
            Jy[0] = 0.5*std::log(2*amici::pi*std::pow(sigma_actp53, 2)) + 0.5*std::pow(actp53 - mactp53, 2)/std::pow(sigma_actp53, 2);
            break;
        case 1:
            Jy[0] = 0.5*std::log(2*amici::pi*std::pow(sigma_ppERK, 2)) + 0.5*std::pow(-mppERK + ppERK, 2)/std::pow(sigma_ppERK, 2);
            break;
        case 2:
            Jy[0] = 0.5*std::log(2*amici::pi*std::pow(sigma_egfLR, 2)) + 0.5*std::pow(egfLR - megfLR, 2)/std::pow(sigma_egfLR, 2);
            break;
    }
}

} // namespace amici
} // namespace model_MEMMAL_v1