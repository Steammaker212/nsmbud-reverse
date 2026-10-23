/* sub_608D514C
 * address: 0x608D514C   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D514C(int result, unsigned __int16 *a2, int a3, int a4, int a5, _WORD *a6)
{
  int v6; // r12
  unsigned int v8; // r6
  unsigned __int8 *v9; // r11
  unsigned int v10; // r10
  char v11; // r9
  unsigned int v12; // r5
  int v13; // kr00_4
  signed __int16 v14; // r5
  bool v15; // zf
  signed __int16 v16; // r3
  __int16 v17; // r4
  __int16 v18; // r7
  unsigned int v19; // r6
  int v20; // r5
  int v21; // r3
  int v22; // r3

  v6 = a5;
  if ( a5 )
  {
    v8 = *a2;
    v9 = (unsigned __int8 *)(a4 + 8 * (result / 14));
    result %= 14;
    v10 = v8 >> 4;
    v11 = v8 & 0xF;
    do
    {
      if ( !result )
      {
        v12 = *v9;
        v11 = v12 & 0xF;
        v10 = v12 >> 4;
        *a2 = v12;
      }
      v13 = result;
      v14 = a2[2];
      v15 = (result++ & 1) == 0;
      --v6;
      v16 = a2[1];
      v17 = *(_WORD *)(a3 + 4 * v10);
      v18 = *(_WORD *)(a3 + ((4 * v10) | 2));
      v19 = v9[v13 / 2 + 1];
      a2[2] = v16;
      v20 = v14 * v18;
      if ( v15 )
        v19 >>= 4;
      v21 = ((__int16)((_WORD)v19 << 12) >> 1) * (__int16)((unsigned int)(0x10000 << v11) >> 16) + v16 * v17 + v20;
      LOWORD(v20) = 0x8000;
      v22 = (v21 >> 10) + 1;
      if ( v22 >> 1 > -32768 )
        v20 = v22 >> 1;
      if ( v22 >> 1 >= 0x8000 )
        LOWORD(v20) = 0x7FFF;
      a2[1] = v20;
      *a6++ = v20;
      if ( result == 14 )
      {
        v9 += 8;
        result = 0;
      }
    }
    while ( v6 );
  }
  return result;
}
