/* sub_60556FD4
 * address: 0x60556FD4   size: 440   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60556FD4(int a1)
{
  int v2; // r5
  char v3; // r12
  char v4; // r12
  _DWORD v6[4]; // [sp+4h] [bp-3Ch] BYREF
  _DWORD v7[2]; // [sp+14h] [bp-2Ch] BYREF
  int v8[9]; // [sp+1Ch] [bp-24h] BYREF

  v2 = a1 + 44;
  v6[0] = &sead__SafeStringBase__vtable;
  v6[1] = "Pa_BtnL_00";
  v6[2] = &sead__SafeStringBase__vtable;
  v6[3] = "Pa_BtnR_00";
  v7[0] = &sead__SafeStringBase__vtable;
  v7[1] = "Pa_Return_00";
  v8[0] = 3;
  sub_604756E0(a1 + 44, a1 + 3620, v6, v8);
  if ( ((unsigned int)&dword_60CAD610[1] & ~(1616212064 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60CAD610[1]) )
  {
    dword_60CAD620 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD624 = (int)"N_Btn_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CAD610[1]);
  }
  v8[0] = 1;
  sub_6047566C(v2, a1 + 3616, v7, &dword_60CAD620, v8);
  if ( ((unsigned int)&dword_60CAD610[2] & ~(1616212212 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60CAD610[2]) )
  {
    dword_60CAD628 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD62C = (int)"P_Base_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CAD610[2]);
  }
  v8[0] = 1;
  sub_60475618(v2, a1 + 3632, v7, (int)&dword_60CAD628, v8);
  return B_Btn_00_ref_557814(a1, v6);
}
