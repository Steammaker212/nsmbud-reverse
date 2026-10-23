/* sub_605040B4
 * address: 0x605040B4   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605040B4(int a1, int a2, _DWORD *a3)
{
  _DWORD *v6; // r4
  int result; // r0
  int v8; // r4
  int v9; // r6
  int i; // r2
  int v11; // [sp+8h] [bp-20h] BYREF
  int v12; // [sp+Ch] [bp-1Ch]

  v6 = (_DWORD *)(a1 + 40);
  sub_604734E4((_DWORD *)(a1 + 40), 0);
  sub_60476388(v6, a2, a3);
  v11 = 2;
  sub_60474848((int)v6, &dword_60CA77E0, &v11);
  v11 = 1;
  sub_604753A8((int)v6, a1 + 3580, &dword_60CA77D8, &v11);
  v11 = (int)&sead__SafeStringBase__vtable;
  v12 = dword_60CA77E4;
  result = sub_6047467C(v6, 0, &v11, (int)&dword_60CA77D0, 1.0, 0);
  if ( result == 1 )
  {
    result = sub_6047482C((int)v6, 0);
    v8 = result;
    if ( result )
    {
      v9 = FIELD_U32(result, 56);
      (*(void (__fastcall **)(int *))(v11 + 12))(&v11);
      (*(void (__fastcall **)(int *))(v11 + 12))(&v11);
      result = v12;
      if ( v12 == v9 )
      {
        return (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 104))(v8);
      }
      else
      {
        for ( i = 1; *(unsigned __int8 *)(v12 + i - 1) == *(unsigned __int8 *)(v9 + i - 1); i += 2 )
        {
          if ( !*(_BYTE *)(v12 + i - 1) )
            return (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 104))(v8);
          if ( i > 0x80000 || *(unsigned __int8 *)(v12 + i) != *(unsigned __int8 *)(v9 + i) )
            break;
          if ( !*(_BYTE *)(v12 + i) )
            return (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 104))(v8);
        }
      }
    }
  }
  return result;
}
