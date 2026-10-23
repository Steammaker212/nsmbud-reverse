/* sub_601A11E4
 * address: 0x601A11E4   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601A11E4(int a1, unsigned int a2, const char **a3, int a4)
{
  int v4; // r6
  int v5; // r7
  _DWORD *v8; // r0
  int v9; // r1
  bool v10; // zf
  int v11; // r2
  _DWORD *v12; // r9
  _DWORD *v13; // r11
  int v14; // r7
  int v15; // r7
  int v16; // r7
  _DWORD *v17; // r1
  _DWORD v19[20]; // [sp+0h] [bp-50h] BYREF

  LOBYTE(v5) = 0;
  if ( a2 >= 9 )
    a2 = 0;
  v8 = (_DWORD *)(a1 + 16 * a2);
  if ( (int)v8[6] >= 1 )
  {
    v9 = v8[5];
    v10 = v9 == 0;
    if ( v9 )
    {
      v11 = v8[7];
      v4 = v9 - v11;
      v10 = v9 == v11;
    }
    if ( !v10 )
    {
      v12 = v8 + 4;
      v13 = v8 + 7;
      v5 = 0;
      do
      {
        (*((void (__fastcall **)(const char **))*a3 + 3))(a3);
        sub_6017D524(v19, "%s%c", a3[1], 97);
        v14 = v5 | sub_602256F4(v4, v19, a4);
        v15 = v14 | sub_602255BC(v4, a3, a4);
        v16 = v15 | sub_6022534C(v4, a3, a4);
        v5 = v16 | sub_60225484(v4, a3, a4);
        v17 = *(_DWORD **)(*v13 + v4 + 4);
        v4 = (int)v17 - *v13;
        if ( v17 == v12 )
          v4 = 0;
      }
      while ( v4 );
    }
  }
  return v5 & 1;
}
