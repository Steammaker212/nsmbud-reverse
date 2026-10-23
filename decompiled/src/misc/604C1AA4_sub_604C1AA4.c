/* sub_604C1AA4
 * address: 0x604C1AA4   size: 476   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604C1AA4(int a1, int a2, unsigned __int8 *a3, int a4)
{
  char v4; // r12
  _DWORD *v9; // r9
  int result; // r0
  _DWORD *v11; // r5

  v9 = (_DWORD *)dword_60C99DEC;
  if ( ((unsigned int)&dword_60CA2980[9] & ~(1615600344 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60CA2980[9]) )
  {
    dword_60CA2A00 = (int)&sead__SafeStringBase__vtable;
    dword_60CA2A04 = (int)"Pa_Icon1P_00";
    dword_60CA2A08 = (int)&sead__SafeStringBase__vtable;
    dword_60CA2A0C = (int)"Pa_Icon2P_00";
    dword_60CA2A10 = (int)&sead__SafeStringBase__vtable;
    dword_60CA2A14 = (int)"Pa_Icon3P_00";
    dword_60CA2A18 = (int)&sead__SafeStringBase__vtable;
    dword_60CA2A1C = (int)"Pa_Icon4P_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CA2980[9]);
  }
  result = 25648;
  FIELD_U32(a1, 25648) = 0;
  v11 = (_DWORD *)(a1 + 25648);
  if ( a4 >= 1 )
  {
    result = a3[16];
    if ( a3[16] )
    {
      *v11 = 1;
      result = sub_60509C50(a1 + 11328, a2, &dword_60CA2A00, v9[12]);
    }
    if ( a4 >= 2 )
    {
      result = a3[36];
      if ( a3[36] )
      {
        ++*v11;
        result = sub_60509C50(a1 + 14908, a2, &dword_60CA2A08, v9[30]);
      }
      if ( a4 >= 3 )
      {
        result = a3[56];
        if ( a3[56] )
        {
          ++*v11;
          result = sub_60509C50(a1 + 18488, a2, &dword_60CA2A10, v9[48]);
        }
        if ( a4 >= 4 )
        {
          result = a3[76];
          if ( a3[76] )
          {
            ++*v11;
            return sub_60509C50(a1 + 22068, a2, &dword_60CA2A18, v9[66]);
          }
        }
      }
    }
  }
  return result;
}
