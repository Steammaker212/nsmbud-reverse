/* sub_60858C68
 * address: 0x60858C68   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60858C68(_DWORD *a1, int a2, int a3)
{
  int v6; // r9
  int v7; // r6
  int result; // r0
  int v9; // r1
  int v10; // r2
  _DWORD *v11; // r6
  _DWORD *v12; // r5

  v6 = (*(int (__fastcall **)(_DWORD *))(*a1 + 40))(a1);
  if ( v6 )
  {
    v7 = 0;
    do
    {
      result = (*(int (__fastcall **)(_DWORD *, int))(*a1 + 44))(a1, v7);
      if ( result )
      {
        v9 = FIELD_U32(result, 28);
        v10 = 0;
        while ( *(unsigned __int8 *)(v9 + v10) == *(unsigned __int8 *)(a2 + v10) )
        {
          if ( *(_BYTE *)(v9 + v10) )
          {
            if ( ++v10 < 28 )
              continue;
          }
          return result;
        }
      }
      ++v7;
    }
    while ( v7 < v6 );
  }
  if ( a3 != 1 )
    return 0;
  v11 = a1 + 4;
  v12 = (_DWORD *)a1[5];
  if ( v12 == v11 )
    return 0;
  while ( 1 )
  {
    result = (*(int (__fastcall **)(_DWORD *, int))(*(v12 - 1) + 100))(v12 - 1, a2);
    if ( result )
      break;
    v12 = (_DWORD *)v12[1];
    if ( v12 == v11 )
      return 0;
  }
  return result;
}
