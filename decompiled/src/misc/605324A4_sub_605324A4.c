/* sub_605324A4
 * address: 0x605324A4   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_605324A4(int a1, unsigned int a2)
{
  char v2; // r12
  _DWORD *v5; // r4
  int *v6; // r5
  unsigned int result; // r0

  if ( ((unsigned int)&dword_60CAACA0 & ~(1616061636 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CAACA0) )
  {
    dword_60CAAD10[0] = (int)&sead__SafeStringBase__vtable;
    dword_60CAAD14 = dword_60CAACDC;
    dword_60CAAD18 = (int)&sead__SafeStringBase__vtable;
    dword_60CAAD1C = dword_60CAACE4;
    dword_60CAAD20 = (int)&sead__SafeStringBase__vtable;
    dword_60CAAD24 = dword_60CAACEC;
    sub_60000288();
    _cxa_guard_release(&dword_60CAACA0);
  }
  v5 = (_DWORD *)(a1 + 36);
  if ( a2 >= 3 )
    a2 = 0;
  v6 = &dword_60CAAD10[2 * a2];
  result = sub_604746E4((int)v5, v6, &dword_60CAABFC);
  if ( result != -1 )
    return sub_604742D0(v5, 2u, v6, result, 1.0, 0);
  return result;
}
