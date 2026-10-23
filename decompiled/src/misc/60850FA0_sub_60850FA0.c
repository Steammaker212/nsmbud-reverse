/* sub_60850FA0
 * address: 0x60850FA0   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60850FA0(int a1)
{
  int v1; // r5
  int result; // r0
  bool v4; // zf
  int v5; // r6
  int v6; // r2
  int v7; // r1

  result = FIELD_U8(a1, 20);
  v4 = result == 0;
  if ( result )
  {
    v1 = FIELD_U16(a1, 32);
    v4 = v1 == 0;
  }
  if ( !v4 )
  {
    v5 = 0;
    do
    {
      result = FIELD_U32(a1, 28);
      v6 = *(_DWORD *)(result + 8 * v5 + 4);
      v7 = FIELD_U8(v6, 29);
      if ( v7 == 2 )
      {
        result = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 80))(a1, *(_DWORD *)(result + 8 * v5));
      }
      else if ( v7 == 1 )
      {
        result = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 76))(a1, *(_DWORD *)(result + 8 * v5));
      }
      else if ( !FIELD_U8(v6, 29) )
      {
        result = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 72))(a1, *(_DWORD *)(result + 8 * v5));
      }
      ++v5;
    }
    while ( v1 != v5 );
  }
  return result;
}
