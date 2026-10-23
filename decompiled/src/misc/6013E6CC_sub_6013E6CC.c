/* sub_6013E6CC
 * address: 0x6013E6CC   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6013E6CC(int a1)
{
  float v2; // s0
  Vec3 v4; // [sp+4h] [bp-14h] BYREF

  v2 = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
  v4.x = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
  v4.y = v2;
  v4.z = 4500.0;
  EffectData_create(377, &v4, 0, 0);
  SE_EMY_DOWN_SYNC_ref(FIELD_U32(EnemyCounterMaybe_instance, 240), (float *)(a1 + 108));
  return SE_OBJ_ROCK_LAND_ref(a1, FIELD_U32(a1, 80));
}
