/* sub_60719430
 * address: 0x60719430   size: 1148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60719430(int a1, int a2)
{
  float v2; // s6
  float v3; // s0
  unsigned int v4; // r1
  float v5; // s2
  unsigned int v6; // s0
  unsigned int v7; // s2
  int v8; // r2
  int v9; // r6
  int v10; // r2
  int v11; // r4
  unsigned int v12; // r5
  int v13; // r2
  unsigned int v14; // r4
  int v15; // r10
  int v16; // r0
  int v17; // r0
  int v18; // r2
  int *v19; // r3
  __int16 v20; // r1
  int v21; // t1
  int v22; // r2
  int v23; // r3
  unsigned __int16 *v24; // r0
  int v25; // r0
  int v26; // r1
  int *v27; // r2
  int v28; // t1
  int v29; // r0
  int v30; // r1
  int *v31; // r2
  int v32; // t1
  int v33; // r0
  int v34; // r1
  int *v35; // r2
  int v36; // t1
  unsigned int v38; // [sp+8h] [bp-78h]
  unsigned int v39; // [sp+Ch] [bp-74h]
  unsigned int v40; // [sp+2Ch] [bp-54h]
  unsigned int v42; // [sp+34h] [bp-4Ch]
  int v43; // [sp+38h] [bp-48h]
  int v44; // [sp+44h] [bp-3Ch]
  int v46; // [sp+54h] [bp-2Ch]
  unsigned int v47; // [sp+58h] [bp-28h]

  v2 = FIELD_F32(dword_60CC6484, 36);
  v3 = FIELD_F32(dword_60CC6484, 24);
  v4 = (unsigned int)(float)(v2 - FIELD_F32(dword_60CC6484, 28));
  v5 = FIELD_F32(dword_60CC6484, 32) - v3;
  v6 = (unsigned int)v3;
  v7 = (unsigned int)v5;
  v8 = v4 >> 4;
  if ( (v4 & 0xF) != 0 )
    v8 = (v4 >> 4) + 1;
  v39 = v8;
  if ( v8 )
  {
    v38 = (unsigned int)(float)-v2;
    v9 = TileMgr_instance;
    v40 = v6;
    v10 = v7 >> 4;
    if ( (v7 & 0xF) != 0 )
      v10 = (v7 >> 4) + 1;
    v43 = 0;
    v42 = v10;
    v46 = 0;
    while ( !v42 )
    {
LABEL_57:
      if ( ++v43 >= v39 )
        return v46;
    }
    v11 = 0;
    v12 = (v38 + 16 * v43) & 0xFFF0;
    while ( 1 )
    {
      v44 = v11;
      v47 = (v40 + 16 * v11) & 0xFFF0;
      if ( a2 == 1 )
        break;
      v25 = sub_60715E94(v9, (v40 + 16 * v11) & 0xFFF0, v12, 0);
      v26 = dword_60CBD260;
      if ( dword_60CBD260 )
      {
        v27 = &dword_60CBD27C;
        if ( v25 == 0xFFFF )
          v25 = 0;
        while ( v26 != v25 )
        {
          v28 = *v27;
          v27 += 7;
          v26 = v28;
          if ( !v28 )
            goto LABEL_40;
        }
        ++v46;
      }
LABEL_40:
      if ( sub_6071B2AC(TilesetMgr_instance, FIELD_U8(LevelInfo_instance, 18), 1) )
      {
        v29 = sub_60715E94(v9, v47, v12, 1u);
        v30 = dword_60CBD260;
        if ( dword_60CBD260 )
        {
          v31 = &dword_60CBD27C;
          if ( v29 == 0xFFFF )
            v29 = 0;
          while ( v30 != v29 )
          {
            v32 = *v31;
            v31 += 7;
            v30 = v32;
            if ( !v32 )
              goto LABEL_48;
          }
          ++v46;
        }
      }
LABEL_48:
      if ( sub_6071B2AC(TilesetMgr_instance, FIELD_U8(LevelInfo_instance, 18), 2) )
      {
        v33 = sub_60715E94(v9, v47, v12, 2u);
        v34 = dword_60CBD260;
        if ( dword_60CBD260 )
        {
          v35 = &dword_60CBD27C;
          if ( v33 == 0xFFFF )
            v33 = 0;
          while ( v34 != v33 )
          {
            v36 = *v35;
            v35 += 7;
            v34 = v36;
            if ( !v36 )
              goto LABEL_56;
          }
          ++v46;
        }
      }
LABEL_56:
      v11 = v44 + 1;
      if ( v44 + 1 >= v42 )
        goto LABEL_57;
    }
    v13 = 0;
    v14 = (v40 + 16 * v11) & 0xFFF0;
    while ( 1 )
    {
      while ( 1 )
      {
        v15 = v13;
        if ( (unsigned __int16)v13 != 1 )
          break;
        v16 = sub_6071B2AC(TilesetMgr_instance, FIELD_U8(LevelInfo_instance, 18), 1);
        v13 = 2;
        if ( v16 )
          goto LABEL_17;
      }
      if ( !(_WORD)v13 )
        goto LABEL_17;
      if ( (unsigned __int16)v13 == 2 )
        break;
LABEL_31:
      v13 = v15 + 1;
      if ( (unsigned __int16)(v15 + 1) >= 3u )
        goto LABEL_56;
    }
    if ( !sub_6071B2AC(TilesetMgr_instance, FIELD_U8(LevelInfo_instance, 18), 2) )
      goto LABEL_56;
LABEL_17:
    v17 = sub_60715E94(v9, v14, v12, (unsigned __int8)v15);
    v18 = dword_60CBD260;
    if ( dword_60CBD260 )
    {
      v19 = &dword_60CBD27C;
      v20 = 0;
      if ( v17 == 0xFFFF )
        v17 = 0;
      while ( v18 != v17 )
      {
        v21 = *v19;
        v19 += 7;
        v18 = v21;
        ++v20;
        if ( !v21 )
          goto LABEL_30;
      }
      v22 = FIELD_U32(a1, 48);
      if ( v22 >= 1 )
      {
        v23 = 0;
        v24 = *(unsigned __int16 **)(a1 + 44);
        while ( *v24 != 0xFFFF )
        {
          ++v23;
          v24 += 28;
          if ( v23 >= v22 )
            goto LABEL_29;
        }
        rail_mat_ref(v24);
      }
LABEL_29:
      v12 = (v38 + 16 * v43) & 0xFFF0;
      ++v46;
LABEL_30:
      v14 = v47;
    }
    goto LABEL_31;
  }
  return 0;
}
