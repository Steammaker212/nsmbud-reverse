/* sub_6086D854
 * address: 0x6086D854   size: 528   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6086D854(int a1, int a2, double a3)
{
  int result; // r0
  bool v5; // zf
  int v6; // r6
  int v7; // r10
  int v8; // r4
  int v9; // r5
  int v10; // r1
  int v11; // r5
  int v12; // t1
  int v13; // r0
  int v14; // r8
  int v15; // r1
  int v16; // r9
  int v17; // r1
  int v18; // r0
  int v19; // [sp+24h] [bp-B4h]

  result = FIELD_U8(a1, 13);
  v5 = result == 0;
  if ( result )
  {
    result = FIELD_U16(a1, 24);
    v5 = result == 0;
  }
  if ( !v5 )
  {
    v6 = -1;
    v7 = 0;
    v8 = 0;
    v19 = *(_DWORD *)(FIELD_U32(a1, 28) + 16);
    do
    {
      v9 = FIELD_U32(a1, 32);
      v12 = *(_DWORD *)(v9 + v7);
      v11 = v9 + v7;
      v10 = v12;
      if ( FIELD_U8(v12, 102) && !FIELD_U8(a1, 68) || !*(_BYTE *)(FIELD_U32(a1, 32) + v7 + 9) )
        goto LABEL_18;
      v13 = FIELD_U32(a1, 28);
      v14 = FIELD_U16(v10, 96);
      v15 = FIELD_U32(v13, 8) + 96 * v14;
      if ( (FIELD_U8(v15, 54) & 7) != 0 )
      {
        v16 = FIELD_U16(v15, 48);
        if ( v16 == 0xFFFF )
        {
          if ( v14 != v6 )
          {
            sub_6087DA68(v13);
            v6 = v14;
          }
          v17 = a2;
          v18 = v11;
          goto LABEL_17;
        }
        if ( v16 != v6 )
        {
          sub_6087DA68(v13);
          v6 = v16;
        }
        a3 = *(double *)(v19 + (v14 << 6) + 32);
      }
      v17 = a2;
      v18 = v11;
LABEL_17:
      sub_60875E64(v18, v17, *(float *)&a3, *((float *)&a3 + 1));
LABEL_18:
      result = FIELD_U16(a1, 24);
      ++v8;
      v7 += 56;
    }
    while ( v8 < result );
  }
  return result;
}
