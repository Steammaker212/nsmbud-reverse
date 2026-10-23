/* sub_60547FDC
 * address: 0x60547FDC   size: 368   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60547FDC(int a1)
{
  int result; // r0
  int v3[2]; // [sp+0h] [bp-48h] BYREF
  _DWORD v4[16]; // [sp+8h] [bp-40h] BYREF

  v4[0] = &sead__SafeStringBase__vtable;
  v4[1] = "Pa_Cursor_00";
  v4[2] = &sead__SafeStringBase__vtable;
  v4[3] = "Pa_ArrowBtnR_00";
  v4[4] = &sead__SafeStringBase__vtable;
  v4[5] = "Pa_ArrowBtnL_00";
  v4[6] = &sead__SafeStringBase__vtable;
  v4[7] = "Pa_OK_00";
  v3[0] = 4;
  sub_604756E0(a1 + 40, a1 + 3684, v4, v3);
  v3[0] = 0;
  sub_60502210(a1 + 3700, v3, 9);
  v3[0] = (int)&sead__SafeStringBase__vtable;
  v3[1] = (int)"SetUpBtn";
  sead__SafeStringBase__operator_assign(a1 + 4712, (int)v3);
  *(_DWORD *)(sub_608DE61C(a1 + 3752, 0) - FIELD_U32(a1, 3764) + 192) = 0;
  v3[0] = 2;
  sub_605029FC(a1 + 3700, v3, (int)"SE_SYS_PAGE");
  sub_605028F0(a1 + 3700, v3, 1);
  *(_BYTE *)(sub_608DE61C(a1 + 3752, v3[0]) - FIELD_U32(a1, 3764) + 208) = 0;
  v3[0] = 1;
  sub_605029FC(a1 + 3700, v3, (int)"SE_SYS_PAGE");
  sub_605028F0(a1 + 3700, v3, 1);
  result = sub_608DE61C(a1 + 3752, v3[0]) - FIELD_U32(a1, 3764);
  FIELD_U8(result, 208) = 0;
  return result;
}
