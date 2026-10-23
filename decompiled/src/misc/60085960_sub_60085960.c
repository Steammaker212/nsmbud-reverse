/* sub_60085960
 * address: 0x60085960   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60085960(int a1)
{
  int v1; // r4
  int v2; // r0
  int v3; // r0
  float v4; // s0
  int (**v6)(); // [sp+0h] [bp-28h] BYREF
  const char *v7; // [sp+4h] [bp-24h]

  v1 = a1;
  v2 = FIELD_U32(a1, 7100);
  v6 = &sead__SafeStringBase__vtable;
  v7 = "lkp_shell_out";
  sub_60421AE4(v2, &v6, 0);
  v3 = FIELD_U32(v1, 7612);
  v6 = &sead__SafeStringBase__vtable;
  v7 = "lkp_shell_model_out";
  sub_6040F4B8(v3, &v6, 0);
  v4 = *(float *)&dword_60C81F58;
  FIELD_U32(v1, 124) = dword_60C81F58;
  FIELD_F32(v1, 136) = -v4;
  FIELD_U32(v1, 100) = dword_60C81F3C;
  FIELD_U32(v1, 132) = 0;
  FIELD_U32(v1, 104) = 0;
  v1 += 6332;
  sub_60813430(v1, "SE_VOC_JR_RECORVER", 0);
  return sub_60813430(v1, "SE_BOSS_CMN_SHELL_OUT", 0);
}
