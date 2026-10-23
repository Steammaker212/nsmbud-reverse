/* sub_604BFB80
 * address: 0x604BFB80   size: 596   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604BFB80(_DWORD *a1)
{
  char v1; // r12
  __int64 v3; // r2
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int result; // r0
  int v10[7]; // [sp+4h] [bp-1Ch] BYREF

  if ( ((unsigned int)&dword_60CA2980[5] & ~(1615592352 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CA2980[5]) )
  {
    LODWORD(v3) = &sead__SafeStringBase__vtable;
    dword_60CA2A78 = (int)&sead__SafeStringBase__vtable;
    HIDWORD(v3) = "B_Btn_00";
    dword_60CA2A7C = (int)"B_Btn_00";
    dword_60CA2A80 = (int)&sead__SafeStringBase__vtable;
    dword_60CA2A84 = (int)"B_Arrow_00";
    dword_60CA2A88 = (int)&sead__SafeStringBase__vtable;
    unk_60CA2A8C = "B_Arrow_00";
    dword_60CA2A90[0] = &sead__SafeStringBase__vtable;
    dword_60CA2A90[1] = "B_Btn_00";
    *(_QWORD *)&dword_60CA2A90[2] = v3;
    sub_60000288();
    _cxa_guard_release(&dword_60CA2980[5]);
  }
  if ( ((unsigned int)&dword_60CA2980[6] & ~(1615592508 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CA2980[6]) )
  {
    dword_60CA2AA0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA2AA4 = (int)"Pa_Menu_00";
    dword_60CA2AA8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA2AAC = (int)"Pa_ArrowBtnL_00";
    dword_60CA2AB0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA2AB4 = (int)"Pa_ArrowBtnR_00";
    dword_60CA2AB8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA2ABC = (int)"Pa_Return_00";
    dword_60CA2AC0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA2AC4 = (int)"Pa_BtnR_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CA2980[6]);
  }
  v4 = a1[1];
  v10[0] = 1;
  sub_604755C4(v4, (int)(a1 + 662), &dword_60CA2AA0, (int)&dword_60CA2A78, v10);
  a1[667] = *(_DWORD *)(a1[662] + 28);
  v5 = a1[1];
  v10[0] = 1;
  sub_604755C4(v5, (int)(a1 + 663), &dword_60CA2AA8, (int)&dword_60CA2A80, v10);
  a1[668] = *(_DWORD *)(a1[663] + 28);
  v6 = a1[1];
  v10[0] = 1;
  sub_604755C4(v6, (int)(a1 + 664), &dword_60CA2AB0, (int)&dword_60CA2A88, v10);
  a1[669] = *(_DWORD *)(a1[664] + 28);
  v7 = a1[1];
  v10[0] = 1;
  sub_604755C4(v7, (int)(a1 + 665), &dword_60CA2AB8, (int)dword_60CA2A90, v10);
  a1[670] = *(_DWORD *)(a1[665] + 28);
  v8 = a1[1];
  v10[0] = 1;
  sub_604755C4(v8, (int)(a1 + 666), &dword_60CA2AC0, (int)&dword_60CA2A90[2], v10);
  result = *(_DWORD *)(a1[666] + 28);
  a1[671] = result;
  return result;
}
