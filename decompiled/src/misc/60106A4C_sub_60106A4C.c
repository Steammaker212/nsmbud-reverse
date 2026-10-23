/* sub_60106A4C
 * address: 0x60106A4C   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60106A4C(int a1)
{
  unsigned int *v2; // r5
  int v3; // r1
  int v4; // r2
  float *v5; // r6
  int v6; // r1
  int v7; // r2
  float v8; // s0
  float v9; // s16
  int v10; // r6
  int **v11; // r8
  int v12; // r7
  int **v13; // r6
  int *v14; // t1
  int v15; // r1
  float v17; // [sp+0h] [bp-38h] BYREF
  int v18; // [sp+4h] [bp-34h]
  int v19; // [sp+8h] [bp-30h]

  v2 = (unsigned int *)(a1 + 156);
  v3 = FIELD_U32(a1, 112);
  v4 = FIELD_U32(a1, 116);
  v17 = FIELD_F32(a1, 108);
  v18 = v3;
  v19 = v4;
  v5 = (float *)(a1 + 6196);
  v17 = v17 + (float)((float)(FIELD_F32(a1, 6196) * (float)(1.0 - FIELD_F32(a1, 144))) + 8.0);
  sub_60106C90((StateActor *)a1, **(_DWORD **)(a1 + 6104), (int *)&v17, (unsigned int *)(a1 + 156));
  v6 = FIELD_U32(a1, 112);
  v7 = FIELD_U32(a1, 116);
  v17 = FIELD_F32(a1, 108);
  v18 = v6;
  v19 = v7;
  v8 = FIELD_F32(a1, 144);
  v9 = v17 + (float)((float)(*v5 * (float)(1.0 - v8)) + 8.0);
  v17 = v9;
  v10 = FIELD_U32(a1, 6112);
  if ( v10 )
  {
    v11 = *(int ***)(a1 + 6120);
    v9 = v9 + (float)(v8 * 16.0);
    v17 = v9;
    sub_60106C90((StateActor *)a1, **v11, (int *)&v17, v2);
    if ( v10 != 1 )
    {
      v12 = 4 * v10 - 4;
      v13 = v11 + 1;
      do
      {
        v9 = v9 + (float)(FIELD_F32(a1, 144) * 16.0);
        v17 = v9;
        v14 = *v13++;
        sub_60106C90((StateActor *)a1, *v14, (int *)&v17, v2);
        v12 -= 4;
      }
      while ( v12 );
    }
    v8 = FIELD_F32(a1, 144);
  }
  v15 = FIELD_U32(a1, 116);
  v18 = FIELD_U32(a1, 112);
  v19 = v15;
  v17 = v9 + (float)(v8 * 16.0);
  return sub_60106C90((StateActor *)a1, **(_DWORD **)(a1 + 6108), (int *)&v17, v2);
}
