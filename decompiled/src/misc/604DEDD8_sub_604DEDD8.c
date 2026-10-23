/* sub_604DEDD8
 * address: 0x604DEDD8   size: 468   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_604DEDD8(_DWORD *result)
{
  int v1; // r6
  int v2; // r2
  _DWORD *v3; // r10
  unsigned int v4; // r1
  int v5; // lr
  int v6; // r12
  unsigned int v7; // r8
  int v8; // r7
  _DWORD *v9; // r9
  int *v10; // r9
  int v11; // t1
  int v12; // r7
  char v13; // r4
  int v14; // r7
  unsigned int v15; // r7
  int v16; // r4
  _DWORD *v17; // r7

  v1 = 0;
  v2 = dword_60C99DEC;
  *(_BYTE *)(result[1520] + 64) &= ~1u;
  *(_BYTE *)(result[1521] + 64) &= ~1u;
  *(_BYTE *)(result[1522] + 64) &= ~1u;
  *(_BYTE *)(result[1523] + 64) &= ~1u;
  v3 = result + 1527;
  v4 = 0;
  do
  {
    v5 = v2 + v1;
    if ( *(_BYTE *)(v2 + v1 + 36) )
    {
      v6 = FIELD_U32(v5, 52);
      v7 = 1;
      if ( (unsigned int)v6 <= 3 )
        v7 = dword_60AF2914[v6];
      v8 = 0;
      if ( (unsigned int)v6 < 7 )
        v8 = FIELD_U32(v5, 52);
      v9 = &result[v8];
      v11 = v9[1520];
      v10 = v9 + 1520;
      FIELD_U8(v11, 64) |= 1u;
      if ( FIELD_U32(v5, 60) >> 25 > 2u )
      {
        if ( v6 >= 0 )
        {
          v14 = result[dword_60AF2904[v6] + 1527];
          FIELD_U8(v14, 64) |= 1u;
        }
        if ( v7 >= 8 )
          v7 = 0;
        v12 = result[v7 + 1527];
        v13 = FIELD_U8(v12, 64) & 0xFE;
      }
      else
      {
        if ( v7 >= 8 )
          v7 = 0;
        *(_BYTE *)(v3[dword_60AF2904[v6]] + 64) &= ~1u;
        v12 = v3[v7];
        v13 = FIELD_U8(v12, 64) | 1;
      }
      FIELD_U8(v12, 64) = v13;
      v15 = 0;
      v16 = *v10;
      if ( v4 < 4 )
        v15 = v4;
      ++v4;
      v17 = &result[3 * v15];
      FIELD_U32(v16, 32) = v17[1537];
      FIELD_U32(v16, 28) = v17[1536];
      FIELD_U32(v16, 24) = v17[1535];
      FIELD_U8(v16, 64) |= 0x10u;
    }
    v1 += 72;
  }
  while ( v1 != 288 );
  return result;
}
