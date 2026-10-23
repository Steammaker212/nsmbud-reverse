/* sub_604BF87C
 * address: 0x604BF87C   size: 692   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604BF87C(int a1)
{
  char v1; // r12
  int v3; // r0
  int result; // r0
  int v5[11]; // [sp+4h] [bp-2Ch] BYREF

  if ( ((unsigned int)&dword_60CA2980[3] & ~(1615591580 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CA2980[3]) )
  {
    dword_60CA2A50 = (int)&sead__SafeStringBase__vtable;
    dword_60CA2A54 = (int)"Pa_Menu_00";
    dword_60CA2A58 = (int)&sead__SafeStringBase__vtable;
    dword_60CA2A5C = (int)"Pa_ArrowBtnL_00";
    dword_60CA2A60 = (int)&sead__SafeStringBase__vtable;
    dword_60CA2A64 = (int)"Pa_ArrowBtnR_00";
    dword_60CA2A68 = (int)&sead__SafeStringBase__vtable;
    dword_60CA2A6C = (int)"Pa_Return_00";
    dword_60CA2A70 = (int)&sead__SafeStringBase__vtable;
    dword_60CA2A74 = (int)"Pa_BtnR_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CA2980[3]);
  }
  v3 = FIELD_U32(a1, 4);
  v5[0] = 5;
  sub_604756E0(v3, a1 + 544, &dword_60CA2A50, v5);
  v5[0] = 0;
  sub_60502210(a1 + 564, v5, 11);
  v5[0] = (int)&sead__SafeStringBase__vtable;
  v5[1] = (int)"CourseSelectFree";
  sead__SafeStringBase__operator_assign(a1 + 1576, (int)v5);
  v5[0] = 0;
  sub_605028F0(a1 + 564, v5, 1);
  *(_BYTE *)(sub_608DE61C(a1 + 616, v5[0]) - FIELD_U32(a1, 628) + 208) = 0;
  v5[0] = 1;
  sub_605028F0(a1 + 564, v5, 1);
  *(_BYTE *)(sub_608DE61C(a1 + 616, v5[0]) - FIELD_U32(a1, 628) + 208) = 0;
  v5[0] = 2;
  sub_605028F0(a1 + 564, v5, 1);
  *(_BYTE *)(sub_608DE61C(a1 + 616, v5[0]) - FIELD_U32(a1, 628) + 208) = 0;
  v5[0] = 3;
  sub_605028F0(a1 + 564, v5, 1);
  *(_BYTE *)(sub_608DE61C(a1 + 616, v5[0]) - FIELD_U32(a1, 628) + 208) = 0;
  *(_DWORD *)(sub_608DE61C(a1 + 616, 4) - FIELD_U32(a1, 628) + 192) = 0;
  v5[0] = 0;
  sub_605029FC(a1 + 564, v5, "SE_SYS_PAUSE");
  v5[0] = 1;
  sub_605029FC(a1 + 564, v5, "SE_SYS_PAGE");
  v5[0] = 2;
  sub_605029FC(a1 + 564, v5, "SE_SYS_PAGE");
  v5[0] = 3;
  sub_605029FC(a1 + 564, v5, "SE_SYS_BACK");
  *(_DWORD *)(sub_608DE61C(a1 + 616, v5[0]) - FIELD_U32(a1, 628) + 176) = "SE_SYS_BACK_BTN_OVER";
  result = sub_608DE61C(a1 + 616, v5[0]) - FIELD_U32(a1, 628);
  FIELD_U32(result, 180) = "SE_SYS_BACK_BTN_OVER_OFF";
  return result;
}
