/* sub_604A4AE4
 * address: 0x604A4AE4   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604A4AE4(int a1, unsigned int a2)
{
  _BYTE *v2; // r2
  int v3; // r4
  int result; // r0
  int (*v5)(void); // r1
  int v6; // r4
  int (**v7)(); // [sp+8h] [bp-10h] BYREF
  int v8; // [sp+Ch] [bp-Ch]

  if ( a2 != 6 && !FIELD_U8(a1, 20541) )
  {
    v2 = *(_BYTE **)(a1 + 20488);
    if ( v2 )
    {
      if ( (a2 | 1) == 3 )
      {
        if ( v2[2] )
          goto LABEL_10;
        a2 = 3;
      }
      if ( a2 < 7 )
        v2 += a2;
      if ( *v2 )
      {
LABEL_10:
        v3 = a1 + 48;
        v7 = &sead__SafeStringBase__vtable;
        v8 = dword_60CA12D4;
        result = sub_6047467C((_DWORD *)(a1 + 48), 0xEu, &v7, (int)&dword_60CA13A0, 1.0, 0);
        if ( result == 1 )
        {
          result = sub_6047482C(v3, 0xEu);
          if ( result )
          {
            v5 = *(int (**)(void))(*(_DWORD *)result + 108);
            return v5();
          }
        }
        return result;
      }
    }
  }
  v6 = a1 + 48;
  v7 = &sead__SafeStringBase__vtable;
  v8 = dword_60CA12D4;
  result = sub_6047467C((_DWORD *)(a1 + 48), 0xEu, &v7, (int)&dword_60CA13A0, 1.0, 0);
  if ( result == 1 )
  {
    result = sub_6047482C(v6, 0xEu);
    if ( result )
    {
      v5 = *(int (**)(void))(*(_DWORD *)result + 104);
      return v5();
    }
  }
  return result;
}
