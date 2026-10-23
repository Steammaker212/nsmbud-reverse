/* sub_602617AC
 * address: 0x602617AC   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_602617AC(int a1)
{
  signed int result; // r0

  sub_6025FA54(a1, 0, 1.0);
  FIELD_U8(a1, 7108) = 0;
  result = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  FIELD_U32(a1, 80) = result;
  FIELD_U32(a1, 164) = 0;
  FIELD_U32(a1, 120) = 0;
  return result;
}
