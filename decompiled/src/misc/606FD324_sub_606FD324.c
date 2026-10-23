/* sub_606FD324
 * address: 0x606FD324   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_606FD324(int a1)
{
  signed int result; // r0
  float v3; // r0
  Vec3 v4; // [sp+4h] [bp-2Ch] BYREF
  Vec3 v5[2]; // [sp+10h] [bp-20h] BYREF

  v5[0].x = 1.0 * 0.8;
  v5[0].y = 1.0 * 0.8;
  v5[0].z = 1.0 * 0.8;
  EffectWrapper_update((EffectWrapper *)(a1 + 7516), 27, (Vec3 *)(a1 + 7724), 0, v5);
  result = FIELD_U8(a1, 6184);
  if ( FIELD_U8(a1, 6184) )
  {
    v3 = FIELD_F32(a1, 108);
    v5[0].y = FIELD_F32(a1, 112);
    v5[0].x = v3;
    v5[0].y = v5[0].y + 48.0;
    v5[0].z = 6500.0;
    v4.x = 1.0 * 0.8;
    v4.y = 1.0 * 0.8;
    v4.z = 1.0 * 0.8;
    return EffectWrapper_update((EffectWrapper *)(a1 + 7620), 29, v5, 0, &v4);
  }
  return result;
}
