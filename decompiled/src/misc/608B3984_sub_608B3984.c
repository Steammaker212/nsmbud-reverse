/* sub_608B3984
 * address: 0x608B3984   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_608B3984(int a1, int a2, int a3, unsigned int a4, int a5, unsigned int a6)
{
  int v8; // r7
  int v9; // r0
  int v10; // r6
  unsigned int v11; // r7
  unsigned int v12; // r2
  unsigned int v13; // r0
  int v14; // r1
  int v16; // [sp+Ch] [bp-2Ch] BYREF
  int v17[10]; // [sp+10h] [bp-28h] BYREF

  v8 = 0;
  v9 = sub_608AA0B0(*(_DWORD **)(a1 + 4), a2, a1 + 8, 512, 0, 0);
  v10 = v9;
  if ( v9
    && (*(int (__fastcall **)(int))(*(_DWORD *)v9 + 44))(v9) == 1
    && (*(int (__fastcall **)(int))(*(_DWORD *)v10 + 36))(v10) == 1 )
  {
    v8 = 0;
    (*(void (__fastcall **)(int, int, _DWORD))(*(_DWORD *)v10 + 24))(v10, a5, 0);
    if ( a6 )
    {
      if ( a4 )
      {
        v11 = a4;
        while ( 1 )
        {
          v16 = 0;
          v12 = a6;
          if ( v11 < a6 )
            v12 = v11;
          v13 = (*(int (__fastcall **)(int, int, unsigned int, int *))(*(_DWORD *)v10 + 16))(v10, a3, v12, &v16);
          if ( v16 < 0 )
            break;
          v14 = 0;
          if ( v11 > v13 )
            a3 += v13;
          else
            v14 = 1;
          v11 -= v13;
          if ( !v11 || v14 )
            return a4;
        }
        return 0;
      }
      else
      {
        return a4;
      }
    }
    else
    {
      v17[0] = 0;
      (*(void (__fastcall **)(int, int, unsigned int, int *))(*(_DWORD *)v10 + 16))(v10, a3, a4, v17);
      if ( v17[0] >= 0 )
        return a4;
    }
  }
  return v8;
}
