/* sub_600E2170
 * address: 0x600E2170   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_600E2170(EffectWrapper *a1)
{
  float v2; // s18
  float v3; // r5
  float v4; // s16
  float v5; // s0
  Vec3 v7; // [sp+4h] [bp-2Ch] BYREF

  v2 = *(float *)&FIELD_U32(a1 + (1) * 104, 0x8);
  v3 = *(float *)&FIELD_U32(a1 + (1) * 104, 0x4);
  v4 = (*(float (__fastcall **)(EffectWrapper *))(FIELD_U32(a1, 0x0) + 204))(a1);
  v5 = (*(float (__fastcall **)(EffectWrapper *, float))(FIELD_U32(a1, 0x0) + 200))(a1, v4);
  v7.x = v3;
  v7.y = v2 - (float)(v4 * v5);
  v7.z = 4500.0;
  return EffectWrapper_update(a1 + 67, 254, &v7, 0, 0);
}
