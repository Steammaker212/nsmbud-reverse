/* Player_ctor_helper_3E568C
 * address: 0x603E568C   size: 44   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_IDisposer *__fastcall Player_ctor_helper_3E568C(sead_IDisposer *a1, int a2)
{
  sead_IDisposer *result; // r0

  result = sub_603E4258(a1);
  FIELD_U32(result, 0x0) = (int)off_60BF8E5C;
  FIELD_U32(result + (1) * 16, 0x8) = a2;
  return result;
}
