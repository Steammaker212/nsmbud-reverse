/* sub_60887828
 * address: 0x60887828   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60887828(int result, void (__fastcall *a2)(_DWORD *, int, int), int a3)
{
  int v5; // r6
  int i; // r7
  _DWORD *v7; // r5
  int v8; // r1
  int v9; // r3
  _DWORD v10[10]; // [sp+0h] [bp-28h] BYREF

  v5 = result;
  if ( a2 )
  {
    result = FIELD_U32(result, 84);
    if ( result >= 1 )
    {
      for ( i = 0; i < result; ++i )
      {
        v7 = *(_DWORD **)(*(_DWORD *)(FIELD_U32(v5, 88) + 40) + 8 * i);
        v8 = v7[34];
        v9 = v7[37];
        v10[0] = v7[36];
        v10[1] = v9;
        a2(v10, v8, a3);
        v7[36] = -1;
        v7[37] = -1;
        result = FIELD_U32(v5, 84);
      }
    }
  }
  return result;
}
