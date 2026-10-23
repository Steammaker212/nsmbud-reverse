/* PlantFireball_vf67
 * address: 0x6013A104   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall PlantFireball_vf67(int a1)
{
  Vec3 *v2; // r5
  float v3; // r1
  float v4; // r2
  float v5; // s2
  Vec3 v7; // [sp+18h] [bp-20h] BYREF

  v2 = (Vec3 *)(a1 + 108);
  v3 = FIELD_F32(a1, 148);
  v4 = FIELD_F32(a1, 152);
  v7.x = FIELD_F32(a1, 144);
  v7.y = v3;
  v7.z = v4;
  v5 = flt_60AF1F08[(FIELD_U32(a1, 20) >> 20) & 1];
  v7.x = v5 * v7.x;
  v7.y = v5 * v3;
  v7.z = v5 * v4;
  EffectWrapper_update((EffectWrapper *)(a1 + 6260), 2, (Vec3 *)(a1 + 108), (Vec3i *)(a1 + 6248), &v7);
  return LightSource_update1((LightSource *)(a1 + 6364), 0, v2, 0, 0, 0, 0, 0, 0);
}
