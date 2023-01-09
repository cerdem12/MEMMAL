#include "amici/sundials_matrix_wrapper.h"
#include "sundials/sundials_types.h"

#include <array>
#include <algorithm>

namespace amici {
namespace model_MEMMAL_v1 {

static constexpr std::array<std::array<sunindextype, 1>, 3> dJydy_rowvals_MEMMAL_v1_ = {{
    {0}, 
    {0}, 
    {0}, 
}};

void dJydy_rowvals_MEMMAL_v1(SUNMatrixWrapper &dJydy, int index){
    dJydy.set_indexvals(gsl::make_span(dJydy_rowvals_MEMMAL_v1_[index]));
}
} // namespace amici
} // namespace model_MEMMAL_v1