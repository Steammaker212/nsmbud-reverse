/* sub_60504234
 * address: 0x60504234   size: 364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60504234(int a1, int a2)
{
  _DWORD *v4; // r4
  int result; // r0
  int v6; // r4
  int v7; // r6
  int i; // r2
  int v9; // [sp+8h] [bp-20h] BYREF
  int v10; // [sp+Ch] [bp-1Ch]

  v4 = (_DWORD *)(a1 + 40);
  sub_604734E4((_DWORD *)(a1 + 40), 0);
  sub_604762F8(v4, a2);
  v9 = 2;
  sub_60474848((int)v4, &dword_60CA77E0, &v9);
  v9 = 1;
  sub_604753A8((int)v4, a1 + 3580, &dword_60CA77D8, &v9);
  v9 = (int)&sead__SafeStringBase__vtable;
  v10 = dword_60CA77E4;
  result = sub_6047467C(v4, 0, &v9, (int)&dword_60CA77D0, 1.0, 0);
  if ( result == 1 )
  {
    result = sub_6047482C((int)v4, 0);
    v6 = result;
    if ( result )
    {
      v7 = FIELD_U32(result, 56);
      (*(void (__fastcall **)(int *))(v9 + 12))(&v9);
      (*(void (__fastcall **)(int *))(v9 + 12))(&v9);
      result = v10;
      if ( v10 == v7 )
      {
        return (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 104))(v6);
      }
      else
      {
        for ( i = 1; *(unsigned __int8 *)(v10 + i - 1) == *(unsigned __int8 *)(v7 + i - 1); i += 2 )
        {
          if ( !*(_BYTE *)(v10 + i - 1) )
            return (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 104))(v6);
          if ( i > 0x80000 || *(unsigned __int8 *)(v10 + i) != *(unsigned __int8 *)(v7 + i) )
            break;
          if ( !*(_BYTE *)(v10 + i) )
            return (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 104))(v6);
        }
      }
    }
  }
  return result;
}
