#include "amici/model.h"
#include "wrapfunctions.h"
#include "MEMMAL_v1.h"

namespace amici {
namespace generic_model {

std::unique_ptr<amici::Model> getModel() {
    return std::unique_ptr<amici::Model>(
        new amici::model_MEMMAL_v1::Model_MEMMAL_v1());
}


} // namespace generic_model

} // namespace amici
