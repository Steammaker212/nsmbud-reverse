/* sub_6041CA50
 * address: 0x6041CA50   size: 444   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6041CA50(_DWORD *a1)
{
  _DWORD *v2; // r9
  int v3; // r10
  int result; // r0
  unsigned int v5; // r7
  _DWORD *v6; // r6
  _DWORD *v7; // r6
  int v8; // r0
  int v9; // r5
  _DWORD *v10; // r1
  _DWORD *v11; // r2
  int v12; // r3
  int v13; // r11
  int v14; // r8
  unsigned int i; // r7
  _DWORD *v16; // r5
  int v17; // r0
  unsigned int v18; // r1
  _DWORD *v19; // r2
  _DWORD *v20; // r2
  _DWORD *v21; // r1
  _DWORD *v22; // r3
  int v23; // r3

  v2 = a1 + 35;
  v3 = dword_60C9BAF4;
  result = 0;
  do
  {
    do
    {
      v5 = result;
      result = 3;
      v6 = &a1[2 * v5];
      v6[352] = -1;
      v7 = v6 + 352;
      v7[1] = -1;
    }
    while ( v5 == 2 );
    v8 = sub_6083DBF4(v2, v5, 0);
    v9 = v8;
    if ( v8 )
    {
      *(_QWORD *)v7 = (unsigned int)sub_60916740(
                                      dword_60CCFC8C,
                                      FIELD_U32(v8, 8),
                                      FIELD_U32(v8, 16),
                                      "MiiCharModelTexture");
      v10 = (_DWORD *)a1[190];
      if ( a1[189] > v5 )
        v10 += 40 * v5;
      v11 = *(_DWORD **)(v3 + 820);
      if ( FIELD_U32(v3, 816) > v5 )
        v11 += v5;
      v10[24] = *v11;
      v12 = v7[1];
      v10[36] = *v7;
      v10[37] = v12;
      FIELD_U32(v9, 64) = v10;
      sub_6083DBFC(v2, v5, v7, 0);
    }
    result = v5 + 1;
  }
  while ( v5 != 4 );
  v13 = a1[350];
  if ( v13 >= 1 )
  {
    v14 = 0;
    for ( i = 0; i != v13; ++i )
    {
      v16 = (_DWORD *)sub_6083DBF4(v2, 2, i);
      v17 = sub_60916740(dword_60CCFC8C, v16[2], v16[4], "MiiExpressionTexture");
      v18 = 0;
      if ( i < 0x13 )
        v18 = i;
      v19 = &a1[2 * v18];
      v19[362] = v17;
      v20 = v19 + 362;
      v20[1] = 0;
      v21 = (_DWORD *)a1[192];
      v22 = *(_DWORD **)(v3 + 820);
      if ( a1[191] > i )
        v21 = (_DWORD *)((char *)v21 + v14);
      if ( FIELD_U32(v3, 816) > 2u )
        v22 += 2;
      v21[24] = *v22;
      v23 = v20[1];
      v21[36] = *v20;
      v21[37] = v23;
      v16[16] = v21;
      result = sub_6083DBFC(v2, 2, v20, i);
      v14 += 160;
    }
  }
  return result;
}
