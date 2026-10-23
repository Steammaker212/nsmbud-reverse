/* sub_6076F25C
 * address: 0x6076F25C   size: 368   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6076F25C(int a1)
{
  EffectData *v2; // r5
  signed int result; // r0
  int v4; // [sp+4h] [bp-24h] BYREF
  float v5; // [sp+8h] [bp-20h] BYREF
  Vec3 v6[2]; // [sp+Ch] [bp-1Ch] BYREF

  v2 = (EffectData *)(a1 + 11120);
  if ( sub_60235E50(a1 + 11120) == 1 )
  {
    v6[0].x = FIELD_F32(a1, 11132);
    v6[0].y = FIELD_F32(a1, 11148);
    v6[0].z = FIELD_F32(a1, 11164);
    ((void (__fastcall *)(int *, float *, Vec3 *, _DWORD))checkLiquidCollisions)(
      &v4,
      &v5,
      v6,
      FIELD_U8(a1, 86));
    if ( v4 )
      v6[0].y = v5;
    EffectData_update(v2, v6, 0, 0);
  }
  if ( sub_60235E50(a1 + 11184) == 1 )
  {
    v6[0].x = FIELD_F32(a1, 11196);
    v6[0].y = FIELD_F32(a1, 11212);
    v6[0].z = FIELD_F32(a1, 11228);
    ((void (__fastcall *)(int *, float *, Vec3 *, _DWORD))checkLiquidCollisions)(
      &v4,
      &v5,
      v6,
      FIELD_U8(a1, 86));
    if ( v4 )
      v6[0].y = v5;
    EffectData_update((EffectData *)(a1 + 11184), v6, 0, 0);
  }
  result = sub_60235E50(a1 + 11248);
  if ( result == 1 )
  {
    v6[0].x = FIELD_F32(a1, 11260);
    v6[0].y = FIELD_F32(a1, 11276);
    v6[0].z = FIELD_F32(a1, 11292);
    ((void (__fastcall *)(int *, float *, Vec3 *, _DWORD))checkLiquidCollisions)(
      &v4,
      &v5,
      v6,
      FIELD_U8(a1, 86));
    if ( v4 )
      v6[0].y = v5;
    return EffectData_update((EffectData *)(a1 + 11248), v6, 0, 0);
  }
  return result;
}
