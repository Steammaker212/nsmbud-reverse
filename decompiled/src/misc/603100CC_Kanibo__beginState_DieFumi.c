/* Kanibo__beginState_DieFumi
 * address: 0x603100CC   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall Kanibo__beginState_DieFumi(Enemy *a1)
{
  int y; // r5
  signed int result; // r0

  a1[1]._._._._.field_2C = 3;
  sub_60421AD4(a1[1]._._._._.vtable);
  y = FIELD_U32(a1, 0x0)._._.rotation.y;
  FIELD_U32(a1, 0x0)._._.rotation.y = Enemy_CommonRotations[FIELD_U32(a1, 0x0)._._.direction];
  result = Enemy__beginState_DieFumi(a1);
  FIELD_U32(a1, 0x0)._._.rotation.y = y;
  return result;
}
