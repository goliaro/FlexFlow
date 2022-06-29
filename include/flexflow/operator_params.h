#ifndef _OPERATOR_PARAMS_H
#define _OPERATOR_PARAMS_H

#include "mpark/variant.hpp"
#include "flexflow/ops/conv_2d.h"
#include "flexflow/ops/linear.h"
#include "flexflow/ops/concat.h"
#include "flexflow/ops/element_binary.h"

namespace mp = mpark;

namespace FlexFlow {

using OperatorParameters = mp::variant<
Conv2DParams,
LinearParams,
ConcatParams,
ElementBinaryParams
>;

}; // namespace FlexFlow

#endif // _OPERATOR_PARAMS_H