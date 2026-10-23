/* sub_6036DB88
 * address: 0x6036DB88   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6036DB88(int a1)
{
  float v1; // r1
  float v2; // r3
  int v3; // r4
  float v4; // s0
  int v5; // r1

  v1 = FIELD_F32(a1, 108);
  FIELD_F32(a1, 6308) = v1;
  v2 = FIELD_F32(a1, 112);
  FIELD_F32(a1, 6312) = v2;
  FIELD_U32(a1, 6316) = FIELD_U32(a1, 116);
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 1077936128;
  FIELD_U32(a1, 128) = 0;
  v3 = dword_60CC6484;
  v4 = v1 - FIELD_F32(dword_60CC6484, 112);
  FIELD_F32(a1, 6308) = v4;
  FIELD_F32(a1, 6312) = FIELD_F32(v3, 124) - v2;
  FIELD_U8(a1, 6360) = (float)(FIELD_F32(v3, 104) * 0.5) >= v4;
  v5 = **(_DWORD **)(FIELD_U32(a1, 6300) + 28);
  FIELD_U32(v5, 20) = 0;
  FIELD_U32(v5, 28) |= 2u;
  return EffectWrapper_update((EffectWrapper *)(a1 + 6768), 922, (Vec3 *)(a1 + 108), 0, 0);
}
