/* sub_601946F4
 * address: 0x601946F4   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601946F4(int a1)
{
  int result; // r0
  int v3; // r4
  float v4; // t1
  float v5; // r0
  Vec3 v6; // [sp+4h] [bp-24h] BYREF
  Vec3 v7; // [sp+10h] [bp-18h] BYREF

  result = FIELD_U32(a1, 320);
  if ( !result )
  {
    v4 = FIELD_F32(a1, 80);
    v3 = a1 + 80;
    v7.x = v4;
    v5 = FIELD_F32(v3, 4);
    v7.z = FIELD_F32(v3, 8);
    v7.y = v5;
    v6.x = 1.0;
    v6.y = 1.0;
    v6.z = 1.0;
    sub_602375C4((EffectData *)(v3 + 292), 899, &v7, 0, &v6);
    return sub_601E4C88(dword_60C8B13C, 209, v3, 1);
  }
  return result;
}
