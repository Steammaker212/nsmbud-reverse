/* sub_60381BAC
 * address: 0x60381BAC   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60381BAC(unsigned int *a1, int a2, unsigned int a3)
{
  unsigned int v5; // r6
  unsigned int *v6; // r2
  unsigned int v7; // r4
  int *v8; // r0
  int **v9; // r12
  unsigned int v10; // r7
  unsigned int v11; // r4
  unsigned int v12; // r6
  int *v13; // r0
  int v14; // r7
  int v15; // r5
  unsigned int v16; // r2
  unsigned int v17; // r5
  int v18; // r3
  int v19; // r6
  int v20; // r5
  int v21; // r7
  int *v22; // r6
  int v23; // r5
  int v24; // r4
  int v25; // r7

  v5 = a3;
  v6 = a1 + 1575;
  v7 = a1[1575];
  v9 = (int **)(a1 + 1576);
  v8 = (int *)a1[1576];
  v10 = v7 - 1;
  if ( v7 < v7 - 1 )
    v10 = v7;
  if ( v7 < a3 )
    v5 = v7;
  if ( v10 )
  {
    v11 = v5 + 1;
    v12 = v10 + 1;
    v13 = v8 - 1;
    v14 = 0;
    do
    {
      if ( v11 != v12 )
      {
        v15 = v13[v12];
        if ( FIELD_U8(v15, 128) )
          FIELD_U32(v15, 116) = v14++;
      }
      --v12;
    }
    while ( v12 != 1 );
    v7 = *v6;
    v8 = *v9;
  }
  v16 = a3;
  if ( v7 < a3 )
    v16 = v7;
  if ( v16 )
  {
    v17 = a3;
    if ( v7 < a3 )
      v17 = v7;
    if ( (v16 & 1) != 0 )
    {
      v19 = 1;
      v18 = *(unsigned __int8 *)(*v8 + 128);
      if ( v17 != 1 )
      {
LABEL_21:
        v20 = ~a3;
        if ( ~v7 > ~a3 )
          v20 = ~v7;
        v21 = ~v19 - v20;
        v22 = &v8[v19 + 1];
        do
        {
          v23 = *(v22 - 1);
          v24 = *v22;
          v22 += 2;
          v21 -= 2;
          v18 += FIELD_U8(v24, 128) + FIELD_U8(v23, 128);
        }
        while ( v21 );
        goto LABEL_25;
      }
    }
    else
    {
      v18 = 0;
      v19 = 0;
      if ( v17 != 1 )
        goto LABEL_21;
    }
    do
    {
LABEL_25:
      v25 = *v8++;
      if ( FIELD_U8(v25, 128) )
        FIELD_U32(v25, 120) = v18--;
      --v16;
    }
    while ( v16 );
  }
  sub_60381D18(a1, a2, a3);
  sub_60381F48(a1, a3);
  return (*(int (__fastcall **)(unsigned int *, int *))(*a1 + 192))(a1, &dword_60C969FC);
}
