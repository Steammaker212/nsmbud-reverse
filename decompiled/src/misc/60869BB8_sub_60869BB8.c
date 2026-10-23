/* sub_60869BB8
 * address: 0x60869BB8   size: 880   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60869BB8(int a1, int a2, int a3)
{
  unsigned int v6; // r0
  int v7; // r7
  int v8; // r0
  int v9; // r7
  int v10; // t1
  _DWORD *v11; // r1
  int v12; // r0
  int v13; // r2
  _DWORD *v14; // r0
  int v15; // r0
  int v16; // r0
  bool v17; // zf
  _DWORD *v18; // r2
  int v19; // r1
  int v20; // r3
  int v21; // r0
  _DWORD *v22; // r1
  int v23; // r0
  int v24; // r2
  int v25; // r1
  int v26; // r0
  _DWORD *v27; // r1
  int v28; // r0
  int v29; // r2
  int v30; // r0
  int v31; // r0
  int v32; // r2
  __int64 v34; // [sp+8h] [bp-28h] BYREF
  int v35; // [sp+10h] [bp-20h]
  int v36; // [sp+14h] [bp-1Ch]

  v6 = FIELD_U32(a1, 12);
  if ( (v6 & 0x200) != 0 )
  {
    v7 = FIELD_U32(a1, 20);
    v8 = ((8 * v6) & 0x18) + (v6 & 0x30) + 20 * ((v6 >> 2) & 3);
    v10 = *(unsigned __int8 *)(v7 + v8);
    v9 = v7 + v8;
    dword_60CC76BC(FIELD_U32(a1, 44) + 8, dword_60AF4FB0[v10]);
    dword_60CC7900(FIELD_U32(a2, 184), FIELD_F32(v9, 4));
    sub_60835A38(a2, *(int **)(a1 + 44));
    dword_60CC76BC(FIELD_U32(a1, 44) + 8, 8);
  }
  else
  {
    sub_60835A38(a2, *(int **)(a1 + 44));
  }
  v36 = 0;
  v35 = 0;
  v34 = 0;
  v11 = (_DWORD *)(*(_DWORD *)(FIELD_U32(a3, 192) + 8) + 16 * *(_DWORD *)(FIELD_U32(a3, 192) + 28));
  LODWORD(v34) = *v11;
  v12 = v11[1];
  v13 = v11[2];
  v36 = v11[3];
  v35 = v13;
  HIDWORD(v34) = v12;
  v34 += FIELD_S32(a1, 32);
  v14 = *(_DWORD **)(a1 + 40);
  if ( v14 )
    v15 = *v14 + 560;
  else
    v15 = 560;
  sub_60836348(
    a2,
    *(_DWORD *)(*(_DWORD *)(FIELD_U32(a1, 24) + 12) + 4 * FIELD_U8(a1, 51)),
    0,
    &v34,
    v15);
  v16 = FIELD_U32(a1, 40);
  v17 = v16 == 0;
  if ( v16 )
    v17 = FIELD_U32(v16, 12) == 0;
  if ( !v17 )
  {
    v36 = 0;
    v35 = 0;
    v34 = 0;
    v18 = (_DWORD *)(*(_DWORD *)(FIELD_U32(a3, 192) + 8) + 16 * *(_DWORD *)(FIELD_U32(a3, 192) + 28));
    LODWORD(v34) = *v18;
    v19 = v18[1];
    v20 = v18[2];
    v36 = v18[3];
    v35 = v20;
    HIDWORD(v34) = v19;
    v34 += FIELD_S32(v16, 12);
    sub_60836348(
      a2,
      *(_DWORD *)(*(_DWORD *)(FIELD_U32(a1, 24) + 16) + 4 * FIELD_U8(a1, 51)),
      3,
      &v34,
      FIELD_U32(v16, 8));
  }
  v21 = FIELD_U32(a1, 12);
  if ( (v21 & 0x30000) != 0 )
  {
    v36 = 0;
    v35 = 0;
    v34 = 0;
    v22 = (_DWORD *)(*(_DWORD *)(FIELD_U32(a3, 192) + 8) + 16 * *(_DWORD *)(FIELD_U32(a3, 192) + 28));
    LODWORD(v34) = *v22;
    if ( (v21 & 0x10000) != 0 )
    {
      v31 = v22[1];
      v32 = v22[2];
      v36 = v22[3];
      v35 = v32;
      HIDWORD(v34) = v31;
      v34 += FIELD_S32(a1, 36);
      v25 = *(_DWORD *)(*(_DWORD *)(FIELD_U32(a1, 24) + 20) + 4 * FIELD_U8(a1, 51));
      v26 = 224;
    }
    else
    {
      v23 = v22[1];
      v24 = v22[2];
      v36 = v22[3];
      v35 = v24;
      HIDWORD(v34) = v23;
      v34 += FIELD_S32(a1, 36);
      v25 = *(_DWORD *)(*(_DWORD *)(FIELD_U32(a1, 24) + 20) + 4 * FIELD_U8(a1, 51));
      v26 = 416;
    }
  }
  else
  {
    v36 = 0;
    v35 = 0;
    v34 = 0;
    v27 = (_DWORD *)(*(_DWORD *)(FIELD_U32(a3, 192) + 8) + 16 * *(_DWORD *)(FIELD_U32(a3, 192) + 28));
    LODWORD(v34) = *v27;
    v28 = v27[1];
    v29 = v27[2];
    v36 = v27[3];
    v35 = v29;
    HIDWORD(v34) = v28;
    v34 += FIELD_S32(a1, 36);
    v30 = FIELD_U32(a1, 40);
    if ( v30 )
      v26 = FIELD_U32(v30, 4) + 144;
    else
      v26 = 144;
    v25 = *(_DWORD *)(*(_DWORD *)(FIELD_U32(a1, 24) + 20) + 4 * FIELD_U8(a1, 51));
  }
  return sub_60836348(a2, v25, 4, &v34, v26);
}
