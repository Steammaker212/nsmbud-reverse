/* sub_6086F65C
 * address: 0x6086F65C   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6086F65C(int result)
{
  int v1; // r12
  int v2; // r2
  _DWORD *v3; // r2
  int v4; // r12
  int v5; // r3
  int v6; // r2
  int v7; // r4
  int v8; // r4
  int v9; // r4
  int v10; // r4

  v1 = FIELD_U8(result, 168);
  if ( FIELD_U8(result, 168) )
  {
    v2 = 0;
    if ( (v1 & 1) != 0 )
    {
      **(_DWORD **)(result + 48) = 0;
      v3 = *(_DWORD **)(result + 152);
      *v3 = -1;
      v3[1] = -1;
      v2 = 1;
    }
    if ( v1 != 1 )
    {
      v4 = -v1;
      v5 = 8 * v2 + 8;
      v6 = -v2;
      do
      {
        *(_DWORD *)(FIELD_U32(result, 48) - 4 * v6) = 0;
        v7 = FIELD_U32(result, 152) + v5;
        *(_DWORD *)(v7 - 8) = -1;
        *(_DWORD *)(v7 - 4) = -1;
        v8 = FIELD_U32(result, 48) - 4 * v6;
        v6 -= 2;
        FIELD_U32(v8, 4) = 0;
        v9 = FIELD_U32(result, 152);
        *(_DWORD *)(v9 + v5) = -1;
        v10 = v9 + v5;
        v5 += 16;
        FIELD_U32(v10, 4) = -1;
      }
      while ( v4 != v6 );
    }
  }
  return result;
}
