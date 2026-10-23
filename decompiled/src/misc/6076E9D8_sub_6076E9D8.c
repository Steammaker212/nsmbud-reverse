/* sub_6076E9D8
 * address: 0x6076E9D8   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6076E9D8(int a1)
{
  int v2; // r5
  int v3; // r6
  float v4; // s0
  unsigned int v5; // r5
  int v6; // r0
  unsigned int v7; // r5
  int v8; // r0

  v2 = FIELD_U32(a1, 108);
  v3 = FIELD_U32(a1, 112);
  v4 = sub_600024C4(a1);
  FIELD_U32(a1, 10624) = v2;
  FIELD_U32(a1, 10628) = v3;
  FIELD_F32(a1, 10632) = v4;
  v5 = FIELD_S8(a1, 84);
  v6 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1220))(a1);
  sub_60236F74(v5, (EffectData *)(a1 + 10560), v6, (Vec3 *)(a1 + 10624), 0, 0);
  v7 = FIELD_S8(a1, 84);
  v8 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1228))(a1);
  return sub_60236E40(v7, v8, (Vec3 *)(a1 + 10624), 0, 0);
}
