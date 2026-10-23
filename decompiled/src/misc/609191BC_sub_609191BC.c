/* sub_609191BC
 * address: 0x609191BC   size: 744   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609191BC(int a1, void *a2)
{
  int v4; // r0
  char v5; // r1
  int v6; // r6
  char v7; // r1
  int v8; // r7
  _DWORD *v9; // r5
  int v10; // r5
  int v11; // r1
  void *v12; // r6
  int v13; // r0
  int v14; // r7
  int v15; // r1
  int v16; // r0
  int v17; // r5
  int v18; // r6
  int v19; // r6
  int v20; // r0
  unsigned int v21; // r6
  int v22; // r1
  int v23; // r2
  int v24; // r0
  char v25; // r1
  int v26; // r2
  int v27; // r3
  int v28; // r6
  int v29; // r7
  char v30; // r1
  char v31; // r2
  bool v32; // zf
  int result; // r0
  char v34; // r2
  int v35; // [sp+8h] [bp-30h] BYREF
  int v36; // [sp+Ch] [bp-2Ch]
  int v37; // [sp+10h] [bp-28h]
  int v38[9]; // [sp+14h] [bp-24h] BYREF

  v35 = 0;
  v36 = 0;
  v37 = 0;
  FIELD_U64(a1, 32) = dword_60CC77EC(FIELD_U32(a1, 576));
  FIELD_U32(a1, 572) = dword_60CC77E0(FIELD_U32(a1, 576));
  v4 = dword_60CC77D4(FIELD_U32(a1, 576));
  if ( v4 || FIELD_U32(a1, 572) )
    v5 = FIELD_U8(a1, 20) | 1;
  else
    v5 = FIELD_U8(a1, 20) & 0xFE;
  FIELD_U8(a1, 20) = v5;
  FIELD_U32(a1, 24) = v4;
  dword_60CC77B8(FIELD_U32(a1, 576));
  v6 = 0;
  FIELD_U32(a1, 576) = 0;
  v7 = FIELD_U8(a1, 20) & 0xF5;
  FIELD_U8(a1, 20) = v7 | 2;
  v8 = FIELD_U32(a1, 24);
  if ( v8 )
  {
    FIELD_U8(a1, 20) = v7 | 3;
    v9 = (_DWORD *)operator_new_8DE25C(0x1Cu, a2, 4);
    sub_60913BB4((int)v9);
    *v9 = off_60BF9C1C;
    sub_60913D88((int)v9, v8, (int)a2, 4, 1);
    sub_60913A6C(&v35, (int)v9, 0);
    if ( v35 )
      v6 = dword_60CC73E8(v35);
    v10 = 0;
    v11 = 0;
    v12 = (void *)(v6 + v36);
    v13 = FIELD_U32(a1, 4);
    v14 = FIELD_U32(a1, 8);
    if ( v13 )
      v11 = dword_60CC73E8(v13);
    qmemcpy(v12, (const void *)(v11 + v14), FIELD_U32(a1, 24));
    sub_60913B04(&v35, FIELD_U32(a1, 24));
    v15 = FIELD_U32(a1, 24);
    if ( v15 )
    {
      v16 = FIELD_U32(a1, 4);
      v17 = FIELD_U32(a1, 8);
      v18 = v17 + v15;
      if ( v16 )
      {
        v19 = dword_60CC73E8(v16) + v18 + 63;
        v20 = FIELD_U32(a1, 4);
        v17 = FIELD_U32(a1, 8);
        v21 = v19 & 0xFFFFFFC0;
        if ( v20 )
        {
          v22 = dword_60CC73E8(v20);
          v20 = FIELD_U32(a1, 4);
          v23 = FIELD_U32(a1, 8);
        }
        else
        {
          v22 = 0;
          v23 = FIELD_U32(a1, 8);
        }
      }
      else
      {
        v20 = 0;
        v23 = FIELD_U32(a1, 8);
        v22 = 0;
        v21 = (v18 + 63) & 0xFFFFFFC0;
      }
      v38[0] = v20;
      v38[1] = v23;
      v38[2] = FIELD_U32(a1, 12);
      sub_60913B5C(v38, v21 - (v22 + v17));
      v10 = FIELD_U32(a1, 24);
    }
    v24 = FIELD_U32(a1, 572);
    v25 = FIELD_U8(a1, 20);
    v28 = v35;
    v27 = v36;
    v26 = v37;
  }
  else
  {
    v24 = FIELD_U32(a1, 572);
    if ( v24 )
    {
      v25 = v7 | 3;
    }
    else
    {
      v25 = v7 & 0xF4 | 2;
      v24 = 0;
    }
    v26 = 0;
    FIELD_U8(a1, 20) = v25;
    FIELD_U32(a1, 24) = 0;
    v27 = 0;
    v28 = 0;
    v10 = 0;
  }
  v29 = v28;
  v30 = v25 & 0xFC;
  if ( v28 )
    v29 = v10;
  FIELD_U32(a1, 16) = v29;
  FIELD_U32(a1, 4) = v28;
  FIELD_U32(a1, 8) = v27;
  FIELD_U32(a1, 12) = v26;
  v31 = v24;
  if ( v24 )
    v31 = 1;
  v32 = (v10 | v24) == 0;
  result = v10;
  v34 = v31 | v30;
  if ( !v32 )
    v30 |= 1u;
  FIELD_U8(a1, 20) = v34;
  FIELD_U32(a1, 24) = 0;
  FIELD_U8(a1, 20) = v30;
  FIELD_U32(a1, 24) = v10;
  return result;
}
