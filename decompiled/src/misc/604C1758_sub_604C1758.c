/* sub_604C1758
 * address: 0x604C1758   size: 764   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604C1758(_DWORD *a1, int a2)
{
  char v2; // r12
  int v5; // r6
  int v6; // r0
  int v7; // r7
  int v8; // r11
  int v9; // r1
  int result; // r0
  int v11; // [sp+Ch] [bp-2Ch] BYREF
  int v12[10]; // [sp+10h] [bp-28h] BYREF

  if ( ((unsigned int)&dword_60CA2980[7] & ~(1615599484 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CA2980[7]) )
  {
    dword_60CA29C8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA29CC = (int)"Pa_PackL_00";
    dword_60CA29D0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA29D4 = (int)"Pa_PackC_00";
    dword_60CA29D8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA29DC = (int)"Pa_PackR_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CA2980[7]);
  }
  if ( ((unsigned int)&dword_60CA2980[8] & ~(1615599632 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CA2980[8]) )
  {
    dword_60CA29B8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA29BC = (int)"N_Scroll_00";
    dword_60CA29C0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA29C4 = (int)"N_Pack_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CA2980[8]);
  }
  v5 = sub_60407384(dword_60C9A1E0);
  v6 = sub_604073C4();
  if ( v5 < 0 && (v5 = FIELD_U32(dword_60C9A1E0, 536), v5 == 8) )
  {
    v5 = v6;
    if ( v6 <= 0 )
      v5 = a1[1];
  }
  else if ( v5 <= 0 )
  {
    v5 = a1[1];
  }
  N_Pack_00_ref(a1 + 3, a2, &dword_60CA29C8, 0, v5 - 1, a1[1]);
  v7 = a1[1];
  v12[0] = 2;
  sub_6047566C(a2, (int)(a1 + 2826), &dword_60CA29C8, &dword_60CA29B8, v12);
  if ( v5 >= v7 )
    v5 = 0;
  N_Pack_00_ref(a1 + 942, a2, &dword_60CA29D0, 1, v5, a1[1]);
  v8 = a1[1];
  v12[0] = 2;
  sub_6047566C(a2, (int)(a1 + 2828), &dword_60CA29D0, &dword_60CA29B8, v12);
  v9 = v5 + 1;
  if ( v5 + 1 >= v8 )
    v9 = 0;
  N_Pack_00_ref(a1 + 1881, a2, &dword_60CA29D8, 2, v9, a1[1]);
  v12[0] = 2;
  sub_6047566C(a2, (int)(a1 + 2830), &dword_60CA29D8, &dword_60CA29B8, v12);
  v11 = 3;
  sub_604756E0(a2, (int)(a1 + 2820), &dword_60CA29C8, &v11);
  a1[2823] = *(_DWORD *)(a1[2820] + 24);
  a1[2824] = *(_DWORD *)(a1[2821] + 24);
  result = *(_DWORD *)(a1[2822] + 24);
  a1[2825] = result;
  return result;
}
