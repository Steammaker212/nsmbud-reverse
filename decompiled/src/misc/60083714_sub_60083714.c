/* sub_60083714
 * address: 0x60083714   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60083714(int a1)
{
  int v2; // r0
  int result; // r0
  float v4; // r1
  Vec3 v5[2]; // [sp+4h] [bp-1Ch] BYREF

  v2 = FIELD_U32(a1, 7100);
  LODWORD(v5[0].x) = &sead__SafeStringBase__vtable;
  LODWORD(v5[0].y) = "lkp_jump_ed";
  sub_60421AE4(v2, v5, 0);
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 136) = -1065353216;
  FIELD_U32(a1, 100) = -1103101952;
  result = FIELD_U8(a1, 7248);
  if ( !FIELD_U8(a1, 7248) )
  {
    v4 = FIELD_F32(a1, 112);
    v5[0].x = FIELD_F32(a1, 108);
    v5[0].y = v4;
    v5[0].z = 4500.0;
    EffectData_create(1080, v5, 0, 0);
    return sub_60813430(a1 + 6332, "SE_BOSS_JR_LAND", 0);
  }
  return result;
}
