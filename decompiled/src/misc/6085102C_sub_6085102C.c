/* sub_6085102C
 * address: 0x6085102C   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6085102C(int a1, int a2)
{
  int result; // r0
  bool v5; // zf
  int v6; // r1
  int v7; // r2
  int v8; // r6
  int v9; // r7

  result = FIELD_U8(a1, 20);
  v5 = result == 0;
  if ( result )
  {
    result = FIELD_U16(a1, 32);
    v5 = result == 0;
  }
  if ( !v5 )
  {
    v6 = FIELD_U32(a1, 28);
    v7 = 0;
    while ( *(_DWORD *)(v6 + 8 * v7) != a2 )
    {
      if ( ++v7 >= result )
        return result;
    }
    (*(void (__fastcall **)(int, int, _DWORD))(*(_DWORD *)a1 + 72))(a1, a2, *(_DWORD *)(v6 + 8 * v7 + 4));
    result = (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 40))(a2);
    v8 = result;
    if ( result )
    {
      v9 = 0;
      do
      {
        result = (*(int (__fastcall **)(int, int))(*(_DWORD *)a2 + 44))(a2, v9);
        if ( result )
          result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 28))(a1);
        ++v9;
      }
      while ( v8 != v9 );
    }
  }
  return result;
}
