/* sub_600D17F4
 * address: 0x600D17F4   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_600D17F4(int r0_0)
{
  float v2; // r1
  signed int result; // r0
  Vec2 v4; // [sp+0h] [bp-18h] BYREF
  Vec2 a1; // [sp+8h] [bp-10h] BYREF

  v2 = FIELD_F32(r0_0, 112);
  v4.x = FIELD_F32(r0_0, 108);
  v4.y = v2;
  result = distanceToPLayer(&a1, &v4);
  if ( result == -1 )
    result = FIELD_U32(dword_60CBFA90, 440);
  FIELD_U32(r0_0, 6960) = result;
  return result;
}
