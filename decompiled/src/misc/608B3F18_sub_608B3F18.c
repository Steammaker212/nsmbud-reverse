/* sub_608B3F18
 * address: 0x608B3F18   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B3F18(int *a1, int a2, int a3)
{
  int result; // r0
  const void *v6; // r6
  int v7; // r0
  size_t v8; // r7
  int v9; // r8
  int v10; // r0
  unsigned int i; // r6
  int v12; // r0
  _BYTE v13[16]; // [sp+4h] [bp-44h] BYREF
  _BYTE v14[16]; // [sp+14h] [bp-34h] BYREF
  int v15; // [sp+24h] [bp-24h] BYREF
  unsigned int v16; // [sp+28h] [bp-20h]
  char v17; // [sp+2Ch] [bp-1Ch]

  v15 = -1;
  v17 = 0;
  result = sub_608A9F2C(a1[1], a2, (int)&v15);
  if ( v17 )
  {
    result ^= 1u;
    if ( !result )
    {
      v6 = (const void *)(*(int (__fastcall **)(int *, int))(*a1 + 16))(a1, v15);
      v7 = sub_608B4894(v14, v6, 0);
      result = sub_608B49F4(v7);
      if ( !result )
      {
        v8 = sub_608B4850(v6);
        result = (*(int (__fastcall **)(int, size_t))(*(_DWORD *)a3 + 8))(a3, v8 + 4 * v16 + 4);
        v9 = result;
        if ( result )
        {
          qmemcpy((void *)result, v6, v8);
          qmemcpy((void *)(v9 + v8), "FWAT", 4);
          v10 = sub_608B4894(v13, v9, 1);
          sub_608B4A50(v10);
          if ( v16 )
          {
            for ( i = 0; i < v16; ++i )
            {
              v12 = sub_608B4A8C(v14, i);
              sub_608B4B54(v13, i, v12);
            }
          }
          return (*(int (__fastcall **)(int *, int, int))(*a1 + 8))(a1, v15, v9);
        }
      }
    }
  }
  return result;
}
