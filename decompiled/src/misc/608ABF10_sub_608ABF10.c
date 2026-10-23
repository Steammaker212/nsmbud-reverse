/* sub_608ABF10
 * address: 0x608ABF10   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608ABF10(int *a1, unsigned int a2, unsigned int a3)
{
  int result; // r0
  bool v7; // zf
  unsigned int v8; // r2
  int v9; // r3
  unsigned int v10; // r7
  int v11; // r10
  int v12; // r8
  int v13; // r9
  unsigned int i; // r6
  unsigned int v15; // r0
  _BYTE v16[16]; // [sp+0h] [bp-40h] BYREF
  int v17; // [sp+10h] [bp-30h] BYREF
  unsigned int v18; // [sp+14h] [bp-2Ch]
  char v19; // [sp+18h] [bp-28h]

  result = a1[134];
  v7 = result == 0;
  if ( result )
    v7 = *(_DWORD *)result == 0;
  if ( !v7 )
  {
    v8 = 0;
    do
    {
      v9 = result + 4 * v8;
      v10 = FIELD_U32(v9, 4);
      if ( v10 >= a2 && v10 <= a3 )
      {
        FIELD_U32(v9, 4) = 0;
        result = a1[134];
      }
      ++v8;
    }
    while ( v8 < *(_DWORD *)result );
  }
  v11 = a1[4];
  if ( v11 )
  {
    result = sub_608A99F4(a1[4]);
    v12 = result;
    if ( result )
    {
      v13 = 0;
      do
      {
        v17 = -1;
        v19 = 0;
        result = sub_608A9F2C(v11, v13 | 0x5000000, (int)&v17);
        if ( v19 )
        {
          result ^= 1u;
          if ( !result )
          {
            result = (*(int (__fastcall **)(int *, int))(*a1 + 16))(a1, v17);
            if ( result )
            {
              sub_608B4894(v16, result, 1);
              result = v18;
              if ( v18 )
              {
                for ( i = 0; i < v18; ++i )
                {
                  v15 = sub_608B4A8C(v16, i);
                  if ( v15 <= a3 && v15 && v15 >= a2 )
                    sub_608B4B54(v16, i, 0);
                  result = v18;
                }
              }
            }
          }
        }
        ++v13;
      }
      while ( v13 != v12 );
    }
  }
  return result;
}
