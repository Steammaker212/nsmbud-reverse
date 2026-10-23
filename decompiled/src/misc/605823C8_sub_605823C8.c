/* sub_605823C8
 * address: 0x605823C8   size: 364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_605823C8(int a1)
{
  _DWORD *result; // r0
  _DWORD *v3; // r0
  _DWORD *v4; // r1
  int i; // r3
  _DWORD *v6; // r4
  int v7; // r3
  _DWORD *v8; // r1
  _DWORD *v9; // r2
  int v10; // r2
  _DWORD *v11; // r3

  result = (_DWORD *)dword_60CAF15C;
  if ( !dword_60CAF15C )
  {
    v3 = (_DWORD *)operator_new_8DE2C8(0x8418u, a1, 4);
    result = sead__IDisposer__ctor(v3, a1, 3u);
    *result = off_60C05B40;
    v4 = result + 1557;
    dword_60CAF158 = (int)result;
    result[8452] = 0;
    result[8453] = 0;
    for ( i = 0; i != 3584; i += 28 )
    {
      v6 = &v4[i];
      *(v6 - 14) = 0;
      *(v6 - 7) = 0;
      v4[i] = 0;
      v6[7] = 0;
    }
    v7 = 256;
    v8 = result + 6922;
    v9 = result + 5131;
    do
    {
      *((_BYTE *)v9 - 4) = 0;
      *(v9 - 2) = 0;
      *(v9 - 3) = 0;
      *(v9 - 4) = 0;
      *(v9 - 5) = 0;
      *(v9 - 6) = 0;
      *(v9 - 7) = 0;
      *((_BYTE *)v8 - 2) = 0;
      *((_WORD *)v8 - 2) = 0;
      *(v8 - 2) = 0;
      *(v8 - 3) = 0;
      *(v8 - 4) = 0;
      *(v8 - 5) = 0;
      *(v8 - 6) = 0;
      *((_BYTE *)v9 + 24) = 0;
      *v9 = 0;
      v9[1] = 0;
      v9[2] = 0;
      v9[3] = 0;
      v9[4] = 0;
      v9[5] = 0;
      *((_BYTE *)v8 + 22) = 0;
      *((_WORD *)v8 + 10) = 0;
      *v8 = 0;
      v8[1] = 0;
      v8[2] = 0;
      v8[3] = 0;
      v8[4] = 0;
      v7 -= 2;
      v8 += 12;
      v9 += 14;
    }
    while ( v7 );
    v10 = 0;
    do
    {
      v11 = &result[v10];
      v10 += 12;
      v11[7] = 0;
      v11[8] = 0;
      *((_BYTE *)v11 + 36) = 0;
      v11[13] = 0;
      v11[14] = 0;
      *((_BYTE *)v11 + 60) = 0;
    }
    while ( v10 != 1536 );
    dword_60CAF15C = (int)result;
  }
  return result;
}
