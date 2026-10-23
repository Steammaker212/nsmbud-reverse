/* sub_60547BF4
 * address: 0x60547BF4   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60547BF4(int a1)
{
  char v2; // r12
  int v4; // [sp+4h] [bp-14h] BYREF

  sub_60547D74();
  if ( ((unsigned int)dword_60CAC6A8 & ~(1616149528 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60CAC6A8) )
  {
    dword_60CAC6D8 = (int)&sead__SafeStringBase__vtable;
    dword_60CAC6DC = (int)"N_Select_00";
    dword_60CAC6E0 = (int)&sead__SafeStringBase__vtable;
    dword_60CAC6E4 = (int)"N_TypeBR_00";
    dword_60CAC6E8 = (int)&sead__SafeStringBase__vtable;
    dword_60CAC6EC = (int)"N_TypeA_00";
    dword_60CAC6F0 = (int)&sead__SafeStringBase__vtable;
    dword_60CAC6F4 = (int)"N_TypeBL_00";
    sub_60000288();
    _cxa_guard_release(dword_60CAC6A8);
  }
  v4 = 4;
  sub_6047518C(a1 + 40, a1 + 3668, &dword_60CAC6D8, &v4);
  sub_60547FDC(a1);
  sub_60548168(a1);
  Pa_Index_00_ref(a1);
  sub_60548530(a1);
  sub_6045BF58(a1 + 16444, 0);
  sub_6045BF58(a1 + 16848, 1);
  sub_6045BF58(a1 + 17252, 2);
  sub_6045BF58(a1 + 17656, 3);
  return sub_6045BF58(a1 + 18060, 4);
}
