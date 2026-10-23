/* sub_608B3D7C
 * address: 0x608B3D7C   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608B3D7C(int *a1, int a2, int a3)
{
  int v3; // r4
  _DWORD *result; // r0
  int v7; // r2
  int v8; // r0
  bool v9; // zf
  int v10; // [sp+4h] [bp-4Ch] BYREF
  _DWORD v11[5]; // [sp+8h] [bp-48h] BYREF
  __int16 v12; // [sp+1Ch] [bp-34h]
  _BYTE v13[12]; // [sp+20h] [bp-30h] BYREF
  int v14; // [sp+2Ch] [bp-24h] BYREF

  v3 = 0;
  v10 = 0;
  v11[4] = 0;
  v12 = 0;
  memset(v11, 255, 16);
  result = (_DWORD *)sub_608A9C24(a1[1], (int)&v10, a2);
  if ( result == (_DWORD *)1 )
  {
    do
    {
      v7 = v11[v3];
      if ( v7 != -1 )
      {
        v14 = -1;
        result = (_DWORD *)sub_608A9EC8(a1[1], (int)&v14, v7);
        if ( result == (_DWORD *)1 )
        {
          result = (_DWORD *)(*(int (__fastcall **)(int *, int))(*a1 + 16))(a1, v14);
          if ( result )
          {
            v8 = sub_608B6BA8(v13);
            result = (_DWORD *)sub_608B6E78(v8);
            v9 = result == 0;
            if ( result )
              v9 = *result == 0;
            if ( !v9 )
              result = (_DWORD *)sub_608B3F18(a1, result[1], a3);
          }
        }
      }
      ++v3;
    }
    while ( v3 != 4 );
  }
  return result;
}
