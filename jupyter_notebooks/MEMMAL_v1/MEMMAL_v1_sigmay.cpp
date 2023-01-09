#include "amici/symbolic_functions.h"
#include "amici/defines.h"
#include "sundials/sundials_types.h"

#include <array>

#include "p.h"
#include "k.h"
#include "sigmay.h"

namespace amici {
namespace model_MEMMAL_v1 {

void sigmay_MEMMAL_v1(realtype *sigmay, const realtype t, const realtype *p, const realtype *k){
    sigma_actp53 = 1.0;  // sigmay[0]
    sigma_ppERK = 1.0;  // sigmay[1]
    sigma_egfLR = 1.0;  // sigmay[2]
}

} // namespace amici
} // namespace model_MEMMAL_v1