/* sub_60413E70
 * address: 0x60413E70   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60413E70(_DWORD *a1)
{
  int v2; // r10
  _DWORD *result; // r0
  _DWORD *v4; // r5
  _DWORD *v5; // r4
  _DWORD *v6; // r11
  _DWORD *v7; // r8
  _DWORD *v8; // r9
  _DWORD *v9; // r7
  _DWORD *v10; // r6
  _DWORD *v11; // r6

  v2 = 1;
  if ( !sub_603E5154(dword_60C995D0) )
  {
    result = *(_DWORD **)(dword_60C995D0 + 32);
    if ( result )
      return result;
    v2 = 0;
  }
  result = a1 + 43060;
  v4 = (_DWORD *)a1[43061];
  if ( v4 != a1 + 43060 )
  {
    v5 = v4 - 54;
    v6 = a1 + 43006;
    result = (_DWORD *)v4[1];
    v7 = a1 + 43063;
    v8 = a1 + 43062;
    if ( v2 )
    {
      v9 = a1 + 57404;
      do
      {
        v10 = v4;
        v4 = result;
        if ( (*(_DWORD *)(**(_DWORD **)(*v9 + 4 * v5[1]) + 72) & v2) != 0
          && !((int (__fastcall *)(_DWORD *))loc_60424410)(v5) )
        {
          sead__ListNode__erase(v10);
          --*v8;
          sub_60424294(v5);
          *v5 = *v7;
          *v7 = v5;
        }
        result = (_DWORD *)v4[1];
        v5 = v4 - 54;
      }
      while ( v4 - 54 != v6 );
    }
    else
    {
      do
      {
        v11 = result;
        if ( !((int (__fastcall *)(_DWORD *))loc_60424410)(v5) )
        {
          sead__ListNode__erase(v4);
          --*v8;
          sub_60424294(v5);
          *v5 = *v7;
          *v7 = v5;
        }
        result = (_DWORD *)v11[1];
        v5 = v11 - 54;
        v4 = v11;
      }
      while ( v11 - 54 != v6 );
    }
  }
  return result;
}
