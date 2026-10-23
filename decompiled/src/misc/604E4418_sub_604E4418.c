/* sub_604E4418
 * address: 0x604E4418   size: 668   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604E4418(int result)
{
  int v1; // r3
  int v2; // r12
  int v3; // lr
  char v4; // r8
  int v5; // r1
  int *v6; // r4
  int v7; // r7
  int v8; // r2
  _DWORD *v9; // r6
  int v10; // r9
  int v11; // r5
  int v12; // r6
  int v13; // r7
  int v14; // r4
  int v15; // r3
  int *v16; // r4
  unsigned int v17; // r5
  _DWORD *v18; // r7
  int v19; // r9
  int v20; // r6
  int v21; // r7
  int v22; // r3
  int v23; // r3
  int v24; // r3
  int *v25; // r4
  unsigned int v26; // r5
  _DWORD *v27; // r7
  int v28; // r9
  int v29; // r6
  int v30; // r7
  int v31; // r3
  int v32; // r3
  int v33; // r3
  int *v34; // r4
  unsigned int v35; // r1
  _DWORD *v36; // r2
  int v37; // r1
  int v38; // r2
  int v39; // r3
  int v40; // r3

  v1 = FIELD_U32(result, 18468);
  v2 = FIELD_U32(v1, 48);
  v3 = FIELD_U32(v1, 52);
  v4 = FIELD_U8(v1, 65);
  v5 = FIELD_U32(result, 20512) - 1;
  if ( FIELD_U8(result, 7305) )
  {
    v6 = (int *)(result + 7256);
    v7 = FIELD_U32(result, 7256);
    v8 = 1;
    if ( v7 )
    {
      v9 = *(_DWORD **)(result + 4 * dword_60B031BC[4 * v5] + 18408);
      v10 = v9[23];
      v11 = v9[27];
      v12 = v9[31];
      FIELD_U8(v7, 65) = v4;
      v13 = *v6;
      if ( *v6 )
      {
        FIELD_U32(v13, 48) = v2;
        FIELD_U32(v13, 52) = v3;
        FIELD_U8(v13, 64) |= 0x10u;
        v14 = *v6;
        if ( v14 )
        {
          FIELD_U32(v14, 24) = v10;
          FIELD_U32(v14, 28) = v11;
          FIELD_U32(v14, 32) = v12;
          FIELD_U8(v14, 64) |= 0x10u;
        }
      }
    }
  }
  else
  {
    v8 = 0;
  }
  if ( FIELD_U8(result, 11005) )
  {
    v16 = (int *)(result + 10956);
    v15 = FIELD_U32(result, 10956);
    v17 = dword_60B031BC[4 * v5 + v8];
    if ( v17 >= 0x10 )
      v17 = 0;
    if ( v15 )
    {
      v18 = *(_DWORD **)(result + 4 * v17 + 18408);
      v19 = v18[23];
      v20 = v18[27];
      v21 = v18[31];
      FIELD_U8(v15, 65) = v4;
      v22 = *v16;
      if ( *v16 )
      {
        FIELD_U32(v22, 48) = v2;
        FIELD_U32(v22, 52) = v3;
        FIELD_U8(v22, 64) |= 0x10u;
        v23 = *v16;
        if ( *v16 )
        {
          FIELD_U32(v23, 24) = v19;
          FIELD_U32(v23, 28) = v20;
          FIELD_U32(v23, 32) = v21;
          FIELD_U8(v23, 64) |= 0x10u;
        }
      }
    }
    ++v8;
  }
  if ( FIELD_U8(result, 14705) )
  {
    v25 = (int *)(result + 14656);
    v24 = FIELD_U32(result, 14656);
    v26 = dword_60B031BC[4 * v5 + v8];
    if ( v26 >= 0x10 )
      v26 = 0;
    if ( v24 )
    {
      v27 = *(_DWORD **)(result + 4 * v26 + 18408);
      v28 = v27[23];
      v29 = v27[27];
      v30 = v27[31];
      FIELD_U8(v24, 65) = v4;
      v31 = *v25;
      if ( *v25 )
      {
        FIELD_U32(v31, 48) = v2;
        FIELD_U32(v31, 52) = v3;
        FIELD_U8(v31, 64) |= 0x10u;
        v32 = *v25;
        if ( *v25 )
        {
          FIELD_U32(v32, 24) = v28;
          FIELD_U32(v32, 28) = v29;
          FIELD_U32(v32, 32) = v30;
          FIELD_U8(v32, 64) |= 0x10u;
        }
      }
    }
    ++v8;
  }
  if ( FIELD_U8(result, 18405) )
  {
    v34 = (int *)(result + 18356);
    v33 = FIELD_U32(result, 18356);
    v35 = dword_60B031BC[4 * v5 + v8];
    if ( v35 >= 0x10 )
      v35 = 0;
    if ( v33 )
    {
      v36 = *(_DWORD **)(result + 4 * v35 + 18408);
      result = v36[23];
      v37 = v36[27];
      v38 = v36[31];
      FIELD_U8(v33, 65) = v4;
      v39 = *v34;
      if ( *v34 )
      {
        FIELD_U32(v39, 48) = v2;
        FIELD_U32(v39, 52) = v3;
        FIELD_U8(v39, 64) |= 0x10u;
        v40 = *v34;
        if ( *v34 )
        {
          FIELD_U32(v40, 24) = result;
          FIELD_U32(v40, 28) = v37;
          FIELD_U32(v40, 32) = v38;
          result = FIELD_U8(v40, 64) | 0x10;
          FIELD_U8(v40, 64) = result;
        }
      }
    }
  }
  return result;
}
