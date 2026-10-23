/* SE_BOSS_JR_ref_2_helper
 * address: 0x60048550   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_JR_ref_2_helper(int a1)
{
  float v1; // r1
  Vec3 v3; // [sp+4h] [bp-14h] BYREF

  v1 = FIELD_F32(a1, 11580);
  v3.x = FIELD_F32(a1, 11576);
  v3.y = v1;
  v3.z = 4500.0;
  return EffectData_create(1074, &v3, 0, 0);
}
