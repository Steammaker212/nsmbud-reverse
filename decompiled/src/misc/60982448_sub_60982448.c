/* sub_60982448
 * address: 0x60982448   size: 524   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60982448(int a1, int *a2)
{
  int *v4; // r4
  int *v5; // r8
  int *v6; // r10
  int v7; // r0
  int v8; // lr
  int v9; // r1
  int v10; // r2
  int i; // r3
  int v12; // r2
  int v13; // r1
  int v14; // r0
  int v15; // r3
  _BYTE *v16; // r5
  _BYTE *v17; // r4
  int v18; // r0
  int v19; // r1
  int v20; // r2
  int j; // r3
  int v22; // r2
  int v23; // r1
  int v24; // r0
  int v25; // r3
  _BYTE *v26; // r5
  _BYTE *v27; // r7
  int *v28; // r9
  int v29; // t1
  int v30; // r0
  int *v31; // r1
  _DWORD *v32; // r2
  int v33; // r3

  sub_609847CC();
  *(_DWORD *)a1 = off_60C5F7D8;
  agl_TextureData_ref(a1 + 200);
  FIELD_U32(a1, 472) = 0;
  v4 = (int *)(a1 + 472);
  FIELD_U8(a1, 496) = 0;
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 484) = 0;
  FIELD_U32(a1, 476) = 0;
  FIELD_U32(a1, 488) = 0;
  v5 = (int *)(a1 + 488);
  FIELD_U32(a1, 480) = 0;
  v6 = (int *)(a1 + 480);
  if ( a2[119] )
  {
    v7 = sub_609908C0();
    sub_60982658(a1, v7, a2[118]);
    if ( (int *)a1 != a2 )
    {
      if ( a2[118] < FIELD_U32(a1, 472) )
        v4 = a2 + 118;
      v8 = *v4;
      if ( *v4 < 1 )
        goto LABEL_12;
      v9 = FIELD_U32(a1, 476);
      v10 = a2[119];
      for ( i = 0; (v8 & 3) != i; ++i )
        *(_BYTE *)(v9 + i) = *(_BYTE *)(v10 + i);
      if ( (unsigned int)(v8 - 1) >= 3 )
      {
        v12 = v10 + i;
        v13 = v9 + i;
        v14 = i - v8;
        v15 = 0;
        do
        {
          v16 = (_BYTE *)(v12 + v15);
          *(_BYTE *)(v13 + v15) = *(_BYTE *)(v12 + v15);
          v17 = (_BYTE *)(v13 + v15);
          v15 += 4;
          v17[1] = v16[1];
          v17[2] = v16[2];
          v17[3] = v16[3];
        }
        while ( v14 + v15 );
      }
      if ( (int *)a1 != a2 )
      {
LABEL_12:
        if ( a2[120] < FIELD_U32(a1, 480) )
          v6 = a2 + 120;
        v18 = *v6;
        if ( *v6 < 1 )
          goto LABEL_21;
        v19 = FIELD_U32(a1, 484);
        v20 = a2[121];
        for ( j = 0; (v18 & 3) != j; ++j )
          *(_BYTE *)(v19 + j) = *(_BYTE *)(v20 + j);
        if ( (unsigned int)(v18 - 1) >= 3 )
        {
          v22 = v20 + j;
          v23 = v19 + j;
          v24 = j - v18;
          v25 = 0;
          do
          {
            v26 = (_BYTE *)(v22 + v25);
            *(_BYTE *)(v23 + v25) = *(_BYTE *)(v22 + v25);
            v27 = (_BYTE *)(v23 + v25);
            v25 += 4;
            v27[1] = v26[1];
            v27[2] = v26[2];
            v27[3] = v26[3];
          }
          while ( v24 + v25 );
        }
        if ( (int *)a1 != a2 )
        {
LABEL_21:
          v29 = a2[122];
          v28 = a2 + 122;
          if ( v29 < FIELD_U32(a1, 488) )
            v5 = v28;
          v30 = *v5;
          if ( *v5 >= 1 )
          {
            v31 = (int *)(v28[1] + 4);
            v32 = (_DWORD *)(FIELD_U32(a1, 492) + 4);
            do
            {
              --v30;
              *(v32 - 1) = *(v31 - 1);
              v33 = *v31;
              v31 += 2;
              *v32 = v33;
              v32 += 2;
            }
            while ( v30 );
          }
        }
      }
    }
  }
  return a1;
}
