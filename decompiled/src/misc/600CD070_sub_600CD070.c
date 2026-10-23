/* sub_600CD070
 * address: 0x600CD070   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600CD070(int a1)
{
  signed int v2; // r0
  int result; // r0

  v2 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  FIELD_U32(a1, 80) = v2;
  result = LODWORD(flt_60AF1EA0[v2]);
  FIELD_U32(a1, 164) = 0;
  FIELD_U32(a1, 120) = result;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  return result;
}
