/* lkp_down_ref
 * address: 0x6008280C   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall lkp_down_ref(int a1)
{
  int v2; // r0
  float v3; // r1
  Vec3 v5[2]; // [sp+4h] [bp-1Ch] BYREF

  v2 = FIELD_U32(a1, 7100);
  LODWORD(v5[0].x) = &sead__SafeStringBase__vtable;
  LODWORD(v5[0].y) = "lkp_down";
  sub_60421AE4(v2, v5, 0);
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 136) = 0;
  FIELD_U32(a1, 140) = 0;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 76))(a1);
  FIELD_U32(a1, 304) = 0;
  FIELD_U32(a1, 308) = 1090519040;
  FIELD_U32(a1, 312) = 1094713344;
  FIELD_U32(a1, 316) = 1090519040;
  v3 = FIELD_F32(a1, 112);
  v5[0].x = FIELD_F32(a1, 108);
  v5[0].y = v3;
  v5[0].z = 4500.0;
  EffectData_create(1080, v5, 0, 0);
  FIELD_U16(a1, 6276) = 40;
  return 6276;
}
