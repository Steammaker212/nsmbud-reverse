/* sub_601481BC
 * address: 0x601481BC   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601481BC(float *a1)
{
  float v2; // s0
  Vec3 v4; // [sp+4h] [bp-14h] BYREF

  v2 = a1[28] + a1[144];
  v4.x = a1[27] + a1[143];
  v4.y = v2;
  v4.z = 4500.0;
  EffectData_create(377, &v4, 0, 0);
  SE_EMY_DOWN_SYNC_ref(FIELD_U32(EnemyCounterMaybe_instance, 240), a1 + 27);
  return (*(int (__fastcall **)(float *, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C88120);
}
