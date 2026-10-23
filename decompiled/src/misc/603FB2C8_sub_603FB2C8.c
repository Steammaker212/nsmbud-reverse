/* sub_603FB2C8
 * address: 0x603FB2C8   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool sub_603FB2C8()
{
  _BOOL4 result; // r0
  bool v1; // zf

  result = 0;
  v1 = AreaTask_intance == 0;
  if ( AreaTask_intance )
    v1 = FIELD_U8(AreaTask_intance, 194) == 0;
  if ( !v1 )
    return FIELD_U32(AreaTask_intance, 1832) != 1;
  return result;
}
