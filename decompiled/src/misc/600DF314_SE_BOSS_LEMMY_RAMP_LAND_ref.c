/* SE_BOSS_LEMMY_RAMP_LAND_ref
 * address: 0x600DF314   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_LEMMY_RAMP_LAND_ref(int a1)
{
  _DWORD *v2; // r0
  int *v3; // r1
  unsigned int v4; // r2
  unsigned int v5; // r0
  int result; // r0
  float v7; // r1
  Vec3 v8; // [sp+4h] [bp-14h] BYREF

  KoopalingBase__vf670((CollisionActor *)a1);
  v2 = *(_DWORD **)(a1 + 7096);
  v3 = (int *)v2[3];
  v4 = v2[2];
  v5 = v2[17];
  if ( v4 > v5 )
    v3 += v5;
  result = *v3;
  if ( *(float *)(*v3 + 20) == 17.0 )
  {
    sub_60813430(a1 + 6332, "SE_BOSS_LEMMY_RAMP_LAND", 0);
    v7 = FIELD_F32(a1, 112);
    v8.x = FIELD_F32(a1, 108);
    v8.y = v7;
    v8.z = 4500.0;
    return EffectData_create(248, &v8, 0, 0);
  }
  return result;
}
