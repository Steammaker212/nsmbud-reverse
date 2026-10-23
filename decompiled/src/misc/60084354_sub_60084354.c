/* sub_60084354
 * address: 0x60084354   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60084354(_DWORD *a1)
{
  _DWORD *v1; // r4
  int v2; // r0
  int v3; // r1
  _DWORD v5[4]; // [sp+0h] [bp-10h] BYREF

  v1 = a1;
  v2 = a1[1775];
  v5[0] = &sead__SafeStringBase__vtable;
  v5[1] = "lkp_jumpA";
  sub_60421AE4(v2, v5, 0);
  v3 = dword_60C81F50;
  v1[31] = dword_60C81F50;
  v1[25] = dword_60C81F2C;
  v1[34] = v3 ^ 0x80000000;
  v1 += 1583;
  sub_60813430(v1, "SE_BOSS_JR_JUMP_L", 0);
  return sub_60813430(v1, "SE_VOC_JR_JUMP", 0);
}
