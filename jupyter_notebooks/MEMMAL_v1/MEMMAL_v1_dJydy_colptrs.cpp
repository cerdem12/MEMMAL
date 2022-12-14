#include "amici/sundials_matrix_wrapper.h"
#include "sundials/sundials_types.h"

#include <array>
#include <algorithm>

namespace amici {
namespace model_MEMMAL_v1 {

static constexpr std::array<std::array<sunindextype, 4>, 3> dJydy_colptrs_MEMMAL_v1_ = {{
    {0, 1, 1, 1}, 
    {0, 0, 1, 1}, 
    {0, 0, 0, 1}, 
}};

void dJydy_colptrs_MEMMAL_v1(SUNMatrixWrapper &dJydy, int index){
    dJydy.set_indexptrs(gsl::make_span(dJydy_colptrs_MEMMAL_v1_[index]));
}
} // namespace amici
} // namespace model_MEMMAL_v1