/* sub_60555DD8
 * address: 0x60555DD8   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60555DD8(int a1)
{
  int v1; // r3
  int result; // r0
  int v3; // r1
  int v4; // r4
  int v5; // r6
  bool v6; // zf
  int v7; // r5
  int v8; // r4

  v1 = 0;
  result = a1 + 5744;
  v3 = 0;
  do
  {
    v4 = result + 4 * v1;
    v5 = *(_DWORD *)(v4 - 72);
    if ( v5 )
    {
      v6 = FIELD_U8(v5, 2689) == 0;
      if ( FIELD_U8(v5, 2689) )
        v6 = *(_BYTE *)(result + v1 - 44) == 0;
      if ( !v6 )
      {
        v7 = *(_DWORD *)(v4 - 36);
        FIELD_U32(v5, 416) = *(_DWORD *)(result + v3 - 8);
        if ( v7 != 1 )
          v7 = 2;
        FIELD_U32(v5, 420) = *(_DWORD *)(result + v3 - 4);
        FIELD_U32(v5, 424) = *(_DWORD *)(result + v3);
        v8 = *(_DWORD *)(v4 - 72);
        if ( !FIELD_U8(v8, 2690) && !FIELD_U8(v8, 2691) )
        {
          FIELD_U8(v8, 2699) = 1;
          FIELD_U8(v8, 2691) = 1;
          FIELD_U32(v8, 500) = 2;
          FIELD_U32(v8, 2532) = v7;
          FIELD_U32(v8, 2560) = 1065353216;
          FIELD_U8(v8, 2693) = 1;
        }
      }
    }
    ++v1;
    v3 += 12;
  }
  while ( v1 != 7 );
  return result;
}
