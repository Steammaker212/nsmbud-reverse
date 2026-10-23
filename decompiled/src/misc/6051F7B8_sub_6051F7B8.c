/* sub_6051F7B8
 * address: 0x6051F7B8   size: 784   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6051F7B8(_DWORD *a1)
{
  char v1; // r12
  char v3; // r12
  int v4; // r6
  int (__fastcall *v5)(int, int, int); // r7
  int v6; // r6
  int (__fastcall *v7)(int, int, int); // r7
  int v8; // r6
  int (__fastcall *v9)(int, int, int); // r7
  int result; // r0
  int v11[10]; // [sp+0h] [bp-28h] BYREF

  if ( ((unsigned int)&dword_60CA9120[2] & ~(1615984600 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CA9120[2]) )
  {
    dword_60CA913C = (int)&sead__SafeStringBase__vtable;
    dword_60CA9140 = (int)"Pa_ArrowR_00";
    dword_60CA9144 = (int)&sead__SafeStringBase__vtable;
    dword_60CA9148 = (int)"Pa_ArrowL_00";
    dword_60CA914C = (int)&sead__SafeStringBase__vtable;
    dword_60CA9150 = (int)"Pa_Close_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CA9120[2]);
  }
  v11[0] = 3;
  sub_604756E0((int)(a1 + 10), (int)(a1 + 921), &dword_60CA913C, v11);
  if ( ((unsigned int)&dword_60CA9120[3] & ~(1615984780 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60CA9120[3]) )
  {
    dword_60CA9154 = (int)&sead__SafeStringBase__vtable;
    dword_60CA9158 = (int)"B_Arrow_00";
    dword_60CA915C = (int)&sead__SafeStringBase__vtable;
    dword_60CA9160 = (int)"B_Arrow_00";
    dword_60CA9164 = (int)&sead__SafeStringBase__vtable;
    dword_60CA9168 = (int)"B_Btn_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CA9120[3]);
  }
  v4 = a1[921];
  v5 = *(int (__fastcall **)(int, int, int))(*(_DWORD *)v4 + 48);
  (*(void (__fastcall **)(int *))(dword_60CA9154 + 12))(&dword_60CA9154);
  a1[924] = v5(v4, dword_60CA9158, 1);
  v6 = a1[922];
  v7 = *(int (__fastcall **)(int, int, int))(*(_DWORD *)v6 + 48);
  (*(void (__fastcall **)(int *))(dword_60CA915C + 12))(&dword_60CA915C);
  a1[925] = v7(v6, dword_60CA9160, 1);
  v8 = a1[923];
  v9 = *(int (__fastcall **)(int, int, int))(*(_DWORD *)v8 + 48);
  (*(void (__fastcall **)(int *))(dword_60CA9164 + 12))(&dword_60CA9164);
  a1[926] = v9(v8, dword_60CA9168, 1);
  v11[0] = 0;
  sub_60502210((int)(a1 + 927), v11, 15);
  v11[0] = (int)&sead__SafeStringBase__vtable;
  v11[1] = (int)"RecordList";
  sead__SafeStringBase__operator_assign((int)(a1 + 1180), (int)v11);
  v11[0] = 1;
  sub_605029FC((int)(a1 + 927), v11, (int)"SE_SYS_PAGE");
  v11[0] = 0;
  sub_605029FC((int)(a1 + 927), v11, (int)"SE_SYS_PAGE");
  v11[0] = 2;
  sub_605029FC((int)(a1 + 927), v11, (int)"SE_SYS_BACK");
  v11[0] = 2;
  sub_605029FC((int)(a1 + 927), v11, (int)"SE_SYS_BACK");
  *(_DWORD *)(sub_608DE61C(a1 + 940, v11[0]) - a1[943] + 176) = "SE_SYS_BACK_BTN_OVER";
  *(_DWORD *)(sub_608DE61C(a1 + 940, v11[0]) - a1[943] + 180) = "SE_SYS_BACK_BTN_OVER_OFF";
  sub_605028F0((int)(a1 + 927), v11, 1);
  result = sub_608DE61C(a1 + 940, v11[0]) - a1[943];
  FIELD_U8(result, 208) = 0;
  return result;
}
