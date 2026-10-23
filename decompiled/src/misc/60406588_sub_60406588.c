/* sub_60406588
 * address: 0x60406588   size: 764   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60406588(int a1, unsigned int a2, int a3)
{
  int v3; // r7
  int v4; // r4
  int v5; // r5
  _BOOL4 v6; // r0
  int v7; // r1
  bool v8; // zf
  unsigned int v9; // r0
  int v10; // r9
  int v11; // r11
  int v12; // r5
  int v13; // r6
  int v14; // r4
  int v15; // r10
  int v16; // r0
  int v17; // r7
  int v18; // r1
  unsigned int v19; // r1
  int v20; // r0
  int v21; // r0
  int *v22; // r1
  int v23; // r1
  int v24; // r6
  unsigned int v25; // r4
  int v26; // r0
  unsigned __int64 v27; // kr00_8
  bool v28; // zf
  bool v29; // zf
  bool v30; // zf
  int v31; // r5
  int v32; // r6
  _BOOL4 v33; // r0
  int v34; // r1
  bool v35; // zf
  int v37; // [sp+8h] [bp-68h]
  int v39; // [sp+10h] [bp-60h]
  int v41; // [sp+18h] [bp-58h]
  int v42; // [sp+1Ch] [bp-54h]
  unsigned int v43; // [sp+24h] [bp-4Ch]
  int v44; // [sp+28h] [bp-48h]
  int v45; // [sp+2Ch] [bp-44h]
  int v46; // [sp+30h] [bp-40h]
  int v47; // [sp+34h] [bp-3Ch]
  int v48; // [sp+38h] [bp-38h]
  int v49; // [sp+3Ch] [bp-34h]
  int v50; // [sp+40h] [bp-30h]
  int v51; // [sp+44h] [bp-2Ch]

  v3 = a1;
  v4 = 0;
  FIELD_U32(a1, 532) = a2;
  v43 = 0;
  FIELD_U32(a1, 540) = 0;
  do
  {
    v5 = v3 + 16 * v4;
    v6 = sub_60406468();
    v7 = FIELD_U32(v5, 20) & 2;
    if ( v6 )
    {
      v8 = v7 == 0;
      if ( v7 )
        v8 = v4 == 4;
      if ( !v8 && v4 != 7 )
      {
LABEL_11:
        FIELD_U32(v3, 532) = v4;
        v43 += FIELD_U32(v5, 24);
      }
    }
    else if ( v7 && ((unsigned int)(v4 - 4) > 3 || (((_BYTE)v4 - 4) & 0xF) == 1) )
    {
      goto LABEL_11;
    }
    ++v4;
  }
  while ( v4 != 32 );
  v51 = 0;
  v50 = 0;
  v49 = 0;
  v48 = 0;
  v47 = 0;
  v46 = 0;
  v45 = 0;
  v44 = 0;
  if ( a3 < 1 )
    goto LABEL_49;
  v9 = 0;
  v39 = v3;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  if ( a2 < 0x20 )
    v9 = a2;
  v16 = v3 + 16 * v9;
  v17 = 0;
  v37 = v16 + 32;
  v41 = 0;
  v42 = 0;
  while ( 1 )
  {
    do
    {
      do
LABEL_25:
        v27 = sead__Random__getU32((void *)sead__GlobalRandom__sInstance) * (unsigned __int64)v43;
      while ( v10 == HIDWORD(v27) );
    }
    while ( v11 == HIDWORD(v27) );
    v28 = v12 == HIDWORD(v27);
    if ( v12 != HIDWORD(v27) )
      v28 = v13 == HIDWORD(v27);
    if ( !v28 )
    {
      v29 = v14 == HIDWORD(v27);
      if ( v14 != HIDWORD(v27) )
        v29 = v15 == HIDWORD(v27);
      if ( !v29 )
      {
        v30 = v17 == HIDWORD(v27);
        if ( v17 != HIDWORD(v27) )
          v30 = v42 == HIDWORD(v27);
        if ( !v30 )
          break;
      }
    }
  }
  v3 = v39;
  v25 = 0;
  v31 = 0;
  while ( 2 )
  {
    v32 = v39 + 16 * v25;
    v33 = sub_60406468();
    v34 = FIELD_U32(v32, 20) & 2;
    if ( !v33 )
    {
      if ( v34 && (v25 - 4 > 3 || (((_BYTE)v25 - 4) & 0xF) == 1) )
        goto LABEL_46;
LABEL_47:
      if ( (int)++v25 >= 32 )
      {
        v24 = v41;
        v26 = 0;
        goto LABEL_17;
      }
      continue;
    }
    break;
  }
  v35 = v34 == 0;
  if ( v34 )
    v35 = v25 == 4;
  if ( v35 || v25 == 7 )
    goto LABEL_47;
LABEL_46:
  FIELD_U32(v39, 532) = v25;
  v31 += FIELD_U32(v32, 24);
  if ( v31 <= SHIDWORD(v27) )
    goto LABEL_47;
  v19 = 0;
  if ( v25 < 0x20 )
    v19 = v25;
  v20 = v31 - HIDWORD(v27) - 1;
  FIELD_U32(v39, 540) = v20;
  v22 = (int *)(*(_DWORD *)(*(_DWORD *)(v39 + 16 * v19 + 32) + 4) + 8 * v20);
  v21 = *v22;
  v23 = v22[1];
  FIELD_U32(v39, 532) = a2;
  v24 = v41;
  FIELD_U32(v39, 540) = v41;
  *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v37 + 4) + 8 * v41 + 4) = v23;
  *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v37 + 4) + 8 * v41) = v21;
  ++FIELD_U32(v39, 540);
  if ( v25 >= 8 )
    v25 = 0;
  *(&v44 + v25) = HIDWORD(v27);
  v26 = -(v41 < a3 - 1 && v23 == 22);
LABEL_17:
  v18 = v24 + v26 + 1;
  if ( v18 < a3 )
  {
    v17 = v50;
    v15 = v49;
    v14 = v48;
    v10 = v44;
    v11 = v45;
    v12 = v46;
    v13 = v47;
    v41 = v18;
    v42 = v51;
    goto LABEL_25;
  }
LABEL_49:
  FIELD_U32(v3, 540) = 0;
  return 0;
}
