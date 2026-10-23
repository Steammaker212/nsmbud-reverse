/* sub_6085F4D8
 * address: 0x6085F4D8   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6085F4D8(int result, int a2)
{
  _BYTE *v2; // lr
  int i; // r1
  int v4; // r6
  _BYTE *v5; // r4
  int v6; // r5
  int v7; // r3
  _BYTE *v8; // r6
  int v9; // r4
  int v10; // r5
  int v11; // r6
  int v12; // r7
  bool v13; // zf
  bool v14; // nf
  _DWORD v15[2]; // [sp+0h] [bp-28h]
  char v16; // [sp+8h] [bp-20h]

  v2 = (_BYTE *)(a2 + 8);
  for ( i = 0; i != 24; ++i )
  {
    v16 = 0;
    v15[1] = 0;
    v15[0] = 0;
    v4 = 0;
    v5 = v2 + 1;
    LOBYTE(v6) = *v2;
    while ( 1 )
    {
      v7 = v4;
      *((_BYTE *)v15 + v4) = v6;
      v6 = (unsigned __int8)v5[v4];
      if ( !v5[v4] )
        break;
      ++v4;
      if ( v6 == 95 )
      {
        v8 = &v2[v4];
        goto LABEL_7;
      }
    }
    v8 = &v2[v4];
LABEL_7:
    v2 = v8 + 1;
    v9 = 0;
    if ( v7 >= 0 )
    {
      v10 = 1;
      do
      {
        v11 = *((unsigned __int8 *)v15 + v7);
        v12 = -48;
        if ( (unsigned __int8)(v11 - 65) < 6u )
          v12 = -55;
        v13 = v7 == 0;
        v14 = v7 < 0;
        v9 += (v12 + v11) * v10;
        v10 *= 16;
        --v7;
      }
      while ( !v14 && !v13 );
    }
    *(_DWORD *)(result + 4 * i) = v9;
  }
  return result;
}
