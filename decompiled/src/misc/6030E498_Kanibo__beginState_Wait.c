/* Kanibo__beginState_Wait
 * address: 0x6030E498   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Enemy *__fastcall Kanibo__beginState_Wait(Enemy *result)
{
  FIELD_U32(result, 0x0)._._.speed.x = 0.0;
  FIELD_U32(result, 0x0)._._.speed.y = 0.0;
  FIELD_U32(result, 0x0)._._.speed.z = 0.0;
  return result;
}
