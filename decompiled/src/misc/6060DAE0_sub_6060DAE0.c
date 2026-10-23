/* sub_6060DAE0
 * address: 0x6060DAE0   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ModelWrapper *__fastcall sub_6060DAE0(ModelWrapper *result)
{
  if ( !result[141].texAnims.animations )
    return ModelWrapper_updateAnims((ModelWrapper *)result[127].archive);
  return result;
}
