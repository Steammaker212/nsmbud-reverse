/* sub_60850F30
 * address: 0x60850F30   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60850F30(int result, int a2)
{
  int v2; // r12
  int v3; // r2
  int v4; // r3
  int v5; // lr
  int v6; // r4
  int v7; // r1
  int v8; // r2
  int v9; // r1

  v2 = FIELD_U16(result, 32);
  v3 = 0;
  v4 = -8;
  while ( v3 < v2 )
  {
    v5 = FIELD_U32(result, 28);
    v4 += 8;
    v6 = *(_DWORD *)(v5 + 8 * v3++);
    if ( v6 == a2 )
    {
      if ( v3 < v2 )
      {
        v7 = v5 + 8 * v2;
        v8 = *(_DWORD *)(v7 - 8);
        v9 = *(_DWORD *)(v7 - 4);
        *(_DWORD *)(v5 + v4) = v8;
        *(_DWORD *)(v5 + v4 + 4) = v9;
        LOWORD(v2) = FIELD_U16(result, 32);
      }
      FIELD_U16(result, 32) = v2 - 1;
      return result;
    }
  }
  return result;
}
