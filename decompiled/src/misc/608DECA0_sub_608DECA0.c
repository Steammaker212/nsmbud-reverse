/* sub_608DECA0
 * address: 0x608DECA0   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608DECA0(int result, int (__fastcall *a2)(_DWORD, _DWORD))
{
  int v3; // r5
  int v4; // r6
  int v5; // r11
  int v6; // r9
  int v7; // r8
  int v8; // r7
  int v9; // r10
  int v10; // r6
  int v11; // r1

  if ( *(int *)result >= 2 )
  {
    v3 = FIELD_U32(result, 8);
    v4 = *(_DWORD *)result - 1;
    v5 = 0;
    v6 = v3 - 4;
    do
    {
      v7 = v5;
      v8 = v5;
      while ( v8 < v4 )
      {
        result = a2(*(_DWORD *)(v3 + 4 * v8), *(_DWORD *)(v3 + 4 * v8 + 4));
        ++v8;
        if ( result >= 1 )
        {
          result = *(_DWORD *)(v3 + 4 * v8);
          v7 = v8 - 1;
          *(_DWORD *)(v3 + 4 * v8) = *(_DWORD *)(v6 + 4 * v8);
          *(_DWORD *)(v6 + 4 * v8) = result;
        }
      }
      v9 = v7;
      v10 = v7;
      if ( v5 == v7 )
        break;
      while ( v10 > v5 )
      {
        result = a2(*(_DWORD *)(v3 + 4 * v10), *(_DWORD *)(v6 + 4 * v10));
        --v10;
        if ( result < 0 )
        {
          v9 = v10 + 1;
          result = v3 + 4 * v10;
          v11 = *(_DWORD *)result;
          *(_DWORD *)result = FIELD_U32(result, 4);
          FIELD_U32(result, 4) = v11;
        }
      }
      v4 = v7;
      v5 = v9;
    }
    while ( v9 != v7 );
  }
  return result;
}
