/* sub_60187078
 * address: 0x60187078   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60187078(int a1, int a2)
{
  int v3; // r0
  int i; // r2
  signed int v5; // r3
  unsigned int v6; // r6
  unsigned int v7; // r5
  _DWORD *v8; // r7
  _BYTE *v9; // r4
  int v10; // r5
  int result; // r0

  v3 = 0;
  for ( i = 0; i != 9; ++i )
  {
    if ( ((0x5Fu >> i) & 1) != 0 )
    {
      v5 = dword_60AFA0E0[i];
      v6 = 0;
      do
      {
        v7 = 0;
        if ( v6 < 5 )
          v7 = v6;
        ++v6;
        v8 = (_DWORD *)(a1 + 120 * i + 24 * v7);
        *(_BYTE *)(a2 + v3) = *v8;
        v9 = (_BYTE *)(a2 + v3);
        v3 += 5;
        v9[1] = v8[1];
        v9[2] = v8[2];
        v9[3] = v8[3];
        v9[4] = v8[5];
      }
      while ( (int)v6 < v5 );
    }
  }
  v10 = a2 + v3;
  qmemcpy((void *)(a2 + v3), (const void *)(a1 + 1080), 0x12u);
  result = FIELD_U8(a1, 1098);
  FIELD_U8(v10, 18) = result;
  return result;
}
